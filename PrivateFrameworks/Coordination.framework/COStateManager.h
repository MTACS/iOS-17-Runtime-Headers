
@interface COStateManager : NSObject <COStateManagerClientInterface> {
    NSSet * _clusters;
    NSXPCConnection * _lastConnection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSArray * _observers;
    <COStateManagerConnectionProvider> * _provider;
    bool  _reconnectionInProgress;
    NSDictionary * _state;
    NSString * _suite;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly, copy) NSSet *clusters;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) NSXPCConnection *lastConnection;
@property (nonatomic, copy) NSArray *observers;
@property (nonatomic, readonly) <COStateManagerConnectionProvider> *provider;
@property (nonatomic, copy) NSDictionary *state;
@property (nonatomic, readonly, copy) NSString *suite;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/Coordination.framework/Coordination

+ (id)homed_COStateManagerWithSuiteName:(id)arg1 homeIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)_clustersForClustersTmp:(id)arg1;
- (void)_invalidate;
- (void)_lostConnectionToService;
- (bool)_onqueue_clustersValid:(id)arg1;
- (void)_onqueue_registerObserver:(id)arg1;
- (void)_onqueue_removeObjectsForKeyPaths:(id)arg1 clusters:(id)arg2 cacheLocally:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)_onqueue_setDictionary:(id)arg1 clusters:(id)arg2 cacheLocally:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)arg1;
- (id)_sanitizeChanges:(id)arg1;
- (void)_withLock:(id /* block */)arg1;
- (id)addObserverForKeyPathUsingPredicate:(id)arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)changesObserved:(id)arg1 forPredicate:(id)arg2;
- (id)clusters;
- (void)dealloc;
- (void)delayForDoorbellChimeWithCompletionHandler:(id /* block */)arg1;
- (void)fetchCompositionForCluster:(id)arg1 dispatchQueue:(id)arg2 block:(id /* block */)arg3;
- (id)initWithConnectionProvider:(id)arg1 suite:(id)arg2 clusters:(id)arg3;
- (id)initWithSuiteName:(id)arg1 clusters:(id)arg2;
- (id)lastConnection;
- (id)observers;
- (id)provider;
- (void)removeObjectForKeyPath:(id)arg1 clusters:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeObjectsForKeyPaths:(id)arg1 clusters:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeObserver:(id)arg1;
- (void)setBool:(bool)arg1 forKeyPath:(id)arg2 clusters:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setDate:(id)arg1 forKeyPath:(id)arg2 clusters:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setDictionary:(id)arg1 clusters:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setLastConnection:(id)arg1;
- (void)setNumber:(id)arg1 forKeyPath:(id)arg2 clusters:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setObservers:(id)arg1;
- (void)setState:(id)arg1;
- (void)setString:(id)arg1 forKeyPath:(id)arg2 clusters:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)state;
- (id)suite;

// Image: /System/Library/PrivateFrameworks/CoordinationCore.framework/CoordinationCore

+ (id)appleTV_COStateManagerWithSuiteName:(id)arg1 clusters:(id)arg2 homeIdentifier:(id)arg3;

@end
