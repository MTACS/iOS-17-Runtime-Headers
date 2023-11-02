
@interface PETAggregateStateStorage : NSObject

+ (id)storageInMemory;
+ (id)storageOnDisk:(id)arg1;

- (void)expand:(unsigned long long)arg1 andRunWithLock:(id /* block */)arg2;
- (void)reset;
- (bool)resetLocked;
- (void)runWithLock:(id /* block */)arg1;
- (void)saveCorruptState;

@end
