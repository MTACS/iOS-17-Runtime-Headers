
@interface ContactsUI.CNAvatarPosterPairCollectionViewController : UICollectionViewController <CNPRUISPosterEditingViewControllerDelegate> {
    void $__lazy_storage_$_feedbackGenerator;
    void addPosterButton;
    void centeredPosterButton;
    void configuration;
    void contact;
    void contactForSharedProfile;
    void delegate;
    void isScrollingOrSettling;
    void lastPosterConfiguration;
    void layout;
    void mode;
    void needsReload;
    void pageControl;
    void pageControlPreferredNumberOfVisibleIndicators;
    void viewModel;
    void viewModelSubscriber;
}

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)dealloc;
- (void)editingViewController:(id)arg1 didFinishWithConfiguration:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithConfiguration:(id)arg1 contact:(id)arg2 contactForSharedProfile:(id)arg3 mode:(long long)arg4 delegate:(id)arg5;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)pageControlDidChangePage:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(struct CGPoint { double x1; double x2; }*)arg3;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
