
@interface _UIStatusBarCellularSignalView : _UIStatusBarSignalView {
    _UIStatusBarCycleAnimation * _cycleAnimation;
    bool  _needsCycleAnimationUpdate;
    bool  _needsLargerScale;
}

@property (nonatomic, retain) _UIStatusBarCycleAnimation *cycleAnimation;
@property (nonatomic) bool needsCycleAnimationUpdate;
@property (nonatomic) bool needsLargerScale;

+ (double)_barCornerRadiusForIconSize:(long long)arg1;
+ (double)_barWidthForIconSize:(long long)arg1;
+ (double)_heightForNormalBarAtIndex:(long long)arg1 iconSize:(long long)arg2;
+ (double)_interspaceForIconSize:(long long)arg1;
+ (struct CGSize { double x1; double x2; })_intrinsicContentSizeForNumberOfBars:(long long)arg1 iconSize:(long long)arg2;

- (void).cxx_destruct;
- (void)_colorsDidChange;
- (double)_heightForBarAtIndex:(long long)arg1;
- (double)_heightForBarAtIndex:(long long)arg1 mode:(long long)arg2;
- (void)_iconSizeDidChange;
- (void)_setNeedsUpdateCycleAnimation;
- (void)_updateActiveBars;
- (void)_updateBars;
- (void)_updateCycleAnimationIfNeeded;
- (void)_updateCycleAnimationNow;
- (void)_updateFromMode:(long long)arg1;
- (id)accessibilityHUDRepresentation;
- (void)applyStyleAttributes:(id)arg1;
- (id)cycleAnimation;
- (void)didMoveToWindow;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (bool)needsCycleAnimationUpdate;
- (bool)needsLargerScale;
- (void)setCycleAnimation:(id)arg1;
- (void)setNeedsCycleAnimationUpdate:(bool)arg1;
- (void)setNeedsLargerScale:(bool)arg1;

@end
