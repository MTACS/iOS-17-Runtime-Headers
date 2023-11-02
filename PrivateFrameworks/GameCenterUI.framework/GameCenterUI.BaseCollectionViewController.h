
@interface GameCenterUI.BaseCollectionViewController : UICollectionViewController <ASCLockupViewDelegate, UIAdaptivePresentationControllerDelegate> {
    void manualScrollEdgeAppearanceProgress;
    void navbarScrollObserver;
    void navbarScrollObserverSkipDistance;
    void overlayView;
    void scrollObserver;
    void wantsConfigureCollectionViewFocusGuide;
    void wantsHiddenNavigationBar;
    void wantsHiddenTitle;
}

@property (nonatomic, retain) UICollectionView *collectionView;

- (void).cxx_destruct;
- (id)collectionView;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)presentationControllerDidDismiss:(id)arg1;
- (id)presentingViewControllerForLockupView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
