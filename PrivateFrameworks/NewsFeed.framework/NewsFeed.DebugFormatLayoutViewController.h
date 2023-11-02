
@interface NewsFeed.DebugFormatLayoutViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void $__lazy_storage_$_heatmapToolbar;
    void delegate;
    void editor;
    void overlayView;
    void tableView;
    void tree;
}

- (void).cxx_destruct;
- (void)didTapOnOverlay:(id)arg1;
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
