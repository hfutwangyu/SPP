/****************************************************************************
** Meta object code from reading C++ file 'glviewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../glviewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GLViewer_t {
    QByteArrayData data[7];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GLViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GLViewer_t qt_meta_stringdata_GLViewer = {
    {
QT_MOC_LITERAL(0, 0, 8), // "GLViewer"
QT_MOC_LITERAL(1, 9, 19), // "setDrawPointsStatus"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 4), // "_val"
QT_MOC_LITERAL(4, 35, 18), // "setDrawFacesStatus"
QT_MOC_LITERAL(5, 54, 18), // "setDrawEdgesStatus"
QT_MOC_LITERAL(6, 73, 18) // "setBackgroundColor"

    },
    "GLViewer\0setDrawPointsStatus\0\0_val\0"
    "setDrawFacesStatus\0setDrawEdgesStatus\0"
    "setBackgroundColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GLViewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       5,    1,   40,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

       0        // eod
};

void GLViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GLViewer *_t = static_cast<GLViewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setDrawPointsStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setDrawFacesStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setDrawEdgesStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setBackgroundColor(); break;
        default: ;
        }
    }
}

const QMetaObject GLViewer::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_GLViewer.data,
      qt_meta_data_GLViewer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GLViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GLViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GLViewer.stringdata0))
        return static_cast<void*>(const_cast< GLViewer*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int GLViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
