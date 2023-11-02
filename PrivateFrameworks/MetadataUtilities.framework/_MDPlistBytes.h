
@interface _MDPlistBytes : NSObject {
    unsigned long long  _byteVector;
    unsigned int  _byteVectorCapacity;
    unsigned int  _byteVectorCnt;
    id /* block */  _deallocator;
    unsigned int  _didFinalize;
    unsigned int  _isBad;
    unsigned int  _isMutable;
    unsigned int  _isMutating;
    struct __CFArray { } * _rleQueue;
    int  _uidCapacity;
    int  _uidCount;
    unsigned long long * _uidVector;
    unsigned int  _useMalloc;
    unsigned long long * _wrapperPtr;
    struct _malloc_zone_t { void *x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); char *x10; int (*x11)(); int (*x12)(); struct malloc_introspection_t {} *x13; unsigned int x14; int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); } * _zone;
}

+ (struct __MDPlistBytes { }*)createArrayPlistBytesUsingBlock:(id /* block */)arg1;
+ (struct __MDPlistBytes { }*)createDictionaryPlistBytesUsingBlock:(id /* block */)arg1;
+ (struct __MDPlistBytes { }*)createPlistBytes:(id)arg1;
+ (struct __MDPlistBytes { }*)emptyArrayPlistBytes;
+ (struct __MDPlistBytes { }*)emptyDictionaryPlistBytes;
+ (void)enumerateObjectsFromPlistBytes:(char *)arg1 count:(unsigned int)arg2 shouldDeallocate:(bool)arg3 usingBlock:(id /* block */)arg4;
+ (struct __MDPlistBytes { }*)nullObjectPlistBytes;

- (unsigned long long)_cfTypeID;
- (struct __CFData { }*)copyData;
- (struct __CFData { }*)copyDataWithBytesNoCopy;
- (void)dealloc;
- (id)description;
- (void)dumpUIDs;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (bool)enumerateQueryResults:(unsigned long long)arg1 attributeSize:(unsigned long long)arg2 stringCache:(struct { struct __CFDictionary {} *x1; struct __CFDictionary {} *x2; unsigned int x3; }*)arg3 usingBlock:(id /* block */)arg4;
- (void)enumerateQueryResults:(unsigned long long)arg1 stringCache:(struct { struct __CFDictionary {} *x1; struct __CFDictionary {} *x2; unsigned int x3; }*)arg2 usingBlock:(id /* block */)arg3;
- (id)initWithByteVector:(char *)arg1 count:(unsigned int)arg2 deallocator:(id /* block */)arg3;
- (id)initWithByteVector:(char *)arg1 count:(unsigned int)arg2 shouldDeallocate:(bool)arg3;
- (id)initWithByteVector:(char *)arg1 count:(unsigned int)arg2 trusted:(unsigned char)arg3 deallocator:(id /* block */)arg4;
- (bool)isEqual:(id)arg1;

@end
