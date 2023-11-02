
@interface PBFAmbientEditingCollectionViewController : UICollectionViewController <PBFPosterExtensionDataStoreObserver, PREditingSceneViewControllerDelegate, UICollectionViewDelegateFlowLayout> {
    void $__lazy_storage_$_snapshotController;
    void activePosterConfiguration;
    void activePosterProvider;
    void addButton;
    void ambientEditingDelegate;
    void availableInstanceIdentifiers;
    void buttonDistanceFromScreenEdge;
    void buttonDistanceFromScreenTop;
    void buttonHeight;
    void buttonWidth;
    void dataStore;
    void desiredSpacingFromCardToPageControl;
    void doneButton;
    void editingSceneHiddenWindow;
    void editingSceneViewController;
    void finishDismiss;
    void hasScrolledToActivePosterForInitialViewLayout;
    void isScrollingOrSettling;
    void layout;
    void observers;
    void pageControl;
    void pageControlPreferredNumberOfVisibleIndicators;
    void posters;
    void presentedEditingRemoteViewContentScreenRect;
    void presentedEditingRemoteViewController;
}

@property (nonatomic) <PBFAmbientEditingCollectionViewControllerDelegate> *ambientEditingDelegate;

- (void).cxx_destruct;
- (id)ambientEditingDelegate;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)dismiss;
- (void)editingSceneViewController:(id)arg1 userDidDismissWithAction:(long long)arg2 updatedConfiguration:(id)arg3 updatedConfiguredProperties:(id)arg4 completion:(id /* block */)arg5;
- (void)editingSceneViewController:(id)arg1 wantsRemotePresentationOfViewController:(id)arg2 contentScreenRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)init;
- (id)init:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)pageControlDidChangePage:(id)arg1;
- (void)posterExtensionDataStore:(id)arg1 didAddConfiguration:(id)arg2;
- (void)posterExtensionDataStore:(id)arg1 didDeleteConfiguration:(id)arg2;
- (void)posterExtensionDataStore:(id)arg1 didUpdateConfiguration:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(struct CGPoint { double x1; double x2; }*)arg3;
- (void)setAmbientEditingDelegate:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
