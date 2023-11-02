
@interface CKSendMenuViewController : UIViewController <UICollectionViewDelegate> {
    void $__lazy_storage_$_backdropView;
    void $__lazy_storage_$_collectionViewLayout;
    void $__lazy_storage_$_plusButtonIdealPositionAvoidanceHeight;
    void $__lazy_storage_$_sendMenuCollectionView;
    void $__lazy_storage_$_sendMenuDataSource;
    void $__lazy_storage_$_sendMenuParentView;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  activeDismissAnimationIdentifier;
    void collapsedMenuOrigin;
    void collectionViewBottomConstraint;
    void collectionViewDismissingLayout;
    void collectionViewTopConstraint;
    void contentProvider;
    void favoritesAutoScrollInsets;
    void hasPerformedInitialContentAppearance;
    void indexPathsToCollapseIntoPlusButton;
    void isAppearanceAnimationActive;
    void isInitialAppearanceAnimationActive;
    void isPresentingAudioRecordingQuickSend;
    void moreAppsAutoScrollInsets;
    void plusButtonPortalView;
    void plusButtonPortalViewShouldUsePlusLFilter;
    void plusButtonPortalViewShouldUserIdealFrame;
    void presentationContext;
    void reorderGestureDragPointOffsetFromCellCenter;
    void sendMenuCellReuseIdentifier;
    void sendMenuListItems;
    void sendMenuViewControllerDelegate;
    void yPointForBoundaryBetweenSections;
}

@property (nonatomic, copy) NSArray *accessibilityCustomActions;
@property (nonatomic) bool isPresentingAudioRecordingQuickSend;
@property (nonatomic, readonly) bool prefersStatusBarHidden;
@property (nonatomic) <CKSendMenuViewControllerDelegate> *sendMenuViewControllerDelegate;

- (void).cxx_destruct;
- (bool)_collectionView:(id)arg1 shouldApplyTransitionContentOffset:(struct CGPoint { double x1; double x2; })arg2 contentSize:(struct CGSize { double x1; double x2; })arg3;
- (void)_handleReorderingGesture:(id)arg1;
- (id)accessibilityCustomActions;
- (void)anchorViewDidMove;
- (double)calculatePercentVisibleForSection:(long long)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)arg2 atCurrentIndexPath:(id)arg3 toProposedIndexPath:(id)arg4;
- (void)collectionViewBackgroundTapped:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPresentationContext:(id)arg1;
- (bool)isPresentingAudioRecordingQuickSend;
- (void)loadMoreAppsSection;
- (void)loadView;
- (void)performFullScreenDismissAnimationWithCompletion:(id /* block */)arg1;
- (void)pluginIconUpdatedWithNotification:(id)arg1;
- (bool)prefersStatusBarHidden;
- (void)rePresentSendMenu;
- (void)scrollViewDidScroll:(id)arg1;
- (id)sendMenuViewControllerDelegate;
- (void)setAccessibilityCustomActions:(id)arg1;
- (void)setIsPresentingAudioRecordingQuickSend:(bool)arg1;
- (void)setSendMenuViewControllerDelegate:(id)arg1;
- (void)updatePreferredContentSize;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
