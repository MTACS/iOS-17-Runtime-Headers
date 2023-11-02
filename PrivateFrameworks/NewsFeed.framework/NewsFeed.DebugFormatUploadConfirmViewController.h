
@interface NewsFeed.DebugFormatUploadConfirmViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void delegate;
    void editor;
    void entries;
    void sections;
    void tableView;
    void uploadService;
}

- (void).cxx_destruct;
- (void)doDismiss;
- (void)doUploadWithSender:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
