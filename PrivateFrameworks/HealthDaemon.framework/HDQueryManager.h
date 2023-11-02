
@interface HDQueryManager : NSObject <HDDiagnosticObject, HDProcessStateObserver> {
    long long  _countOfExecutingThrottledDatabaseAccessBlocks;
    HDDaemon * _daemon;
    NSMutableArray * _executingDatabaseAccessBlocks;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _pendingDatabaseAccessBlocks;
    NSMutableDictionary * _queryCollectionsByProcessBundleIdentifier;
    NSMutableDictionary * _queryServersByUUID;
    <HDQueryManagerUnitTestDelegate> * _unitTest_delegate;
    NSObject<OS_dispatch_queue> * _unitTest_delegateQueue;
    long long  _unitTest_suspendCount;
}

@property (nonatomic, readonly) HDDaemon *daemon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property <HDQueryManagerUnitTestDelegate> *unitTest_delegate;
@property (retain) NSObject<OS_dispatch_queue> *unitTest_delegateQueue;

- (void).cxx_destruct;
- (id)daemon;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)initWithDaemon:(id)arg1;
- (void)logDiagnostics;
- (void)processWithBundleIdentifier:(id)arg1 didTransitionFromState:(unsigned int)arg2 toState:(unsigned int)arg3;
- (void)scheduleDatabaseAccessForQueryServer:(id)arg1 block:(id /* block */)arg2;
- (void)setUnitTest_delegate:(id)arg1;
- (void)setUnitTest_delegateQueue:(id)arg1;
- (void)startQueryServer:(id)arg1 completion:(id /* block */)arg2;
- (id)unitTest_delegate;
- (id)unitTest_delegateQueue;
- (void)unitTest_suspendWithCount:(unsigned long long)arg1;

@end
