
@interface CPLEngineStoreTransaction : NSObject {
    CPLEngineWriteTransactionBlocker * _blocker;
    NSMutableArray * _cleanupBlocks;
    NSThread * _currentThread;
    CPLTransaction * _dirty;
    NSError * _error;
    bool  _forWrite;
    NSString * _name;
    CPLEngineStore * _store;
}

@property (nonatomic, retain) CPLEngineWriteTransactionBlocker *blocker;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) CPLEngineStore *store;

- (void).cxx_destruct;
- (bool)_forWrite;
- (void)_releaseDirty;
- (void)_transactionDidFinish;
- (void)_transactionWillBeginOnThread:(id)arg1;
- (void)addCleanupBlock:(id /* block */)arg1;
- (id)blocker;
- (bool)canRead;
- (bool)canWrite;
- (void)dealloc;
- (id)description;
- (bool)do:(id /* block */)arg1;
- (id)error;
- (id)initForWrite:(bool)arg1 store:(id)arg2 identifier:(id)arg3 description:(id)arg4;
- (id)name;
- (id)redactedDescription;
- (void)setBlocker:(id)arg1;
- (void)setError:(id)arg1;
- (void)setName:(id)arg1;
- (id)store;

@end
