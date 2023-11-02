
@interface SUUIITunesStoreUIPageViewController : SUStorePageViewController {
    SUBarButtonItem * _cancelButtonItem;
    NSString * _cancelButtonTitle;
    SUProductPageViewController * _productPageViewController;
    bool  _showsCancelButton;
}

@property (nonatomic, copy) NSString *cancelButtonTitle;
@property (nonatomic) SUProductPageViewController *productPageViewController;
@property (nonatomic) bool showsCancelButton;

- (void).cxx_destruct;
- (void)_addCancelButtonToNavigationItem:(id)arg1;
- (id)_cancelButtonItem;
- (void)_storeSheetCancelButtonAction:(id)arg1;
- (id)cancelButtonTitle;
- (void)dealloc;
- (void)handleFailureWithError:(id)arg1;
- (bool)presentDialogForError:(id)arg1 pendUntilVisible:(bool)arg2;
- (id)productPageViewController;
- (void)resetNavigationItem:(id)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setProductPageViewController:(id)arg1;
- (void)setShowsCancelButton:(bool)arg1;
- (bool)showsCancelButton;
- (void)viewWillLayoutSubviews;

@end
