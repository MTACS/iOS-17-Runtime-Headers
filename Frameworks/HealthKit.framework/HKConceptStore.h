
@interface HKConceptStore : NSObject <HKConceptStoreClientInterface, _HKXPCExportable> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _conceptIndexManagerStateLock;
    HKObserverSet * _conceptObservers;
    HKHealthStore * _healthStore;
    NSUUID * _identifier;
    unsigned long long  _lastKnownConceptIndexManagerState;
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (nonatomic, readonly) unsigned long long currentConceptIndexerState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) HKTaskServerProxyProvider *proxyProvider;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)serverInterface;
+ (id)taskServerIdentifier;

- (void).cxx_destruct;
- (void)_startObservingConceptIndexManager;
- (void)clientRemote_conceptIndexManagerDidChangeState:(unsigned long long)arg1;
- (void)connectionInvalidated;
- (id)countOfConceptsAssociatedToUserRecordsWithError:(id*)arg1;
- (unsigned long long)currentConceptIndexerState;
- (id)exportedInterface;
- (void)fetchConceptForIdentifier:(id)arg1 loadRelationships:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)healthStore;
- (id)identifier;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (id)proxyProvider;
- (void)registerAsConceptObserver:(id)arg1 onQueue:(id)arg2;
- (id)remoteInterface;
- (void)setHealthStore:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setProxyProvider:(id)arg1;
- (void)startObservingConceptIndexManagerWithCompletion:(id /* block */)arg1;
- (void)unregisterAsConceptObserver:(id)arg1;

@end
