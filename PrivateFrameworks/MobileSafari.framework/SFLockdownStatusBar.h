
@interface SFLockdownStatusBar : UIView <SFNavigationBarItemObserver, SFUnifiedBarContentView> {
    long long  _currentLockdownStatus;
    UILabel * _lockdownModeStatusLabel;
    SFNavigationBarItem * _navigationBarItem;
    bool  _shouldAnimateNavigationBarItemChanges;
}

@property (nonatomic) double barBackgroundAlpha;
@property (nonatomic, readonly) SFUnifiedBarMetrics *barMetrics;
@property (nonatomic, retain) SFUnifiedBarTheme *barTheme;
@property (getter=isContentHidden, nonatomic, readonly) bool contentHidden;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCurrentlyScrollable;
@property (nonatomic) struct CGPoint { double x1; double x2; } midpointForCenteredContent;
@property (nonatomic, retain) SFNavigationBarItem *navigationBarItem;
@property (nonatomic) bool pinsScrollPositionToTrailingEdgeDuringResize;
@property (nonatomic, readonly) double preferredBottomSpacing;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredSize;
@property (nonatomic, readonly) double preferredSquishedBottomSpacing;
@property (nonatomic, readonly) double preferredTopSpacing;
@property (nonatomic) bool shouldAnimateNavigationBarItemChanges;
@property (nonatomic) bool showsSquishedAccessoryViews;
@property (nonatomic, readonly) bool showsSquishedContent;
@property (nonatomic) unsigned long long sizeClass;
@property (nonatomic) double squishTransformFactor;
@property (nonatomic, readonly) NSArray *squishedAccessoryViews;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } squishedContentInset;
@property (readonly) Class superclass;
@property (nonatomic) double themeColorVisibility;
@property (nonatomic, readonly) double titleBaselineInsetFromBottom;
@property (nonatomic, readonly) double titleCapHeightInsetFromTop;
@property (nonatomic, readonly) double topSquishedSpacingAdjustment;

- (void).cxx_destruct;
- (void)_updateLabelWithLockdownStatus:(long long)arg1;
- (void)_updateLockdownStatusLabel;
- (void)_updateLockdownStatusLabelAnimated:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)navigationBarItem;
- (void)navigationBarItemDidUpdateLockdownModeAnnotation:(id)arg1;
- (double)preferredBottomSpacing;
- (struct CGSize { double x1; double x2; })preferredSize;
- (double)preferredSquishedBottomSpacing;
- (double)preferredTopSpacing;
- (void)setNavigationBarItem:(id)arg1;
- (void)setShouldAnimateNavigationBarItemChanges:(bool)arg1;
- (bool)shouldAnimateNavigationBarItemChanges;
- (bool)showsSquishedContent;
- (double)titleBaselineInsetFromBottom;
- (double)titleCapHeightInsetFromTop;
- (double)topSquishedSpacingAdjustment;

@end
