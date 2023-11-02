
@interface PKMemoIconChooserViewController : PKDynamicCollectionViewController <PKMemoIconChooserSectionControllerDelegate, PKMemoIconChooserViewControllerDelegate> {
    <PKMemoIconChooserViewControllerDelegate> * _delegate;
    UIBarButtonItem * _doneButton;
    unsigned long long  _mode;
    PKMemoIconChooserSectionController * _section;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelTapped;
- (void)_doneTapped;
- (void)cell:(id)arg1 didUpdateText:(id)arg2;
- (void)didSelectItem:(id)arg1;
- (id)initWithDelegate:(id)arg1 memo:(id)arg2;
- (id)initWithDelegate:(id)arg1 memo:(id)arg2 mode:(unsigned long long)arg3;
- (void)invalidateLayout;
- (void)loadView;
- (void)memoIconChooserDidChooseMemo:(id)arg1;
- (struct { bool x1; long long x2; })pkui_navigationStatusBarStyleDescriptor;
- (void)selectCellForItem:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;

@end
