
@interface NewsFeed.DebugFormatInventoryViewController : UIViewController <UISearchResultsUpdating, UITableViewDataSource, UITableViewDelegate> {
    void $__lazy_storage_$_createPackageBarButtonItem;
    void $__lazy_storage_$_updatedLabel;
    void $__lazy_storage_$_uploadBarButtonItem;
    void $__lazy_storage_$_versionBarButtonItem;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  columnOptions;
    void coverViewManager;
    void editor;
    void groupViewController;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  layoutOptions;
    void packages;
    void sections;
    void styler;
    void tableView;
}

- (void).cxx_destruct;
- (void)doCompileUpload;
- (void)doCreatePackage;
- (void)doDismiss;
- (void)doShowVersioningModePicker:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
