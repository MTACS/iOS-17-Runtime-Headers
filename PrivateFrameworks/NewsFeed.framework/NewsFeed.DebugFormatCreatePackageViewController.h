
@interface NewsFeed.DebugFormatCreatePackageViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void $__lazy_storage_$_createBarButtonItem;
    void debugFormatService;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  editorURL;
    void selectedTemplate;
    void tableView;
    void valuesByTemplateKey;
}

- (void).cxx_destruct;
- (void)doCreatePackage;
- (void)doDismissView;
- (void)doEndEditing;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
