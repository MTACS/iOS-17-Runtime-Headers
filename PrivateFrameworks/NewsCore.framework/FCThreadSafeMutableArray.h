
@interface FCThreadSafeMutableArray : NSObject {
    NSMutableArray * _array;
    NFUnfairLock * _lock;
}

@property (nonatomic, readonly) id firstObject;
@property (nonatomic, readonly) id lastObject;
@property (nonatomic, readonly, copy) NSArray *readOnlyArray;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)firstObject;
- (id)firstObjectPassingTest:(id /* block */)arg1;
- (id)init;
- (id)lastObject;
- (id)readOnlyArray;
- (void)readWriteWithAccessor:(id /* block */)arg1;
- (void)removeAllObjects;
- (void)removeFirstObject;

@end
