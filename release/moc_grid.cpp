/****************************************************************************
** Meta object code from reading C++ file 'grid.h'
**
** Created: Tue Sep 9 15:45:23 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../grid.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'grid.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Grid[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x05,

 // slots: signature, parameters, type, tag, flags
      29,   24,    5,    5, 0x0a,
      43,   24,    5,    5, 0x0a,
      57,    5,    5,    5, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Grid[] = {
    "Grid\0\0scoreChanged(int)\0path\0save(QString)\0"
    "load(QString)\0reinit()\0"
};

void Grid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Grid *_t = static_cast<Grid *>(_o);
        switch (_id) {
        case 0: _t->scoreChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->save((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->load((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->reinit(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Grid::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Grid::staticMetaObject = {
    { &QGraphicsWidget::staticMetaObject, qt_meta_stringdata_Grid,
      qt_meta_data_Grid, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Grid::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Grid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Grid::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Grid))
        return static_cast<void*>(const_cast< Grid*>(this));
    return QGraphicsWidget::qt_metacast(_clname);
}

int Grid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Grid::scoreChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
