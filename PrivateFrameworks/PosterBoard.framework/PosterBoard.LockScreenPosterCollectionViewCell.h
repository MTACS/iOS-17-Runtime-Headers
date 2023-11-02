
@interface PosterBoard.LockScreenPosterCollectionViewCell : PosterBoard.PosterPairCollectionViewCell <CHSWidgetDescriptorProviderObserver, PREditingSceneViewControllerObserver, UIScrollViewDelegate> {
    void complicationLayout;
    void defaultScrollAnimationDuration;
    void delegate;
    void descriptorProvider;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  displayDate;
    void displayedComplicationLocation;
    void editingSceneViewController;
    void floatingLayerSnapshotImage;
    void floatingLayerSnapshotView;
    void floatingProminentController;
    void focusButton;
    void isComplicationContainerHiddenInFullscreenLayout;
    void isFloatingLayerInlined;
    void isFullyTransitionedToLockConfiguringAndEditing;
    void liveContentView;
    void liveFloatingView;
    void lockVibrancyConfiguration;
    void maximumRevealProgressWhenRevealingDisallowed;
    void maximumVerticalRevealFraction;
    void overlayView;
    void prominentController;
    void scrollView;
    void scrollableContentView;
    void shadowView;
    void shouldShowFocusButton;
    void titleStyleConfiguration;
    void widgetSidebarProminentController;
}

@property (nonatomic, readonly) bool layoutModeUsesFullscreenSizedMetrics;
@property (nonatomic, retain) UIScrollView *scrollView;

- (void).cxx_destruct;
- (void)dealloc;
- (void)descriptorsDidChangeForDescriptorProvider:(id)arg1;
- (void)didMoveToWindow;
- (void)editingSceneViewControllerDidFinishShowingContent:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)layoutModeUsesFullscreenSizedMetrics;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)presentFocusSelector;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(struct CGPoint { double x1; double x2; }*)arg3;
- (void)setScrollView:(id)arg1;

@end
