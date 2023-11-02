
@interface PRPosterExtensionDefaultDataSource : NSObject <PRPosterExtensionProvider, _EXQueryControllerDelegate> {
    NSUUID * _defaultInstanceIdentifier;
    BSAtomicFlag * _invalidatedFlag;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDictionary * _lock_defaultInstanceByProvider;
    NSHashTable * _lock_instantiatedPosterExtensions;
    NSArray * _lock_knownPosterExtensions;
    NSObject<OS_dispatch_queue> * _queue;
    <PRPosterExtensionProviderObserver> * _queue_delegate;
    NSHashTable * _queue_observers;
    NSPredicate * _queue_predicate;
    NSArray * _queue_queries;
    _EXQueryController * _queue_queryController;
    NSPredicate * _queue_rolePredicate;
    bool  _queue_started;
    NSSet * _queue_supportedRoles;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *defaultInstanceByProvider;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *knownPosterExtensions;
@property (nonatomic, retain) NSPredicate *predicate;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSSet *supportedRoles;

+ (id)extensionKitQuery;

- (void).cxx_destruct;
- (void)_invalidateDataSource:(bool)arg1 invalidateInstantiatedPosterExtensions:(bool)arg2 invalidateDefaultPosterExtensions:(bool)arg3 restartIfAlreadyStarted:(bool)arg4;
- (void)_lock_invalidateDefaultPosterExtensions;
- (void)_lock_invalidateInstantiatedPosterExtensions;
- (void)_queue_executeQuery;
- (void)_queue_invalidateDataSource:(bool)arg1 invalidateInstantiatedPosterExtensions:(bool)arg2 invalidateDefaultPosterExtensions:(bool)arg3 restartIfAlreadyStarted:(bool)arg4;
- (void)_queue_notifyDataStoreOfUpdatedExtensions:(id)arg1;
- (void)_queue_start;
- (void)_queue_teardownQueryController;
- (void)addObserver:(id)arg1;
- (void)cancel;
- (id)defaultInstanceByProvider;
- (id)defaultInstanceOfProvider:(id)arg1 error:(out id*)arg2;
- (id)init;
- (id)initWithDefaultInstanceIdentifier:(id)arg1;
- (id)instantiateNewInstanceOfProvider:(id)arg1 error:(out id*)arg2;
- (void)invalidate;
- (id)knownPosterExtensions;
- (id)predicate;
- (void)queryControllerDidUpdate:(id)arg1 resultDifference:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setSupportedRoles:(id)arg1;
- (void)start;
- (id)supportedRoles;
- (void)teardownRunningExtensions;

@end
