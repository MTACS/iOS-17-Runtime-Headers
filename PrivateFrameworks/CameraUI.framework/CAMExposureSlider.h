
@interface CAMExposureSlider : CEKDiscreteSlider {
    NSNumberFormatter * __decimalFormatter;
    double  __previousHorizontalLabelOffset;
}

@property (nonatomic, readonly) NSNumberFormatter *_decimalFormatter;
@property (nonatomic) double _previousHorizontalLabelOffset;
@property (nonatomic, readonly) double exposureValue;

+ (id)decimalFormatter;
+ (id)exposureValues;

- (void).cxx_destruct;
- (id)_decimalFormatter;
- (unsigned long long)_indexOfClosestValidValueForExposureValue:(double)arg1;
- (double)_previousHorizontalLabelOffset;
- (double)exposureValue;
- (double)horizontalValueLabelOffset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setExposureValueClosestTo:(double)arg1;
- (void)set_previousHorizontalLabelOffset:(double)arg1;
- (void)updateValueLabel;
- (id)valueText;

@end
