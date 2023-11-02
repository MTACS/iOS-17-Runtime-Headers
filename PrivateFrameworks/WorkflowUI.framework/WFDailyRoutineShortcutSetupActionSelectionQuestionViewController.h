
@interface WFDailyRoutineShortcutSetupActionSelectionQuestionViewController : UITableViewController <WFActionDrawerSiriSuggestionsTableViewCellDailyRoutineDelegate, WFDailyRoutineShortcutSetupQuestionChildViewController> {
    <WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> * _delegate;
    WFDailyRoutineShortcutSetupActionSelectionQuestion * _question;
    WFActionDrawerResults * _results;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool parentShouldShowSkipButton;
@property (nonatomic, readonly) WFDailyRoutineShortcutSetupActionSelectionQuestion *question;
@property (nonatomic, retain) WFActionDrawerResults *results;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithQuestion:(id)arg1;
- (void)loadResults;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (bool)parentShouldShowSkipButton;
- (id)question;
- (id)results;
- (void)setDelegate:(id)arg1;
- (void)setResults:(id)arg1;
- (void)siriSuggestionsTableViewCell:(id)arg1 didAppendAction:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
