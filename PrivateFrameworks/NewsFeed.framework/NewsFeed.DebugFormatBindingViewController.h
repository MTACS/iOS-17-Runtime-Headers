
@interface NewsFeed.DebugFormatBindingViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void detailsViewController;
    void editor;
    void feedModelFactory;
    void formatService;
    void sections;
    void tableView;
    void weatherService;
}

- (void).cxx_destruct;
- (void)doShowDetails;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
