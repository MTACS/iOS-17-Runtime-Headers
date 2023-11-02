
@interface PBUIDynamicProviderWrapper : NSObject <BSInvalidatable, PBUIPosterReplicaPortalProviding, PBUIPosterReplicaSnapshotProviding> {
    NSString * _identifier;
    id /* block */  _makePortalProvider;
    id /* block */  _makeSnapshotProvider;
    <BSInvalidatable> * _portalObserver;
    PBUIReplicaSourceObserverBox * _portalObservers;
    id  _rootObject;
    <BSInvalidatable> * _snapshotObserver;
    PBUIReplicaSourceObserverBox * _snapshotObservers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) id rootObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_portalProvider;
- (id)_snapshotProvider;
- (void)dealloc;
- (id)identifier;
- (id)initWithRootObject:(id)arg1 portalProvider:(id /* block */)arg2 snapshotProvider:(id /* block */)arg3;
- (void)invalidate;
- (id)portalSourceForReplicaView:(id)arg1;
- (id)registerPortalSourceObserver:(id)arg1;
- (id)registerSnapshotSourceObserver:(id)arg1;
- (id)rootObject;
- (void)setIdentifier:(id)arg1;
- (void)setRootObject:(id)arg1;
- (id)snapshotSourceForObserver:(id)arg1;

@end
