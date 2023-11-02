
@interface WFAutomationSummaryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    NSArray * _actionIcons;
    <WFAutomationSummaryViewControllerDelegate> * _delegate;
    unsigned long long  _mode;
    UITableView * _tableView;
    WFTrigger * _trigger;
    NSString * _triggerIdentifier;
    WFConfiguredTriggerRecord * _triggerRecord;
    WFWorkflow * _workflow;
}

@property (nonatomic, retain) NSArray *actionIcons;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFAutomationSummaryViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long mode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;
@property (nonatomic, readonly) WFTrigger *trigger;
@property (nonatomic, readonly, copy) NSString *triggerIdentifier;
@property (nonatomic, readonly) WFConfiguredTriggerRecord *triggerRecord;
@property (nonatomic, retain) WFWorkflow *workflow;

- (void).cxx_destruct;
- (id)actionIcons;
- (id)delegate;
- (void)didTapDone:(id)arg1;
- (void)handleRunSelection:(long long)arg1;
- (id)infoForSection:(long long)arg1;
- (id)initWithTrigger:(id)arg1 triggerIdentifier:(id)arg2 workflow:(id)arg3 mode:(unsigned long long)arg4;
- (void)loadActionDescriptionIcons;
- (void)loadView;
- (id)menuForTrigger;
- (unsigned long long)mode;
- (void)notifySwitchChanged:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sections;
- (void)setActionIcons:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setWorkflow:(id)arg1;
- (id)tableView;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)testAutomation;
- (id)trigger;
- (id)triggerIdentifier;
- (id)triggerRecord;
- (void)updateUI;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)workflow;

@end
