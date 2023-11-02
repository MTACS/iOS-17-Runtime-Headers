
@interface PXCMMWorkflowCoordinator : NSObject <PXAssetCollectionActionPerformerDelegate, PXCMMActionControllerDelegate, PXCMMActionPerformerDelegate, PXCMMViewControllerDelegate, PXCMMWorkflowPresenting> {
    <PXCMMWorkflowCoordinatorDelegate> * _delegate;
    PXCMMGridController * _gridController;
    UINavigationController * _navigationController;
    PXCMMSession * _rootWorkflowSession;
    UIViewController * _rootWorkflowViewController;
    PXCMMViewController * _sendBackWorkflowViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXCMMWorkflowCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXMemoryAssetsActionFactory> *memoryAssetsActionFactory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_completeActionForSession:(id)arg1 withSuccess:(bool)arg2 error:(id)arg3;
- (void)_completeMessageComposeActionForSession:(id)arg1 withSuccess:(bool)arg2 error:(id)arg3;
- (void)_completePhotosPickerActionForSession:(id)arg1 withSuccess:(bool)arg2 error:(id)arg3;
- (void)_completePublishForSession:(id)arg1 withURL:(id)arg2 error:(id)arg3;
- (void)_completeSendBackActionForSession:(id)arg1 withContext:(id)arg2 error:(id)arg3;
- (id)_createRootWorkflowViewControllerWithSession:(id)arg1 willBeEmbeddedInNavigationController:(bool)arg2 assetActionManager:(id)arg3 assetCollectionActionManager:(id)arg4 photosViewConfigurationBlock:(id /* block */)arg5;
- (id)_createSendBackWorkflowViewControllerWithContext:(id)arg1;
- (void)_didFinishSession:(id)arg1 withState:(unsigned long long)arg2;
- (void)_didFinishSession:(id)arg1 withState:(unsigned long long)arg2 avoidDismissal:(bool)arg3;
- (id)_performActionWithType:(id)arg1 forSession:(id)arg2;
- (void)_performCleanupActionForSession:(id)arg1;
- (id)_performDeleteActionForSession:(id)arg1;
- (void)_performMessageComposeActionForSession:(id)arg1 shareURL:(id)arg2;
- (void)_performNotifyIfNeededActionForSession:(id)arg1;
- (void)_performPhotosPickerActionForSession:(id)arg1 gridPresentation:(id)arg2;
- (id)_performPublishActionForSession:(id)arg1;
- (id)_performReceiveActionForSession:(id)arg1;
- (void)_performSendBackActionForSession:(id)arg1;
- (void)_presentFailureForSession:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_presentSendBackFlowWithContext:(id)arg1;
- (id)_presentationEnvironment;
- (id)_presentingViewControllerForViewController:(id)arg1;
- (void)_session:(id)arg1 finishedAccepting:(bool)arg2 withError:(id)arg3;
- (bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;
- (void)cancelWorkflow;
- (id)completeMyMomentViewController:(id)arg1 performActionForSession:(id)arg2;
- (id)completeMyMomentViewController:(id)arg1 performSendBackActionForSession:(id)arg2;
- (void)completeMyMomentViewController:(id)arg1 showPhotoPickerForSession:(id)arg2;
- (id)delegate;
- (void)didCancelCompleteMyMomentViewController:(id)arg1;
- (void)performQuickSaveForContext:(id)arg1 completion:(id /* block */)arg2;
- (id)presentationEnvironmentForActionPerformer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startPreloadingTasksForCompleteMyMomentViewController:(id)arg1;
- (id)undoManagerForActionPerformer:(id)arg1;
- (id)workflowViewControllerWithContext:(id)arg1;
- (id)workflowViewControllerWithContext:(id)arg1 embedInNavigationControllerOfClass:(Class)arg2;
- (id)workflowViewControllerWithContext:(id)arg1 embedInNavigationControllerOfClass:(Class)arg2 photosViewConfigurationBlock:(id /* block */)arg3;
- (id)workflowViewControllerWithSession:(id)arg1 embedInNavigationControllerOfClass:(Class)arg2 assetActionManager:(id)arg3 assetCollectionActionManager:(id)arg4 photosViewConfigurationBlock:(id /* block */)arg5;

@end
