
@interface CAMLowLightSlider : CEKDiscreteSlider {
    double  __inactiveTickMarkHeight;
    bool  __performingCaptureAnimation;
    double  __remainingCaptureAnimationTime;
    unsigned long long  __selectedIndexBeforeCaptureAnimation;
    NSTimer * __valueLabelUpdateTimer;
    struct { 
        double minimumDuration; 
        double maximumDuration; 
    }  _durationMapping;
    bool  _lowLightActive;
}

@property (nonatomic, readonly) double _inactiveTickMarkHeight;
@property (getter=_isPerformingCaptureAnimation, setter=_setPerformingCaptureAnimation:, nonatomic) bool _performingCaptureAnimation;
@property (setter=_setRemainingCaptureAnimationTime:, nonatomic) double _remainingCaptureAnimationTime;
@property (setter=_setSelectedIndexBeforeCaptureAnimation:, nonatomic) unsigned long long _selectedIndexBeforeCaptureAnimation;
@property (setter=_setValueLabelUpdateTimer:, nonatomic, retain) NSTimer *_valueLabelUpdateTimer;
@property (nonatomic) struct { double x1; double x2; } durationMapping;
@property (getter=isLowLightActive, nonatomic) bool lowLightActive;
@property (nonatomic) unsigned long long lowLightMode;

- (void).cxx_destruct;
- (void)_handleValueLabelUpdateTimerWithStartTime:(double)arg1 duration:(double)arg2;
- (double)_inactiveTickMarkHeight;
- (bool)_isPerformingCaptureAnimation;
- (double)_remainingCaptureAnimationTime;
- (unsigned long long)_selectedIndexBeforeCaptureAnimation;
- (void)_setPerformingCaptureAnimation:(bool)arg1;
- (void)_setRemainingCaptureAnimationTime:(double)arg1;
- (void)_setSelectedIndexBeforeCaptureAnimation:(unsigned long long)arg1;
- (void)_setValueLabelUpdateTimer:(id)arg1;
- (void)_startValueLabelUpdateTimerWithDuration:(double)arg1;
- (void)_stopValueLabelUpdateTimer;
- (id)_valueLabelUpdateTimer;
- (id)_valueTextForDuration:(double)arg1;
- (id)_valueTextForDuration:(double)arg1 format:(id)arg2;
- (void)dealloc;
- (struct { double x1; double x2; })durationMapping;
- (void)endCaptureAnimationAnimated:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isLowLightActive;
- (unsigned long long)lowLightMode;
- (void)performCaptureAnimationWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)setDurationMapping:(struct { double x1; double x2; })arg1;
- (void)setLowLightActive:(bool)arg1;
- (void)setLowLightMode:(unsigned long long)arg1;
- (id)valueText;

@end
