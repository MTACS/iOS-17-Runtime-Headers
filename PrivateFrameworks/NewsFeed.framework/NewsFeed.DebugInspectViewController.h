
@interface NewsFeed.DebugInspectViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void cloudContext;
    void commandCenter;
    void dataSource;
    void factory;
    void feedPersonalizer;
    void headlineService;
    void inspector;
    void inventory;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  key;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  result;
    void tableView;
    void tagService;
}

- (void).cxx_destruct;
- (void)doDismiss;
- (void)doTapToRadar;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
