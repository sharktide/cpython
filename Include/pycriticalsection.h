#ifndef Py_CRITICAL_SECTION_H
#define Py_CRITICAL_SECTION_H

#include "pycore_lock.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    PyMutex *_cs_mutex;
    uintptr_t _cs_prev;
} PyCriticalSection;

PyAPI_FUNC(void) PyCriticalSection_BeginMutex(PyCriticalSection *c, PyMutex *m);

#ifdef __cplusplus
}
#endif

#endif /* Py_CRITICAL_SECTION_H */
