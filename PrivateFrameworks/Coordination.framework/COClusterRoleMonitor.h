
@interface COClusterRoleMonitor : NSObject <COClusterRoleMonitorClientInterface> {
    id  _cluster;
    NSXPCConnection * _lastConnection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSArray * _memberObservers;
    <COClusterRoleMonitorConnectionProvider> * _provider;
    NSArray * _roleObservers;
    NSArray * _snapshotObservers;
}

@property (nonatomic, readonly, copy) id cluster;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) NSXPCConnection *lastConnection;
@property (nonatomic, copy) NSArray *memberObservers;
@property (nonatomic, readonly) <COClusterRoleMonitorConnectionProvider> *provider;
@property (nonatomic, copy) NSArray *roleObservers;
@property (nonatomic, copy) NSArray *snapshotObservers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_lostConnectionToService;
- (void)_registerMemberObserver:(id)arg1;
- (void)_registerRoleObserver:(id)arg1;
- (void)_registerSnapshotObserver;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)arg1;
- (id)_serviceConnection;
- (void)_unregisterMemberObserver:(id)arg1;
- (void)_unregisterRoleObserver:(id)arg1;
- (void)_unregisterSnapshotObserver;
- (void)_withLock:(id /* block */)arg1;
- (id)addObserverForMember:(id)arg1 toDispatchQueue:(id)arg2 block:(id /* block */)arg3;
- (id)addObserverForRole:(id)arg1 toDispatchQueue:(id)arg2 block:(id /* block */)arg3;
- (id)addObserverForSnapshotsToDispatchQueue:(id)arg1 block:(id /* block */)arg2;
- (id)cluster;
- (void)dealloc;
- (id)initWithCluster:(id)arg1;
- (id)initWithConnectionProvider:(id)arg1 cluster:(id)arg2;
- (id)lastConnection;
- (id)memberObservers;
- (void)membersWithRole:(id)arg1 inCluster:(id)arg2 didChangeTo:(id)arg3;
- (id)provider;
- (void)removeObserverForMember:(id)arg1;
- (void)removeObserverForRole:(id)arg1;
- (void)removeObserverForSnapshots:(id)arg1;
- (id)roleObservers;
- (void)roleOfMember:(id)arg1 inCluster:(id)arg2 didChangeTo:(id)arg3;
- (void)setLastConnection:(id)arg1;
- (void)setMemberObservers:(id)arg1;
- (void)setRoleObservers:(id)arg1;
- (void)setSnapshotObservers:(id)arg1;
- (id)snapshotObservers;
- (void)snapshotOfCluster:(id)arg1 didChangeTo:(id)arg2;

@end
