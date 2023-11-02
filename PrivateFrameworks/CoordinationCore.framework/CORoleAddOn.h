
@interface CORoleAddOn : COMeshAddOn <CORoleDefaultsMonitorDelegate> {
    COClusterMemberRoleSnapshot * _currentDeviceSnapshot;
    CORoleDefaultsMonitor * _defaultsMonitor;
    <CORoleAddOnDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSSet * _nodeCache;
    bool  _pendingChanges;
}

@property (nonatomic, retain) COClusterMemberRoleSnapshot *currentDeviceSnapshot;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) CORoleDefaultsMonitor *defaultsMonitor;
@property (nonatomic) <CORoleAddOnDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *nodeCache;
@property (getter=havePendingChanges, nonatomic) bool pendingChanges;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_enableForPairLegacySupport;
- (bool)_isLegacyStereoPair;
- (bool)_isLegacyStereoPairPeer:(id)arg1;
- (id)_memberForCurrentDevice;
- (id)_memberForNode:(id)arg1;
- (void)_notifyDelegate;
- (id)_roleForCurrentDevice;
- (id)_roleForNode:(id)arg1;
- (void)_updateCurrentDeviceState;
- (void)_updateState;
- (void)_withLock:(id /* block */)arg1;
- (id)currentDeviceSnapshot;
- (id)defaultsMonitor;
- (id)delegate;
- (id)delegateQueue;
- (void)didChangeNodesForMeshController:(id)arg1;
- (bool)havePendingChanges;
- (id)init;
- (void)meshController:(id)arg1 didTransitionToState:(unsigned long long)arg2;
- (void)meshController:(id)arg1 willTransitionToState:(unsigned long long)arg2;
- (void)monitor:(id)arg1 defaultChanged:(unsigned long long)arg2;
- (id)nodeCache;
- (void)setCurrentDeviceSnapshot:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNodeCache:(id)arg1;
- (void)setPendingChanges:(bool)arg1;

@end
