
@interface COMeshAddOn : NSObject {
    COMeshController * _meshController;
    NSObject<OS_dispatch_queue> * _meshControllerQueue;
}

@property (nonatomic) COMeshController *meshController;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *meshControllerQueue;

- (void).cxx_destruct;
- (void)didAddToMeshController:(id)arg1;
- (void)didChangeNodesForMeshController:(id)arg1;
- (void)didRemoveFromMeshController:(id)arg1;
- (void)didStartMeshController:(id)arg1;
- (void)didStopMeshController:(id)arg1;
- (id)init;
- (id)meshController;
- (void)meshController:(id)arg1 didTransitionToState:(unsigned long long)arg2;
- (void)meshController:(id)arg1 willTransitionToState:(unsigned long long)arg2;
- (id)meshControllerQueue;
- (void)setMeshController:(id)arg1;
- (void)setMeshControllerQueue:(id)arg1;
- (void)willAddToMeshController:(id)arg1;
- (void)willRemoveFromMeshController:(id)arg1;
- (void)willStartMeshController:(id)arg1;
- (void)willStopMeshController:(id)arg1;

@end
