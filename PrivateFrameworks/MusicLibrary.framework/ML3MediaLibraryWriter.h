
@interface ML3MediaLibraryWriter : NSObject {
    NSOperationQueue * _databaseOperationLimitedQueue;
    NSOperationQueue * _databaseOperationQueue;
    NSOperationQueue * _databaseOperationSerialQueue;
    <ML3MediaLibraryWriterDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _serialQueue;
    bool  _suspended;
    NSMutableDictionary * _transactionMap;
    double  _transactionTimeout;
    NSTimer * _watchdogTimer;
}

@property (nonatomic, readonly) NSOperationQueue *databaseOperationLimitedQueue;
@property (nonatomic, readonly) NSOperationQueue *databaseOperationQueue;
@property (nonatomic, readonly) NSOperationQueue *databaseOperationSerialQueue;
@property (nonatomic) <ML3MediaLibraryWriterDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (getter=isSuspended, nonatomic) bool suspended;
@property (nonatomic, readonly) NSMutableDictionary *transactionMap;
@property (nonatomic) double transactionTimeout;

+ (id)writerErrorWithCode:(long long)arg1 description:(id)arg2;
+ (id)writerErrorWithCode:(long long)arg1 description:(id)arg2 userInfo:(id)arg3;

- (void).cxx_destruct;
- (id)_allDatabaseOperations;
- (id)_createNewTransactionForLibrary:(id)arg1 fromClient:(id)arg2 readOnly:(bool)arg3;
- (void)_destroyTransaction:(id)arg1 forceRelinquishConnection:(bool)arg2;
- (void)_destroyTransactionForIdentifier:(id)arg1 forceRelinquishConnection:(bool)arg2;
- (void)_registerTransaction:(id)arg1;
- (void)_setupWatchdogTimer;
- (bool)_shouldWatchdogTransaction:(id)arg1;
- (void)_tearDownWatchdogTimer;
- (id)_transactionForIdentifier:(id)arg1;
- (void)_unregisterTransaction:(id)arg1;
- (void)_watchdogTimerFired:(id)arg1;
- (id)beginTransactionForLibrary:(id)arg1 withClient:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (void)cancelActiveTransactionForClient:(id)arg1;
- (void)cancelAllActiveDatabaseOperationsAndWaitUntilFinished:(bool)arg1;
- (void)cancelAllActiveDatabaseOperationsForClient:(id)arg1 waitUntilFinished:(bool)arg2;
- (void)cancelAllActiveTransactions;
- (id)databaseOperationLimitedQueue;
- (id)databaseOperationQueue;
- (id)databaseOperationSerialQueue;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (bool)endTransaction:(id)arg1 shouldCommit:(bool)arg2 error:(id*)arg3;
- (id)executeQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 error:(id*)arg5;
- (id)executeUntrustedQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 error:(id*)arg5;
- (bool)executeUntrustedUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 error:(id*)arg4;
- (bool)executeUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 error:(id*)arg4;
- (id)init;
- (bool)isSuspended;
- (void)performDatabaseOperation:(unsigned long long)arg1 onLibrary:(id)arg2 withAttributes:(id)arg3 options:(id)arg4 fromClient:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)reset;
- (id)serialQueue;
- (void)setDelegate:(id)arg1;
- (void)setSuspended:(bool)arg1;
- (void)setTransactionTimeout:(double)arg1;
- (id)transactionMap;
- (double)transactionTimeout;

@end
