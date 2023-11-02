
@interface CEKApertureSlider : CEKDiscreteSlider <UIScrollViewDelegate> {
    NSNumberFormatter * __decimalFormatter;
    unsigned long long  __maximumApertureIndex;
    unsigned long long  __minimumApertureIndex;
    NSNumberFormatter * __wholeNumberFormatter;
    bool  _includesOffState;
}

@property (nonatomic, readonly) NSNumberFormatter *_decimalFormatter;
@property (setter=_setMaximumApertureIndex:, nonatomic) unsigned long long _maximumApertureIndex;
@property (setter=_setMinimumApertureIndex:, nonatomic) unsigned long long _minimumApertureIndex;
@property (nonatomic, readonly) NSNumberFormatter *_wholeNumberFormatter;
@property (nonatomic, readonly) double apertureValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includesOffState;
@property (nonatomic, readonly) double markedApertureValue;
@property (nonatomic, readonly) double maximumApertureValue;
@property (nonatomic, readonly) double minimumApertureValue;
@property (getter=isSliderOn, nonatomic) bool sliderOn;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_decimalFormatter;
- (unsigned long long)_discreteIndexForValidApertureIndex:(unsigned long long)arg1;
- (unsigned long long)_maximumApertureIndex;
- (unsigned long long)_minimumApertureIndex;
- (void)_setMaximumApertureIndex:(unsigned long long)arg1;
- (void)_setMinimumApertureIndex:(unsigned long long)arg1;
- (void)_updateIndexCount;
- (void)_updateMainTickMarkOffset;
- (unsigned long long)_validApertureIndexForDiscreteIndex:(unsigned long long)arg1;
- (id)_wholeNumberFormatter;
- (double)apertureValue;
- (double)horizontalValueLabelOffset;
- (bool)includesOffState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSliderOn;
- (double)markedApertureValue;
- (double)maximumApertureValue;
- (double)minimumApertureValue;
- (void)setApertureValueClosestTo:(double)arg1;
- (void)setIncludesOffState:(bool)arg1;
- (void)setMarkedApertureValueClosestTo:(double)arg1;
- (void)setMarkedApertureValueToNone;
- (void)setMinimumApertureValueClosestTo:(double)arg1 maximumApertureValueClosestTo:(double)arg2;
- (void)setSliderOn:(bool)arg1;
- (id)valueText;

@end
