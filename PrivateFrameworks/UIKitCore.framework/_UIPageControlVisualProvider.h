
@interface _UIPageControlVisualProvider : NSObject {
    long long  _displayedPage;
    long long  _interactionState;
    UIPageControl * _pageControl;
    UIImage * _preferredActiveIndicatorImage;
    bool  _supportsContinuousInteraction;
}

@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, readonly) long long displayedPage;
@property (nonatomic) double indicatorOpacity;
@property (nonatomic) long long interactionState;
@property (nonatomic, retain) UIImage *preferredActiveIndicatorImage;
@property (nonatomic, retain) UIImage *preferredIndicatorImage;
@property (nonatomic) bool supportsContinuousInteraction;

- (void).cxx_destruct;
- (id)backgroundView;
- (id)customActiveIndicatorImageForPage:(long long)arg1;
- (id)customIndicatorImageForPage:(long long)arg1;
- (void)didEndTrackingWithTouch:(id)arg1;
- (void)didUpdateBackgroundEffect;
- (void)didUpdateBackgroundStyle;
- (void)didUpdateCurrentPageIndicatorTintColor;
- (void)didUpdateCurrentPageProgress;
- (void)didUpdateCustomLayoutValues;
- (void)didUpdateInteractionTypeAvailability;
- (void)didUpdateLayoutDirection;
- (void)didUpdateNumberOfPages;
- (void)didUpdatePageIndicatorTintColor;
- (void)didUpdatePageProgress;
- (long long)displayedPage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })indicatorFrameForPage:(long long)arg1;
- (double)indicatorOpacity;
- (id)initWithPageControl:(id)arg1;
- (long long)interactionState;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIndicators;
- (void)layoutSubviews;
- (id)preferredActiveIndicatorImage;
- (id)preferredIndicatorImage;
- (void)prepare;
- (void)pruneArchivedSubviews:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setCustomActiveIndicatorImage:(id)arg1 forPage:(long long)arg2;
- (void)setCustomIndicatorImage:(id)arg1 forPage:(long long)arg2;
- (void)setIndicatorOpacity:(double)arg1;
- (void)setInteractionState:(long long)arg1;
- (void)setPage:(long long)arg1 interactionState:(long long)arg2;
- (void)setPreferredActiveIndicatorImage:(id)arg1;
- (void)setPreferredIndicatorImage:(id)arg1;
- (void)setSupportsContinuousInteraction:(bool)arg1;
- (bool)shouldDisableTouchTracking;
- (struct CGSize { double x1; double x2; })sizeForNumberOfPages:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)supportsContinuousInteraction;
- (void)teardownPageControl;
- (void)traitCollectionDidChangeOnSubtree:(id)arg1;
- (void)updateDisplayedPageToCurrentPage;

@end
