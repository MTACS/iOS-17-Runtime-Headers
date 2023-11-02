
@interface NTKBlackcombBackgroundView : UIView {
    CLKDevice * _device;
    NSArray * _largeTicks;
    NSArray * _mediumTicks;
    NTKBlackcombColorPalette * _palette;
    bool  _showingStatus;
    CALayer * _smallTickCoveringLayer;
    NSArray * _smallTicks;
    bool  _usesLongSideTicks;
}

@property (nonatomic) bool usesLongSideTicks;

- (void).cxx_destruct;
- (void)_applyBackgroundColor:(id)arg1;
- (double)_innerDialRadiusAtLargeTick:(long long)arg1 verticalLength:(double)arg2 horizontalLength:(double)arg3;
- (void)_layoutTopLargeTick;
- (double)_outerDialRadiusAtMediumTick:(long long)arg1 verticalLength:(double)arg2 horizontalLength:(double)arg3;
- (void)_setupTicks;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_tickLayoutBounds;
- (void)applyPalette:(id)arg1;
- (void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3;
- (void)applyTransitionFractionToUsesLongSideTicks:(double)arg1;
- (void)configureTicksForStatus:(bool)arg1;
- (id)initForDevice:(id)arg1;
- (void)setUsesLongSideTicks:(bool)arg1;
- (bool)usesLongSideTicks;

@end
