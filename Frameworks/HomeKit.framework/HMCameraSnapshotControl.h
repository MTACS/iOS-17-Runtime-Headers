
@interface HMCameraSnapshotControl : HMCameraControl <_HMCameraSnapshotControlDelegate> {
    <HMCameraSnapshotControlDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    _HMCameraSnapshotControl * _snapshotControl;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMCameraSnapshotControlDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMCameraSnapshot *mostRecentSnapshot;
@property (readonly) _HMCameraSnapshotControl *snapshotControl;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cameraSnapshotControl:(id)arg1 didTakeSnapshot:(id)arg2 error:(id)arg3;
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg1;
- (id)delegate;
- (void)fetchCameraSnapshotForBulletinContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithSnapshotControl:(id)arg1;
- (id)mostRecentSnapshot;
- (void)setDelegate:(id)arg1;
- (id)snapshotControl;
- (void)takeSnapshot;

@end
