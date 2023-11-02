
@protocol SFUnifiedBarContentView <NSObject>

@required

- (struct CGSize { double x1; double x2; })preferredSize;

@optional

- (double)barBackgroundAlpha;
- (SFUnifiedBarMetrics *)barMetrics;
- (SFUnifiedBarTheme *)barTheme;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (bool)isContentHidden;
- (bool)isCurrentlyScrollable;
- (struct CGPoint { double x1; double x2; })midpointForCenteredContent;
- (bool)pinsScrollPositionToTrailingEdgeDuringResize;
- (double)preferredBottomSpacing;
- (double)preferredSquishedBottomSpacing;
- (double)preferredTopSpacing;
- (void)setBarBackgroundAlpha:(double)arg1;
- (void)setBarTheme:(SFUnifiedBarTheme *)arg1;
- (void)setContentInset:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMidpointForCenteredContent:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPinsScrollPositionToTrailingEdgeDuringResize:(bool)arg1;
- (void)setShowsSquishedAccessoryViews:(bool)arg1;
- (void)setSizeClass:(unsigned long long)arg1;
- (void)setSquishTransformFactor:(double)arg1;
- (void)setSquishedContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setThemeColorVisibility:(double)arg1;
- (bool)showsSquishedAccessoryViews;
- (bool)showsSquishedContent;
- (unsigned long long)sizeClass;
- (double)squishTransformFactor;
- (NSArray *)squishedAccessoryViews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })squishedContentInset;
- (double)themeColorVisibility;
- (double)topSquishedSpacingAdjustment;

@end
