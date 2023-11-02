
@interface AVMobileChromelessFluidSlider : UISlider <UIPointerInteractionDelegate, _UISliderFluidInteractionDelegate> {
    double  _barHeight;
    double  _barWidth;
    UIView * _contentView;
    <AVMobileChromelessFluidSliderDelegate> * _delegate;
    UIBlurEffect * _disabledFilledBarViewEffect;
    UIBlurEffect * _disabledUnfilledBarViewEffect;
    UIBlurEffect * _enabledFilledBarViewEffect;
    UIBlurEffect * _enabledUnfilledBarViewEffect;
    _UISliderFluidConfiguration * _fluidSliderConfiguration;
    bool  _prefersSliderTrackVisualsDisabled;
    NSMutableArray * _sliderMarkViews;
    NSArray * _sliderMarks;
    UIPointerInteraction * _sliderPointerInteraction;
    double  _stretchLimit;
    unsigned long long  _tintState;
    float  _totalValue;
    float  _trackingStartNormalizedValue;
    float  _trackingTouchStartNormalizedX;
    bool  _usesVolumeStyle;
}

@property (nonatomic) double barHeight;
@property (nonatomic) double barWidth;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVMobileChromelessFluidSliderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool prefersSliderTrackVisualsDisabled;
@property (nonatomic, retain) NSArray *sliderMarks;
@property (nonatomic) double stretchLimit;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long tintState;
@property (nonatomic) float totalValue;
@property (nonatomic) bool usesVolumeStyle;

- (void).cxx_destruct;
- (void)_sliderFluidInteractionWillBegin:(id)arg1 withLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_sliderFluidInteractionWillContinue:(id)arg1 withLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_sliderFluidInteractionWillEnd:(id)arg1;
- (void)_sliderFluidInteractionWillExtend:(id)arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (double)barHeight;
- (double)barWidth;
- (id)delegate;
- (void)didMoveToWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForSliderMark:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitRect;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (bool)prefersSliderTrackVisualsDisabled;
- (void)setBarHeight:(double)arg1;
- (void)setBarWidth:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setMaximumValueView:(id)arg1;
- (void)setPrefersSliderTrackVisualsDisabled:(bool)arg1;
- (void)setSliderMarks:(id)arg1;
- (void)setStretchLimit:(double)arg1;
- (void)setTintState:(unsigned long long)arg1;
- (void)setTotalValue:(float)arg1;
- (void)setUsesVolumeStyle:(bool)arg1;
- (id)sliderMarks;
- (double)stretchLimit;
- (unsigned long long)tintState;
- (float)totalValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trackRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)usesVolumeStyle;

@end
