
@interface PXCMMWorkflowCoordinatorPresenter : NSObject <PXCMMWorkflowCoordinatorDelegate, PXCMMWorkflowPresenting> {
    PXGadgetNavigationHelper * _navigationHelper;
    PXCMMWorkflowCoordinator * _workflowCoordinator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancelWorkflow;
- (id)init;
- (id)initWithNavigationHelper:(id)arg1;
- (long long)shareOriginForSession:(id)arg1 workflowCoordinator:(id)arg2;
- (void)workflowCoordinator:(id)arg1 workflowViewController:(id)arg2 didFinishSession:(id)arg3 withActivityState:(unsigned long long)arg4;
- (id)workflowViewControllerWithContext:(id)arg1;

@end
