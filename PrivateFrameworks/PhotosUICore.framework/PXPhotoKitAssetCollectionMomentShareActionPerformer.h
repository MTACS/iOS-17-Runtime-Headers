
@interface PXPhotoKitAssetCollectionMomentShareActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PXCMMWorkflowCoordinatorDelegate> {
    PXCMMWorkflowCoordinator * _workflowCoordinator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3;

- (void).cxx_destruct;
- (void)completeUserInteractionTaskWithSuccess:(bool)arg1 error:(id)arg2;
- (void)performUserInteractionTask;
- (long long)shareOriginForSession:(id)arg1 workflowCoordinator:(id)arg2;
- (void)workflowCoordinator:(id)arg1 workflowViewController:(id)arg2 didFinishSession:(id)arg3 withActivityState:(unsigned long long)arg4;

@end
