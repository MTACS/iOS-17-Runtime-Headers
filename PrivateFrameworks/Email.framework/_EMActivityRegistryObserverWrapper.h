
@interface _EMActivityRegistryObserverWrapper : NSObject <EFCancelable, EMActivityObserver_xpc> {
    EMRemoteConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <EMActivityObserver> * _observer;
    <EFCancelable> * _observerCancelable;
    EMActivityRegistry * _registry;
    NSMutableDictionary * _trackedActivities;
}

@property (retain) NSArray *activities;
@property (retain) EMRemoteConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property <EMActivityObserver> *observer;
@property EMActivityRegistry *registry;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_recover;
- (void)_resetWithCancelable:(id)arg1;
- (void)_startObservingIfNecessary;
- (id)activities;
- (void)activityWithID:(id)arg1 finishedWithError:(id)arg2;
- (void)activityWithID:(id)arg1 setCompletedCount:(id)arg2 totalCount:(id)arg3;
- (void)activityWithID:(id)arg1 setUserInfoObject:(id)arg2 forKey:(id)arg3;
- (id)activityWithObjectID:(id)arg1;
- (void)cancel;
- (id)connection;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 registry:(id)arg2 observer:(id)arg3;
- (id)observer;
- (id)registry;
- (void)removedActivityWithID:(id)arg1;
- (void)setActivities:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setRegistry:(id)arg1;
- (void)startedActivity:(id)arg1;

@end
