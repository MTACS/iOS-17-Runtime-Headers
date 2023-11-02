
@interface WFEditAutomationCoordinator : NSObject <UINavigationControllerDelegate, WFAutomationSummaryViewControllerDelegate, WFTriggerComposeViewControllerDelegate, WFTriggerConfigurationViewControllerDelegate, WFTriggerSuggestionViewControllerDelegate> {
    WFAutomationSummaryViewController * _automationSummaryViewController;
    WFDatabase * _database;
    <WFEditAutomationCoordinatorDelegate> * _delegate;
    WFWorkflow * _editingWorkflow;
    UINavigationController * _navigationController;
    WFTrigger * _trigger;
    NSString * _triggerIdentifier;
    WFTriggerManager * _triggerManager;
    WFConfiguredTriggerRecord * _triggerRecord;
    WFWorkflowReference * _workflowReference;
}

@property (nonatomic, retain) WFAutomationSummaryViewController *automationSummaryViewController;
@property (nonatomic, retain) WFDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFEditAutomationCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) WFWorkflow *editingWorkflow;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UINavigationController *navigationController;
@property (readonly) Class superclass;
@property (nonatomic, retain) WFTrigger *trigger;
@property (nonatomic, readonly, copy) NSString *triggerIdentifier;
@property (nonatomic, retain) WFTriggerManager *triggerManager;
@property (nonatomic, readonly) WFConfiguredTriggerRecord *triggerRecord;
@property (nonatomic, retain) WFWorkflowReference *workflowReference;

- (void).cxx_destruct;
- (id)automationSummaryViewController;
- (void)automationSummaryViewController:(id)arg1 didFinishWithTrigger:(id)arg2;
- (void)automationSummaryViewController:(id)arg1 editTrigger:(id)arg2;
- (void)automationSummaryViewController:(id)arg1 editWorkflow:(id)arg2;
- (void)automationSummaryViewControllerChooseShortcut:(id)arg1;
- (void)automationSummaryViewControllerDidCancel:(id)arg1;
- (void)cancel;
- (id)database;
- (id)delegate;
- (id)editingWorkflow;
- (void)finish;
- (id)initWithDatabase:(id)arg1 triggerRecord:(id)arg2 triggerIdentifier:(id)arg3 workflowReference:(id)arg4;
- (id)navigationController;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (void)setAutomationSummaryViewController:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditingWorkflow:(id)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setTrigger:(id)arg1;
- (void)setTriggerManager:(id)arg1;
- (void)setWorkflowReference:(id)arg1;
- (id)start;
- (id)trigger;
- (void)triggerComposeViewController:(id)arg1 didFinishWithWorkflow:(id)arg2;
- (void)triggerComposeViewControllerDidCancel:(id)arg1;
- (void)triggerConfigurationViewController:(id)arg1 didFinishWithTrigger:(id)arg2;
- (id)triggerIdentifier;
- (id)triggerManager;
- (id)triggerRecord;
- (void)triggerSuggestionViewControllerDidFinish:(id)arg1 actions:(id)arg2 editable:(bool)arg3 selectedEntryMetadata:(id)arg4;
- (void)triggerSuggestionViewControllerDidFinish:(id)arg1 reference:(id)arg2 selectedEntryMetadata:(id)arg3;
- (void)updateUIForShowingViewController:(id)arg1;
- (id)workflowReference;

@end
