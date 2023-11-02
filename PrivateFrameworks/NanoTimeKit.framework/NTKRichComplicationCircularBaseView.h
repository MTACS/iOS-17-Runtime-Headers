
@interface NTKRichComplicationCircularBaseView : CDRichComplicationTemplateView <NTKRichComplicationCircularView> {
    bool  _accentedAlternateBackground;
    UIView * _contentView;
    double  _editingRotationInDegree;
    UIView * _framingView;
    UIColor * _platterColor;
    long long  _position;
}

@property (nonatomic) bool accentedAlternateBackground;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) UIView *framingView;
@property (nonatomic, retain) UIColor *platterColor;
@property (nonatomic) long long position;

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (id)keylineImageWithFilled:(bool)arg1 forDevice:(id)arg2;
+ (id)keylineImageWithFilled:(bool)arg1 wide:(bool)arg2 expanded:(bool)arg3 forDevice:(id)arg4;
+ (id)keylineViewForDevice:(id)arg1;
+ (id)keylineViewForDevice:(id)arg1 wide:(bool)arg2 expanded:(bool)arg3;
+ (id)layoutRuleForState:(long long)arg1 viewCenterInFaceBounds:(struct CGPoint { double x1; double x2; })arg2 position:(long long)arg3 editingAdjustment:(long long)arg4 wide:(bool)arg5 forDevice:(id)arg6;
+ (id)layoutRuleForState:(long long)arg1 viewCenterInFaceBounds:(struct CGPoint { double x1; double x2; })arg2 position:(long long)arg3 forDevice:(id)arg4;
+ (bool)supportsComplicationFamily:(long long)arg1;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForState:(long long)arg1;
+ (void)updateCustomDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 isForward:(bool)arg3 animationType:(unsigned long long)arg4 animationDuration:(double)arg5 animationFraction:(float)arg6;
+ (id)viewWithLegacyComplicationType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (unsigned long long)_adjustFontSizeForLabel:(id)arg1 fontWeight:(double)arg2 possibleMaxWidths:(id)arg3 possibleFontSizes:(id)arg4;
- (double)_contentDiameter;
- (id)_createAndAddColoringLabel;
- (void)_editingDidEnd;
- (void)_setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4;
- (void)_setWhistlerAnalogEditingTransitonFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3;
- (void)_transitToHighlightState:(bool)arg1 fraction:(double)arg2;
- (void)_updatePlatterColor;
- (bool)accentedAlternateBackground;
- (id)contentView;
- (id)framingView;
- (id)init;
- (id)initWithFamily:(long long)arg1;
- (void)layoutSubviews;
- (void)makeBackgroundTransparent;
- (id)platterColor;
- (long long)position;
- (void)setAccentedAlternateBackground:(bool)arg1;
- (void)setPlatterColor:(id)arg1;
- (void)setPosition:(long long)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
