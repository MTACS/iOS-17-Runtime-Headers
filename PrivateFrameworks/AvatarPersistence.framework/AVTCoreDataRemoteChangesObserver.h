
@interface AVTCoreDataRemoteChangesObserver : NSObject <AVTCoreDataRemoteChangesObserver> {
    NSMutableArray * _changeHandlers;
    <AVTEventCoalescer> * _coalescer;
    <AVTCoreDataPersistentStoreConfiguration> * _configuration;
    AVTCoreEnvironment * _environment;
    <AVTUILogger> * _logger;
    <NSObject> * _observationToken;
    NSMutableArray * _transactionsForPendingChanges;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSMutableArray *changeHandlers;
@property (nonatomic, readonly) <AVTEventCoalescer> *coalescer;
@property (nonatomic, readonly) <AVTCoreDataPersistentStoreConfiguration> *configuration;
@property (nonatomic, readonly) AVTCoreEnvironment *environment;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic, retain) <NSObject> *observationToken;
@property (nonatomic, readonly) NSMutableArray *transactionsForPendingChanges;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)addChangesHandler:(id /* block */)arg1;
- (id)changeHandlers;
- (id)changeTransactionsForToken:(id)arg1 managedObjectContext:(id)arg2;
- (id)coalescer;
- (id)configuration;
- (id)environment;
- (id)initWithConfiguration:(id)arg1 workQueue:(id)arg2 coalescer:(id)arg3 environment:(id)arg4;
- (bool)isObservingChanges;
- (id)logger;
- (id)observationToken;
- (void)performManagedObjectContextWork:(id /* block */)arg1;
- (void)processRemoteChangeNotification:(id)arg1 completion:(id /* block */)arg2;
- (void)registerCoalescerEventHandler;
- (void)setObservationToken:(id)arg1;
- (void)startObservingChanges;
- (id)transactionsForPendingChanges;
- (id)workQueue;

@end
