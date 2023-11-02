
@interface NewsFeed.DebugFormatLogViewController : UIViewController <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate> {
    void $__lazy_storage_$_nowBarButtonItem;
    void consolePaneDisplayController;
    void editor;
    void entries;
    void filterTerm;
    void searchBar;
    void styler;
    void tableView;
    void throttler;
    void unfilteredEntries;
}

- (void).cxx_destruct;
- (void)doNow;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
