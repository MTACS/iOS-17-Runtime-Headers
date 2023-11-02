
@interface FeedbackCore.FBKTeamPickerController : UITableViewController {
    void cellReuseIdentifier;
    void formStub;
    void pickerDelegate;
    void selectedTeam;
    void showsDismissButton;
    void teams;
}

@property (nonatomic, retain) FBKBugFormStub *formStub;
@property (nonatomic) <_TtP12FeedbackCore21FBKTeamPickerDelegate_> *pickerDelegate;
@property (nonatomic, retain) FBKTeam *selectedTeam;
@property (nonatomic) bool showsDismissButton;
@property (nonatomic, copy) NSArray *teams;

- (void).cxx_destruct;
- (void)dismissSelf;
- (id)formStub;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pickerDelegate;
- (id)selectedTeam;
- (void)setFormStub:(id)arg1;
- (void)setPickerDelegate:(id)arg1;
- (void)setSelectedTeam:(id)arg1;
- (void)setShowsDismissButton:(bool)arg1;
- (void)setTeams:(id)arg1;
- (bool)showsDismissButton;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)teams;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
