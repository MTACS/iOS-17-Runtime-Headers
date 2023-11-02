
@interface STUIStatusBarWifiSignalView : STUIStatusBarSignalView {
    STUIStatusBarCycleAnimation * _cycleAnimation;
    bool  _needsCycleAnimationUpdate;
}

@property (nonatomic, retain) STUIStatusBarCycleAnimation *cycleAnimation;
@property (nonatomic) bool needsCycleAnimationUpdate;

+ (id)_barImageWithSize:(struct CGSize { double x1; double x2; })arg1 forScale:(double)arg2 distance:(double)arg3 angle:(double)arg4 centerPoint:(struct CGPoint { double x1; double x2; })arg5 cornerRadius:(double)arg6 thickness:(double)arg7 rounded:(bool)arg8;
+ (double)_barThicknessAtIndex:(unsigned long long)arg1 iconSize:(long long)arg2;
+ (double)_interspaceForIconSize:(long long)arg1;
+ (struct CGSize { double x1; double x2; })_intrinsicContentSizeForNumberOfBars:(long long)arg1 iconSize:(long long)arg2;
+ (double)_totalWidthForIconSize:(long long)arg1;
+ (double)widthForIconSize:(long long)arg1;

- (void).cxx_destruct;
- (double)_barCornerRadius;
- (void)_colorsDidChange;
- (void)_iconSizeDidChange;
- (void)_setNeedsUpdateCycleAnimation;
- (void)_updateActiveBars;
- (void)_updateBars;
- (void)_updateCycleAnimationIfNeeded;
- (void)_updateCycleAnimationNow;
- (void)_updateFromMode:(long long)arg1;
- (id)accessibilityHUDRepresentation;
- (id)cycleAnimation;
- (void)didMoveToWindow;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (bool)needsCycleAnimationUpdate;
- (void)setCycleAnimation:(id)arg1;
- (void)setNeedsCycleAnimationUpdate:(bool)arg1;

@end
