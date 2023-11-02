
@interface _HMCameraSnapshotControl : _HMCameraControl {
    <_HMCameraSnapshotControlDelegate> * _delegate;
    HMCameraSnapshot * _mostRecentSnapshot;
}

@property <_HMCameraSnapshotControlDelegate> *delegate;
@property (retain) HMCameraSnapshot *mostRecentSnapshot;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)_fetchCameraSnapshotForBulletinContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_handleCreateSnapshotWithBulletinContext:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_handleMostRecentSnapshot:(id)arg1;
- (void)_handleMostRecentSnapshotUpdatedMessage:(id)arg1;
- (void)_handleSnapshot:(id)arg1 error:(id)arg2 isMostRecent:(bool)arg3;
- (void)_notifyDelegateOfDidTakeSnapshot:(id)arg1 error:(id)arg2;
- (void)_notifyDelegateOfMostRecentSnapshotUpdated;
- (void)_registerNotificationHandlers;
- (void)_takeSnapshot;
- (id)delegate;
- (void)fetchCameraSnapshotForBulletinContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithCameraProfile:(id)arg1 profileUniqueIdentifier:(id)arg2 mostRecentSnapshot:(id)arg3;
- (void)mergeNewSnapshotControl:(id)arg1;
- (id)mostRecentSnapshot;
- (void)setDelegate:(id)arg1;
- (void)setMostRecentSnapshot:(id)arg1;
- (void)takeSnapshot;

@end
