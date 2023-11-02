
@interface FeedbackCore._FBKActionSheetController : UITableViewController {
    void actions;
    void dismissesOnAction;
    void headerSubtitle;
    void headerTitle;
}

- (void).cxx_destruct;
- (void)addAction:(id)arg1;
- (void)addActionWithTitle:(id)arg1 image:(id)arg2 actionHandler:(id /* block */)arg3;
- (void)dismissSelf;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 actions:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
