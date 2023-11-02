
@interface AKSparseMutableControllerArray : NSMutableArray {
    NSMutableArray * _backendArray;
}

- (void).cxx_destruct;
- (void)_backFillUntilCount:(unsigned long long)arg1;
- (void)addObject:(id)arg1;
- (bool)containsAnyObjects:(id)arg1;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (void)removeAllObjects;
- (void)removeLastObject;
- (void)removeObject:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;

@end
