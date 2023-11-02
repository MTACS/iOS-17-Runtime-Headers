
@interface WFCreateAutomationCoordinator : NSObject <HUTriggerEditorDelegate, WFAutomationSelectTypeViewControllerDelegate, WFAutomationSummaryViewControllerDelegate, WFTriggerComposeViewControllerDelegate, WFTriggerConfigurationViewControllerDelegate, WFTriggerSuggestionViewControllerDelegate> {
    WFDatabase * _database;
    <WFCreateAutomationCoordinatorDelegate> * _delegate;
    WFHomeManager * _homeManager;
    UINavigationController * _navigationController;
    NSString * _triggerIdentifier;
    WFTriggerManager * _triggerManager;
    WFConfiguredTriggerRecord * _triggerRecord;
    WFWorkflow * _workflow;
    WFWorkflowReference * _workflowReference;
}

@property (nonatomic, retain) WFDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFCreateAutomationCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFHomeManager *homeManager;
@property (nonatomic, retain) UINavigationController *navigationController;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *triggerIdentifier;
@property (nonatomic, retain) WFTriggerManager *triggerManager;
@property (nonatomic, retain) WFConfiguredTriggerRecord *triggerRecord;
@property (nonatomic, retain) WFWorkflow *workflow;
@property (nonatomic, retain) WFWorkflowReference *workflowReference;

- (void).cxx_destruct;
- (void)automationSummaryViewController:(id)arg1 didFinishWithTrigger:(id)arg2;
- (void)buildViewControllerForHomeTriggerChooserStepWithBackButtonAction:(unsigned long long)arg1 hostingViewController:(id)arg2 completion:(id /* block */)arg3;
- (void)buildViewControllerForPersonalTriggerChooserStepWithBackButtonAction:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)cancel;
- (id)database;
- (id)delegate;
- (void)finishWithTriggerRecord:(id)arg1;
- (id)homeManager;
- (id)initWithDatabase:(id)arg1 homeManager:(id)arg2;
- (id)navigationController;
- (void)openHomeApp;
- (void)selectTypeViewController:(id)arg1 didChooseAutomationType:(unsigned long long)arg2;
- (void)selectTypeViewController:(id)arg1 didChooseTrigger:(id)arg2;
- (void)setDatabase:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setTriggerIdentifier:(id)arg1;
- (void)setTriggerManager:(id)arg1;
- (void)setTriggerRecord:(id)arg1;
- (void)setWorkflow:(id)arg1;
- (void)setWorkflowReference:(id)arg1;
- (void)startAtStep:(unsigned long long)arg1 hostingViewController:(id)arg2 completion:(id /* block */)arg3;
- (void)trackAddAutomationActions;
- (void)trackAddAutomationWithRecord:(id)arg1;
- (void)triggerComposeViewController:(id)arg1 didFinishWithWorkflow:(id)arg2;
- (void)triggerComposeViewControllerDidCancel:(id)arg1;
- (void)triggerConfigurationViewController:(id)arg1 didFinishWithTrigger:(id)arg2;
- (void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2;
- (id)triggerIdentifier;
- (id)triggerManager;
- (id)triggerRecord;
- (void)triggerSuggestionViewControllerDidFinish:(id)arg1 actions:(id)arg2 editable:(bool)arg3 selectedEntryMetadata:(id)arg4;
- (void)triggerSuggestionViewControllerDidFinish:(id)arg1 reference:(id)arg2 selectedEntryMetadata:(id)arg3;
- (id)workflow;
- (id)workflowReference;

@end
