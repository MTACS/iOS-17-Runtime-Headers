
@interface VideosUI.AlertTemplateController : VideosUI.VUIViewController <UICollectionViewDataSource, VUILegacyCollectionViewDelegate> {
    void collectionTableItems;
    void collectionViewModels;
    void contextMenuDelegate;
    void dynamicButtons;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastFocusedIndexPath;
    void templateViewModel;
    void updateAutoHighlight;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void).cxx_destruct;
- (bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)vui_loadView;
- (void)vui_viewDidDisappear:(bool)arg1;
- (void)vui_viewDidLayoutSubviews;

@end
