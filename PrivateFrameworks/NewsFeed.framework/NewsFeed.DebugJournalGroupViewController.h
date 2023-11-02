
@interface NewsFeed.DebugJournalGroupViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void cloudContext;
    void commandCenter;
    void feedItemImages;
    void group;
    void naImage;
    void placeholderImage;
    void sections;
    void tableView;
    void tagService;
}

- (void).cxx_destruct;
- (void)doDismiss;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
