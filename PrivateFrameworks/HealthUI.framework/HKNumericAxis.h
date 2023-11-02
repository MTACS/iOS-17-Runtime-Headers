
@interface HKNumericAxis : HKAxis {
    double  _bottomVerticalLabelPadding;
    <HKAxisLabelDimension> * _labelDimension;
    double  _topVerticalLabelPadding;
}

@property (nonatomic, readonly) double bottomVerticalLabelPadding;
@property (nonatomic, readonly) <HKAxisLabelDimension> *labelDimension;
@property (nonatomic, readonly) double topVerticalLabelPadding;

+ (double)_adjustRangeDownWithStartValue:(double)arg1 endValue:(double)arg2 factor:(double)arg3;
+ (double)_adjustRangeUpWithStartValue:(double)arg1 endValue:(double)arg2 factor:(double)arg3;
+ (double)_roundDownByMultiple:(double)arg1 factor:(double)arg2;
+ (double)_roundUpByMultiple:(double)arg1 factor:(double)arg2;
+ (id)preferredAxisStyle;
+ (id)standardNumericYAxisWithConfigurationOverrides:(id)arg1;
+ (id)ticksAndLabelsForRangeInModelCoordinates:(id)arg1 maximumLabelCount:(long long)arg2 endingOptions:(long long)arg3 dimension:(id)arg4;

- (void).cxx_destruct;
- (id)adjustValueRangeForLabels:(id)arg1;
- (id)adjustedRangeForFittedRange:(id)arg1 chartRange:(struct HKRange { double x1; double x2; })arg2;
- (double)bottomVerticalLabelPadding;
- (id)cacheKeysForModelRange:(id)arg1 zoomScale:(double)arg2;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)labelDimension;
- (double)labelSpacingFactorForNumberFormatter;
- (double)offsetForLegendView;
- (id)stringFromNumber:(id)arg1;
- (double)topVerticalLabelPadding;

@end
