
@interface FeedbackCore.FBKBugFormPickerController : UITableViewController <UIAdaptivePresentationControllerDelegate> {
    void context;
    void currentSelection;
    void formStubs;
    void formsRefreshObserver;
    void pickerDelegate;
    void stubsPredicate;
    void team;
}

@property (nonatomic) long long context;
@property (nonatomic, retain) FBKBugFormStub *currentSelection;
@property (nonatomic) <_TtP12FeedbackCore24FBKBugFormPickerDelegate_> *pickerDelegate;
@property (nonatomic, retain) FBKTeam *team;

- (void).cxx_destruct;
- (long long)context;
- (id)currentSelection;
- (void)dismissPicker;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStubsPredicate:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pickerDelegate;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)setContext:(long long)arg1;
- (void)setCurrentSelection:(id)arg1;
- (void)setPickerDelegate:(id)arg1;
- (void)setTeam:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)team;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
