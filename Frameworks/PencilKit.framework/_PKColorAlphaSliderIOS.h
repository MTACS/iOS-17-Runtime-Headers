
@interface _PKColorAlphaSliderIOS : UIView <_PKColorAlphaSlider> {
    _PKCheckerGridView * _alphaGridView;
    CAGradientLayer * _alphaGridViewMaskLayer;
    UIColor * _color;
    long long  _colorUserInterfaceStyle;
    UIView * _colorView;
    CAGradientLayer * _colorViewMaskLayer;
    double  _maxAlpha;
    double  _minAlpha;
    _PKSliderKnobView * _sliderKnobView;
    <_PKColorAlphaSliderDelegate> * delegate;
}

@property (nonatomic, retain) _PKCheckerGridView *alphaGridView;
@property (nonatomic, retain) CAGradientLayer *alphaGridViewMaskLayer;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (nonatomic, retain) UIView *colorView;
@property (nonatomic, retain) CAGradientLayer *colorViewMaskLayer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_PKColorAlphaSliderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maxAlpha;
@property (nonatomic) double minAlpha;
@property (nonatomic, retain) _PKSliderKnobView *sliderKnobView;
@property (readonly) Class superclass;

+ (void)_layoutGradientMaskLayer:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 isReversed:(bool)arg3;
+ (double)_outputForResistanceFunction:(double)arg1 factor:(double)arg2;
+ (id)rgbaColorFromColorIfPossible:(id)arg1;

- (void).cxx_destruct;
- (void)_colorViewTapGestureHandler:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_knobViewFrameForColorAlpha:(double)arg1;
- (void)_setColorNoLayout:(id)arg1;
- (double)_sliderKnobViewWidth;
- (long long)_uiColorUserInterfaceStyle;
- (id)alphaGridView;
- (id)alphaGridViewMaskLayer;
- (id)color;
- (double)colorAlphaForSliderKnobXPosition:(double)arg1;
- (long long)colorUserInterfaceStyle;
- (id)colorView;
- (id)colorViewMaskLayer;
- (id)delegate;
- (void)didPanSliderKnob:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)maxAlpha;
- (double)minAlpha;
- (void)setAlphaGridView:(id)arg1;
- (void)setAlphaGridViewMaskLayer:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setColor:(id)arg1 animated:(bool)arg2;
- (void)setColorUserInterfaceStyle:(long long)arg1;
- (void)setColorView:(id)arg1;
- (void)setColorViewMaskLayer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaxAlpha:(double)arg1;
- (void)setMinAlpha:(double)arg1;
- (void)setSliderKnobView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)sliderKnobView;
- (double)sliderKnobXPositionForColorAlpha:(double)arg1;

@end
