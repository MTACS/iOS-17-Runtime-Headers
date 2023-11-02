
@interface PBUIFixedReplicaSourceProvider : NSObject <BSInvalidatable, PBUIPosterReplicaPortalProviding, PBUIPosterReplicaSnapshotProviding> {
    NSString * _identifier;
    PBUIReplicaSourceObserverBox * _observers;
    <PBUIReplicaPortalSource> * _portalSource;
    <PBUIReplicaSnapshotSource> * _snapshotSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) <PBUIReplicaPortalSource> *portalSource;
@property (nonatomic, retain) <PBUIReplicaSnapshotSource> *snapshotSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)identifier;
- (id)init;
- (void)invalidate;
- (id)portalSource;
- (id)portalSourceForReplicaView:(id)arg1;
- (id)registerPortalSourceObserver:(id)arg1;
- (id)registerSnapshotSourceObserver:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPortalSource:(id)arg1;
- (void)setSnapshotSource:(id)arg1;
- (id)snapshotSource;
- (id)snapshotSourceForObserver:(id)arg1;

@end
