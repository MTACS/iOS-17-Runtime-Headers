
@interface NewsUI2.MagazineGridViewController : TUViewController {
    void $__lazy_storage_$_doneBarButtonItem;
    void $__lazy_storage_$_downloadBarButtonItem;
    void $__lazy_storage_$_removeDownloadsBarButtonItem;
    void $__lazy_storage_$_removeIssuesAndDownloadsBarButtonItem;
    void $__lazy_storage_$_selectAllBarButtonItem;
    void $__lazy_storage_$_selectionCountBarButtonItem;
    void $__lazy_storage_$_selectionCountLabel;
    void blueprintViewController;
    void commandCenterWithTracker;
    void editSelection;
    void eventHandler;
    void offlineAlertControllerFactory;
    void styler;
    void toolbarManager;
    void viewControllerConfig;
}

- (void).cxx_destruct;
- (id)contentScrollView;
- (void)doDoneAction;
- (void)doDownloadAction;
- (void)doRemoveDownloadsAction;
- (void)doRemoveIssuesAndDownloadsAction;
- (void)doSelectAllAction;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
