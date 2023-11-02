
@interface _PFMutableProxyArray : NSMutableArray <PFObjectIDCollection> {
    int  _cd_rc;
    unsigned int  _editCount;
    struct __CFArray { } * _indicesVeneer;
    unsigned int  _limit;
    unsigned int  _offset;
    _PFArray * _originalArray;
    NSMutableArray * _updatedObjectsArray;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)classForKeyedUnarchiver;

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (void)addObject:(id)arg1;
- (id)arrayFromObjectIDs;
- (Class)classForCoder;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)indexOfManagedObjectForObjectID:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithPFArray:(id)arg1;
- (id)initWithPFArray:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)managedObjectIDAtIndex:(unsigned long long)arg1;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)newArrayFromObjectIDs;
- (id)objectAtIndex:(unsigned long long)arg1;
- (oneway void)release;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)retain;
- (unsigned long long)retainCount;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)valueForKey:(id)arg1;

@end
