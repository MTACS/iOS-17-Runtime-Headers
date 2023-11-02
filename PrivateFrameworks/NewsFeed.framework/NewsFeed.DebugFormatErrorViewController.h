
@interface NewsFeed.DebugFormatErrorViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void $__lazy_storage_$_cardViewScrollViewCoordinator;
    void errorModel;
    void tableView;
}

- (void).cxx_destruct;
- (void)didMoveToParentViewController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
