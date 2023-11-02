
@interface HDExtendedDatabaseTransaction : NSObject {
    NSObject<OS_dispatch_source> * _automaticRollbackTimer;
    NSObject<OS_dispatch_semaphore> * _completionSemaphore;
    double  _continuationTimeout;
    NSObject<OS_dispatch_queue> * _dataQueue;
    HDDatabase * _database;
    NSError * _lastError;
    id /* block */  _pendingWork;
    bool  _pendingWorkDidSucceed;
    NSObject<OS_dispatch_semaphore> * _pendingWorkSemaphore;
    unsigned long long  _status;
    NSUUID * _transactionIdentifier;
    NSObject<OS_dispatch_queue> * _transactionQueue;
    double  _transactionTimeout;
}

@property (nonatomic, readonly) double continuationTimeout;
@property (nonatomic, readonly) HDDatabase *database;
@property (nonatomic, readonly, copy) NSUUID *transactionIdentifier;
@property (nonatomic, readonly) double transactionTimeout;

- (void).cxx_destruct;
- (bool)commitWithErrorOut:(id*)arg1;
- (double)continuationTimeout;
- (id)database;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1 context:(id)arg2 transactionTimeout:(double)arg3 continuationTimeout:(double)arg4 error:(id*)arg5;
- (bool)performInTransactionWithErrorOut:(id*)arg1 block:(id /* block */)arg2;
- (bool)rollbackDueToError:(id)arg1 errorOut:(id*)arg2;
- (id)transactionIdentifier;
- (double)transactionTimeout;

@end
