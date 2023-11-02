
@interface HUElasticSliderValueNormalizer : NSObject {
    struct { 
        double minimum; 
        double maximum; 
    }  _currentValueRange;
    bool  _hasSecondaryValue;
    HFNumberValueConstraints * _maxValueConstraints;
    HFNumberValueConstraints * _minValueConstraints;
    HUElasticSliderValueNormalizationOptions * _options;
}

@property (nonatomic) struct { double x1; double x2; } currentValueRange;
@property (nonatomic) bool hasSecondaryValue;
@property (nonatomic, retain) HFNumberValueConstraints *maxValueConstraints;
@property (nonatomic, retain) HFNumberValueConstraints *minValueConstraints;
@property (nonatomic, retain) HUElasticSliderValueNormalizationOptions *options;

- (void).cxx_destruct;
- (id)_effectiveConstraintsForValueOfType:(unsigned long long)arg1 boundRange:(bool)arg2;
- (id)_originalConstraintsForValueType:(unsigned long long)arg1;
- (double)_rubberBandValue:(double)arg1 ofType:(unsigned long long)arg2;
- (struct { double x1; double x2; })currentValueRange;
- (bool)hasSecondaryValue;
- (id)initWithCurrentValueRange:(struct { double x1; double x2; })arg1 hasSecondaryValue:(bool)arg2;
- (id)maxValueConstraints;
- (id)minValueConstraints;
- (struct { double x1; double x2; })normalizeRange:(struct { double x1; double x2; })arg1;
- (double)normalizeValue:(double)arg1 ofType:(unsigned long long)arg2;
- (id)options;
- (void)setCurrentValueRange:(struct { double x1; double x2; })arg1;
- (void)setHasSecondaryValue:(bool)arg1;
- (void)setMaxValueConstraints:(id)arg1;
- (void)setMinValueConstraints:(id)arg1;
- (void)setOptions:(id)arg1;

@end
