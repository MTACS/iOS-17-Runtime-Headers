
@interface WFComposeFlowController : NSObject <WFWorkflowWizardNameViewControllerDelegate> {
    WFDatabase * _database;
    <WFComposeFlowControllerDelegate> * _delegate;
    UINavigationController * _navigationController;
    WFWizardNamePresentationManager * _presentationManager;
    UIViewController * _presenter;
    WFWorkflow * _workflow;
}

@property (nonatomic, readonly) WFDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFComposeFlowControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, retain) WFWizardNamePresentationManager *presentationManager;
@property (nonatomic, readonly) UIViewController *presenter;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WFWorkflow *workflow;
@property (nonatomic, readonly) bool workflowHasContent;

- (void).cxx_destruct;
- (id)database;
- (id)delegate;
- (void)finishEditing:(bool)arg1;
- (id)initWithPresenter:(id)arg1 navigationController:(id)arg2 database:(id)arg3 workflow:(id)arg4;
- (id)navigationController;
- (id)presentationManager;
- (id)presenter;
- (void)setDelegate:(id)arg1;
- (void)setPresentationManager:(id)arg1;
- (void)startCancelFlowWithButton:(id)arg1;
- (void)startSaveFlow;
- (id)workflow;
- (bool)workflowHasContent;
- (void)workflowWizardNameViewController:(id)arg1 didFinishWithName:(id)arg2;

@end
