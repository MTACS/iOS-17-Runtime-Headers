
@interface WFWorkflowWizardNameViewController : UITableViewController <WFWorkflowWizardNameCellDelegate, WFWorkflowWizardNameSuggestionCellDelegate> {
    WFWorkflowWizardNameConfiguration * _configuration;
    <WFWorkflowWizardNameViewControllerDelegate> * _delegate;
    WFIconComposeViewController * _iconComposeViewController;
    NSString * _updatedName;
    WFWorkflow * _workflow;
}

@property (nonatomic, retain) WFWorkflowWizardNameConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFWorkflowWizardNameViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) WFIconComposeViewController *iconComposeViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *updatedName;
@property (nonatomic, readonly) WFWorkflow *workflow;

- (void).cxx_destruct;
- (id)configuration;
- (id)delegate;
- (id)dequeueNameCellAtIndexPath:(id)arg1;
- (id)dequeueNameSuggestionCellAtIndexPath:(id)arg1;
- (void)didTapDone;
- (id)iconComposeViewController;
- (void)iconComposeViewControllerDidTapDone;
- (id)infoText;
- (id)initWithWorkflow:(id)arg1 configuration:(id)arg2;
- (id)nameCell;
- (id)nameSuggestionCell;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIconComposeViewController:(id)arg1;
- (void)setUpdatedName:(id)arg1;
- (id)suggestedPhrases;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateDoneButtonForName:(id)arg1;
- (void)updateNameCell:(id)arg1;
- (id)updatedName;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (id)workflow;
- (id)workflowName;
- (void)workflowWizardNameCell:(id)arg1 didUpdateName:(id)arg2;
- (void)workflowWizardNameCellDidFinishEditing:(id)arg1;
- (void)workflowWizardNameCellDidSelectEditIcon:(id)arg1;
- (void)workflowWizardNameSuggestionCellDidSelectSuggestedPhrase:(id)arg1;

@end
