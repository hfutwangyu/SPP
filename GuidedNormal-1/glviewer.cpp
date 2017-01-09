#include "glviewer.h"
#include <QFileDialog>
#include <QColorDialog>

GLViewer::GLViewer(QWidget *parent)
:QGLWidget(parent)
{
	examiner_ = new MeshExaminer();
}

GLViewer::~GLViewer()
{
	if (examiner_) delete examiner_;
	examiner_ = NULL;
}

void GLViewer::mousePressEvent(QMouseEvent *event)
{
	examiner_->mousePressEvent(event);
}

void GLViewer::mouseReleaseEvent(QMouseEvent *event)
{
	examiner_->mouseReleaseEvent(event);
}

void GLViewer::mouseMoveEvent(QMouseEvent *event)
{
	examiner_->mouseMoveEvent(event);
	this->updateGL();
}

void GLViewer::wheelEvent(QWheelEvent *event)
{
	examiner_->wheelEvent(event);
	this->updateGL();
}

void GLViewer::mouseDoubleClickEvent(QMouseEvent*)
{
}

void GLViewer::paintGL()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	examiner_->draw();
}

void GLViewer::initializeGL()
{
	examiner_->init();
}

void GLViewer::resizeGL(int _w, int _h)
{
	examiner_->reshape(_w, _h);
}

void GLViewer::updateMesh(const TriMesh &_mesh)
{
	examiner_->updateMesh(_mesh);
}

void GLViewer::resetMesh(const TriMesh &_mesh, bool _need_normalize)
{
	examiner_->resetMesh(_mesh, _need_normalize);
}

void GLViewer::setDrawPointsStatus(bool _val)
{
	examiner_->setDrawPointsStatus(_val);
	this->updateGL();
}

void GLViewer::setDrawFacesStatus(bool _val)
{
	examiner_->setDrawFacesStatus(_val);
	this->updateGL();
}

void GLViewer::setDrawEdgesStatus(bool _val)
{
	examiner_->setDrawEdgesStatus(_val);
	this->updateGL();
}

void GLViewer::setBackgroundColor()
{
	QColor color = QColorDialog::getColor(Qt::black, this, tr("Set Background Color!"));
	if (!color.isValid()) return;
	this->qglClearColor(color);
	this->updateGL();
}