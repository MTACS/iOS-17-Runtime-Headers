
@interface Swift._SwiftNSMutableArray : Swift._SwiftNativeNSMutableArray {
    void contents;
}

@property (nonatomic, readonly) long long count;

- (void)addObject:(id)arg1;
- (id)copyWithZone:(void*)arg1;
- (long long)count;
- (long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(long long)arg3;
- (void)exchangeObjectAtIndex:(long long)arg1 withObjectAtIndex:(long long)arg2;
- (void)getObjects:(id*)arg1 range:(struct { long long x1; long long x2; })arg2;
- (long long)indexOfObjectIdenticalTo:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(long long)arg2;
- (void)insertObjects:(const id*)arg1 count:(long long)arg2 atIndex:(long long)arg3;
- (id)objectAtIndex:(long long)arg1;
- (id)objectAtIndexedSubscript:(long long)arg1;
- (void)removeAllObjects;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(long long)arg1;
- (void)removeObjectsInRange:(struct { long long x1; long long x2; })arg1;
- (void)replaceObjectAtIndex:(long long)arg1 withObject:(id)arg2;
- (void)replaceObjectsInRange:(struct { long long x1; long long x2; })arg1 withObjects:(const id*)arg2 count:(long long)arg3;
- (void)setObject:(id)arg1 atIndex:(long long)arg2;
- (void)setObject:(id)arg1 atIndexedSubscript:(long long)arg2;

@end
