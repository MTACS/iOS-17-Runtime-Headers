
@interface NewsFeed.DebugInspectionViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void cloudContext;
    void commandCenter;
    void coverViewManager;
    void feedItem;
    void inspector;
    void sections;
    void tableView;
}

- (void).cxx_destruct;
- (void)doDismiss;
- (void)doTapToRadar;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
