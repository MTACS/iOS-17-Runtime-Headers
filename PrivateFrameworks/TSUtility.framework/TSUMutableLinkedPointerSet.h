
@interface TSUMutableLinkedPointerSet : NSObject <NSFastEnumeration> {
    struct __CFDictionary { } * mDictionary;
    TSULinkedPointerSetEntry * mHead;
    TSULinkedPointerSetEntry * mTail;
}

- (void)addObject:(id)arg1;
- (id)array;
- (bool)containsObject:(id)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)firstObject;
- (bool)hasObjects;
- (id)init;
- (void)insertFirstObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)objectEnumerator;
- (id)objectEnumeratorAfterObject:(id)arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (id)reverseObjectEnumerator;

@end
