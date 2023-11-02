
@interface AVMobileChromelessSlider : UIControl <UIPointerInteractionDelegate> {
    double  _barHeight;
    UIView * _contentView;
    <AVMobileChromelessSliderDelegate> * _delegate;
    UIVisualEffect * _disabledFilledBarViewEffect;
    UIVisualEffect * _disabledUnfilledBarViewEffect;
    UIVisualEffect * _enabledFilledBarViewEffect;
    UIVisualEffect * _enabledUnfilledBarViewEffect;
    UIVisualEffectView * _filledBarView;
    float  _maximumValue;
    float  _minimumValue;
    NSMutableArray * _sliderMarkViews;
    NSArray * _sliderMarks;
    UIPointerInteraction * _sliderPointerInteraction;
    unsigned long long  _tintState;
    float  _totalValue;
    float  _trackingStartNormalizedValue;
    float  _trackingTouchStartNormalizedX;
    UIVisualEffectView * _unfilledBarView;
    float  _value;
}

@property (nonatomic) double barHeight;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVMobileChromelessSliderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) float maximumValue;
@property (nonatomic) float minimumValue;
@property (nonatomic, retain) NSArray *sliderMarks;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long tintState;
@property (nonatomic) float totalValue;
@property (nonatomic) float value;

- (void).cxx_destruct;
- (void)_updateAccessibilityValue;
- (void)_updateBarTintStateAlpha;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (double)barHeight;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)delegate;
- (void)didMoveToWindow;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForSliderMark:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitRect;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (float)maximumValue;
- (float)minimumValue;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)setBarHeight:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setMaximumValue:(float)arg1;
- (void)setMinimumValue:(float)arg1;
- (void)setSliderMarks:(id)arg1;
- (void)setTintState:(unsigned long long)arg1;
- (void)setTotalValue:(float)arg1;
- (void)setValue:(float)arg1;
- (id)sliderMarks;
- (unsigned long long)tintState;
- (float)totalValue;
- (float)value;

@end
