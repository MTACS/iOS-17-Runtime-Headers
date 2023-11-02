
@interface JFXThreadSafeArray : NSObject {
    NSMutableArray * _array;
    NSObject<OS_dispatch_queue> * _concurrentQueue;
}

@property (nonatomic, retain) NSMutableArray *array;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (readonly) unsigned long long count;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (id)array;
- (id)concurrentQueue;
- (bool)containsObject:(id)arg1;
- (id)copyOfArray;
- (unsigned long long)count;
- (id)description;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (unsigned long long)indexOfObject:(id)arg1;
- (id)init;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)moveObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)setArray:(id)arg1;
- (void)setConcurrentQueue:(id)arg1;
- (void)sortUsingSelector:(SEL)arg1;
- (id)sortedArrayUsingComparator:(id /* block */)arg1;

@end
