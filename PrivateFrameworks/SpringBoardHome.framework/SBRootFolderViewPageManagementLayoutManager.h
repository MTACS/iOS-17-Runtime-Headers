
@interface SBRootFolderViewPageManagementLayoutManager : NSObject <SBFolderObserver, SBHPageManagementCellViewControllerDelegate, SBIconDragManagerDelegate, SBIconListModelObserver, SBIconListViewDominoPivotAnimatorDelegate, SBIconListViewDragDelegate, SBIconViewActionDelegate, SBIconViewDelegate, SBIconViewProviding, SBRootFolderViewLayoutManager, UIScrollViewDelegate> {
    SBHFocusMode * _activeFocusMode;
    unsigned long long  _activeTransitionCount;
    UIViewController * _alertPresentationViewController;
    bool  _allowsEditing;
    bool  _allowsPageHiding;
    UITapGestureRecognizer * _backgroundTapGestureRecognizer;
    NSURL * _completionURL;
    <SBDockOffscreenFractionModifying> * _dockOffscreenAssertion;
    SBHPageManagementIcon * _draggingIcon;
    SBIconView * _draggingIconView;
    SBTitledHomeScreenButton * _focusModeOptionsButton;
    UIImageView * _focusModeSymbolView;
    SBIconDragManager * _iconDragManager;
    NSMapTable * _iconViewControllersByIcon;
    NSMapTable * _iconViewControllersByListModel;
    NSMapTable * _initialScalingAttributesByIconView;
    <UIViewImplicitlyAnimating> * _latestActiveTransitionAnimator;
    long long  _layoutAction;
    long long  _layoutConfiguration;
    <BSInvalidatable> * _pageDotsVisibilityAssertion;
    NSMapTable * _pageIconsByListModel;
    SBRootFolder * _pageManagementRootFolder;
    UIScrollView * _pageManagementScrollView;
    SBRootFolderView * _rootFolderView;
    SBIconListView * _rootListView;
    <BSInvalidatable> * _scrollAccessoryBorrowedAssertion;
    unsigned long long  _transitionCount;
    id  _userInfo;
}

@property (nonatomic, retain) SBHFocusMode *activeFocusMode;
@property (nonatomic) unsigned long long activeTransitionCount;
@property (nonatomic) UIViewController *alertPresentationViewController;
@property (nonatomic) bool allowsEditing;
@property (nonatomic) bool allowsPageHiding;
@property (nonatomic, retain) UITapGestureRecognizer *backgroundTapGestureRecognizer;
@property (nonatomic, copy) NSURL *completionURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <SBDockOffscreenFractionModifying> *dockOffscreenAssertion;
@property (nonatomic, retain) SBHPageManagementIcon *draggingIcon;
@property (nonatomic, retain) SBIconView *draggingIconView;
@property (getter=isEditing, nonatomic) bool editing;
@property (nonatomic, retain) SBTitledHomeScreenButton *focusModeOptionsButton;
@property (nonatomic, retain) UIImageView *focusModeSymbolView;
@property (readonly) unsigned long long hash;
@property (getter=isIconContentPossiblyVisibleOverApplication, nonatomic, readonly) bool iconContentPossiblyVisibleOverApplication;
@property (nonatomic, readonly) SBIconDragManager *iconDragManager;
@property (nonatomic, readonly) SBHIconModel *iconModel;
@property (nonatomic, readonly) bool isTrackingActiveOrDroppingIconDrags;
@property (nonatomic, retain) <UIViewImplicitlyAnimating> *latestActiveTransitionAnimator;
@property (nonatomic) long long layoutAction;
@property (nonatomic) long long layoutConfiguration;
@property (getter=isMainDisplayLibraryViewVisible, nonatomic) bool mainDisplayLibraryViewVisible;
@property (getter=isOverlayTodayViewVisible, nonatomic) bool overlayTodayViewVisible;
@property (nonatomic, retain) <BSInvalidatable> *pageDotsVisibilityAssertion;
@property (nonatomic, retain) SBRootFolder *pageManagementRootFolder;
@property (nonatomic, retain) UIScrollView *pageManagementScrollView;
@property (getter=isRootFolderContentVisible, nonatomic, readonly) bool rootFolderContentVisible;
@property (nonatomic) SBRootFolderView *rootFolderView;
@property (nonatomic, retain) SBIconListView *rootListView;
@property (nonatomic, retain) <BSInvalidatable> *scrollAccessoryBorrowedAssertion;
@property (getter=isScrolling, nonatomic) bool scrolling;
@property (readonly) Class superclass;
@property (getter=isTrackingScroll, nonatomic) bool trackingScroll;
@property (nonatomic) unsigned long long transitionCount;
@property (nonatomic, retain) id userInfo;

- (void).cxx_destruct;
- (bool)_allowsCloseBoxForIconView:(id)arg1;
- (bool)_canRasterizeIconView:(id)arg1;
- (void)_removePageIcon:(id)arg1;
- (void)_updateCloseBoxVisibilityWithAnimation:(long long)arg1;
- (id)activeFocusMode;
- (unsigned long long)activeTransitionCount;
- (id)alertPresentationViewController;
- (bool)allowsEditing;
- (bool)allowsPageHiding;
- (id)backgroundTapGestureRecognizer;
- (void)backgroundTapped:(id)arg1;
- (id)backgroundViewForSnapshotForPageManagementCellViewController:(id)arg1;
- (void)cleanUpViewsInFolderView:(id)arg1;
- (long long)closeBoxTypeForIconView:(id)arg1;
- (id)completionURL;
- (void)configureIconView:(id)arg1 forIcon:(id)arg2;
- (id)customImageViewControllerForIconView:(id)arg1;
- (id)dequeueReusableIconViewOfClass:(Class)arg1;
- (id)dockOffscreenAssertion;
- (void)dominoPivotAnimator:(id)arg1 didLayOutIconView:(id)arg2;
- (id)dragItemsForIconView:(id)arg1;
- (id)draggingIcon;
- (id)draggingIconView;
- (id)focusModeOptionsButton;
- (void)focusModeOptionsButtonTapped:(id)arg1;
- (id)focusModeSymbolView;
- (void)folder:(id)arg1 listHiddenDidChange:(id)arg2;
- (unsigned long long)folderListIndexToAnimateOutForList:(id)arg1 inFolder:(id)arg2 avoidingList:(id)arg3;
- (void)iconCloseBoxTapped:(id)arg1;
- (id)iconDragManager;
- (bool)iconDragManager:(id)arg1 doesIconViewRepresentRealIconPosition:(id)arg2;
- (id)iconDragManager:(id)arg1 dragPreviewForIconView:(id)arg2;
- (void)iconList:(id)arg1 didMoveIcon:(id)arg2;
- (void)iconList:(id)arg1 didRemoveIcon:(id)arg2;
- (bool)iconListView:(id)arg1 canHandleIconDropSession:(id)arg2;
- (id)iconListView:(id)arg1 customSpringAnimationBehaviorForDroppingItem:(id)arg2;
- (void)iconListView:(id)arg1 iconDragItem:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (void)iconListView:(id)arg1 iconDropSession:(id)arg2 didPauseAtLocation:(struct CGPoint { double x1; double x2; })arg3;
- (void)iconListView:(id)arg1 iconDropSessionDidEnter:(id)arg2;
- (void)iconListView:(id)arg1 iconDropSessionDidExit:(id)arg2;
- (id)iconListView:(id)arg1 iconDropSessionDidUpdate:(id)arg2;
- (id)iconListView:(id)arg1 iconViewForDroppingIconDragItem:(id)arg2 proposedIconView:(id)arg3;
- (void)iconListView:(id)arg1 performIconDrop:(id)arg2;
- (id)iconListView:(id)arg1 previewForDroppingIconDragItem:(id)arg2 proposedPreview:(id)arg3;
- (bool)iconListView:(id)arg1 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg2 onIconView:(id)arg3;
- (void)iconListView:(id)arg1 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg2;
- (void)iconListView:(id)arg1 willUseIconView:(id)arg2 forDroppingIconDragItem:(id)arg3;
- (id)iconListViewForIndexPath:(id)arg1;
- (bool)iconShouldAllowCloseBoxTap:(id)arg1;
- (bool)iconView:(id)arg1 canAddDragItemsToSession:(id)arg2;
- (void)iconView:(id)arg1 didEndDragSession:(id)arg2 withOperation:(unsigned long long)arg3;
- (void)iconView:(id)arg1 dragLiftAnimationDidChangeDirection:(long long)arg2;
- (id)iconView:(id)arg1 dragPreviewForItem:(id)arg2 session:(id)arg3 previewParameters:(id)arg4;
- (void)iconView:(id)arg1 item:(id)arg2 willAnimateDragCancelWithAnimator:(id)arg3;
- (void)iconView:(id)arg1 willAnimateDragLiftWithAnimator:(id)arg2 session:(id)arg3;
- (bool)iconViewCanBecomeFocused:(id)arg1;
- (bool)iconViewCanBeginDrags:(id)arg1;
- (id)iconViewQueryableForIconDragManager:(id)arg1;
- (void)iconViewWillBeginDrag:(id)arg1 session:(id)arg2;
- (id)init;
- (bool)isEditing;
- (bool)isIconViewRecycled:(id)arg1;
- (bool)isTrackingActiveOrDroppingIconDrags;
- (id)latestActiveTransitionAnimator;
- (long long)layoutAction;
- (long long)layoutConfiguration;
- (void)layoutFooterViewsInFolderView:(id)arg1;
- (void)layoutHeaderViewsInFolderView:(id)arg1;
- (void)layoutScrollViewAndRootListViewInFolderView:(id)arg1;
- (void)makeMaterialViewsVisible;
- (void)makeRootListViewInFolderView:(id)arg1 animated:(bool)arg2;
- (id)newCellBackgroundMaterialViewInFolderView:(id)arg1 initialWeighting:(double)arg2;
- (bool)pageContainsBookmarkIcons:(id)arg1;
- (id)pageDotsVisibilityAssertion;
- (bool)pageManagementCellViewControllerCanReceiveTap:(id)arg1;
- (void)pageManagementCellViewControllerDidReceiveTap:(id)arg1;
- (bool)pageManagementCellViewControllerShouldSuppressHighlight:(id)arg1;
- (id)pageManagementRootFolder;
- (id)pageManagementScrollView;
- (void)presentPageDeleteConfirmationAlertForIconView:(id)arg1 completion:(id /* block */)arg2;
- (void)presentSecondPageDeleteConfirmationAlertBookmarksFoundForIconView:(id)arg1 completion:(id /* block */)arg2;
- (void)rasterizeIconViewsForImprovedLegibilityInScaledDownListViews;
- (void)recycleIconView:(id)arg1;
- (id)rootFolderForIconDragManager:(id)arg1;
- (id)rootFolderView;
- (id)rootListView;
- (id)rootViewForIconDragManager:(id)arg1;
- (id)scrollAccessoryBorrowedAssertion;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setActiveFocusMode:(id)arg1;
- (void)setActiveTransitionCount:(unsigned long long)arg1;
- (void)setAlertPresentationViewController:(id)arg1;
- (void)setAllowsEditing:(bool)arg1;
- (void)setAllowsPageHiding:(bool)arg1;
- (void)setBackgroundTapGestureRecognizer:(id)arg1;
- (void)setCompletionURL:(id)arg1;
- (void)setDockOffscreenAssertion:(id)arg1;
- (void)setDraggingIcon:(id)arg1;
- (void)setDraggingIconView:(id)arg1;
- (void)setFocusModeOptionsButton:(id)arg1;
- (void)setFocusModeSymbolView:(id)arg1;
- (void)setLatestActiveTransitionAnimator:(id)arg1;
- (void)setLayoutAction:(long long)arg1;
- (void)setLayoutConfiguration:(long long)arg1;
- (void)setPageDotsVisibilityAssertion:(id)arg1;
- (void)setPageManagementRootFolder:(id)arg1;
- (void)setPageManagementScrollView:(id)arg1;
- (void)setRootFolderView:(id)arg1;
- (void)setRootListView:(id)arg1;
- (void)setScrollAccessoryBorrowedAssertion:(id)arg1;
- (void)setTransitionCount:(unsigned long long)arg1;
- (void)setUserInfo:(id)arg1;
- (unsigned long long)transitionCount;
- (void)transitionToActive:(bool)arg1 inFolderView:(id)arg2 usingAnimator:(id)arg3;
- (void)turnOffIconViewRazterizationForNormalSizeListViews;
- (id)userInfo;

@end
