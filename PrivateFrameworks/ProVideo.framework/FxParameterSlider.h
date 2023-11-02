
@interface FxParameterSlider : FxPinParameter {
    struct FxParameterSliderPriv { double x1; double x2; double x3; double x4; double x5; bool x6; } * _sliderPriv;
}

- (void)dealloc;
- (id)init;
- (bool)isLogarithmic;
- (double)maxSliderValue;
- (double)maxValue;
- (double)minSliderValue;
- (double)minValue;
- (void)setIsLogarithmic:(bool)arg1;
- (void)setMaxSliderValue:(double)arg1;
- (void)setMaxValue:(double)arg1;
- (void)setMinSliderValue:(double)arg1;
- (void)setMinValue:(double)arg1;
- (void)setStepValue:(double)arg1;
- (double)stepValue;

@end
