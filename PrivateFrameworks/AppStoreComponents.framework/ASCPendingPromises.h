
@interface ASCPendingPromises : NSObject {
    NSMutableArray * _binaryPromisesIfLoaded;
    NSMutableArray * _promisesIfLoaded;
    NSRecursiveLock * _stateLock;
}

@property (nonatomic, readonly) NSMutableArray *binaryPromises;
@property (nonatomic, retain) NSMutableArray *binaryPromisesIfLoaded;
@property (nonatomic, readonly) bool hasPromises;
@property (nonatomic, readonly) NSMutableArray *promises;
@property (nonatomic, retain) NSMutableArray *promisesIfLoaded;
@property (nonatomic, readonly) NSRecursiveLock *stateLock;

- (void).cxx_destruct;
- (void)addBinaryPromise:(id)arg1;
- (void)addPromise:(id)arg1;
- (id)binaryPromises;
- (id)binaryPromisesIfLoaded;
- (void)cancelAll;
- (bool)containsBinaryPromise:(id)arg1;
- (bool)containsPromise:(id)arg1;
- (void)enumerateBinaryPromises:(id /* block */)arg1 andPromises:(id /* block */)arg2;
- (void)finishAllWithError:(id)arg1;
- (bool)hasPromises;
- (id)init;
- (id)promises;
- (id)promisesIfLoaded;
- (void)setBinaryPromisesIfLoaded:(id)arg1;
- (void)setPromisesIfLoaded:(id)arg1;
- (id)stateLock;
- (void)withLock:(id /* block */)arg1;

@end
