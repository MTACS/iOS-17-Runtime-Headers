
@interface _MDMutablePlistBytes : _MDPlistBytes {
    unsigned long long  _curContainer;
    int  _currentUID;
    unsigned long long * _fillPtr;
    unsigned long long * _limitPtr;
    int  _parentCount;
    int  _parentSize;
    int * _parentUIDs;
    struct __CFDictionary { } * _ptrUIDMap;
    unsigned long long * _rleTagPtr;
}

+ (struct __MDPlistBytes { }*)createArrayPlistBytesUsingBlock:(id /* block */)arg1;
+ (struct __MDPlistBytes { }*)createDictionaryPlistBytesUsingBlock:(id /* block */)arg1;

- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithCapacity:(unsigned long long)arg1 useMalloc:(bool)arg2;
- (id)initWithCapacity:(unsigned long long)arg1 useMalloc:(bool)arg2 zone:(struct _malloc_zone_t { void *x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); char *x10; int (*x11)(); int (*x12)(); struct malloc_introspection_t {} *x13; unsigned int x14; int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); }*)arg3;

@end
