
@interface NTKBundleComplicationMigrationServiceClient : NSObject {
    NSMutableDictionary * _cachedResults;
    NSXPCConnection * _connection;
    id /* block */  _connectionProvider;
    NSTimer * _invalidationTimer;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _requestToCompletion;
    unsigned long long  _transactionCount;
    NSDictionary * _typeMigrationCache;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic, copy) id /* block */ connectionProvider;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)_queue_clearInvalidationTimer;
- (void)_queue_decrementTransactionCount;
- (void)_queue_incrementTransactionCount;
- (void)_queue_loadTypeLookupForDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)_queue_serviceRequest:(id)arg1 retryBudget:(unsigned long long)arg2;
- (void)_queue_updateInvalidationTimer;
- (void)_setupConnectionIfNeeded;
- (id)connection;
- (id /* block */)connectionProvider;
- (void)generateTypeLookupForDevice:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)queue;
- (void)serviceRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)setConnectionProvider:(id /* block */)arg1;

@end
