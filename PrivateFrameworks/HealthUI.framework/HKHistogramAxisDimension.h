
@interface HKHistogramAxisDimension : NSObject <HKAxisLabelDimension> {
    <HKHistogramAxisDimensionDataSource> * _dataSource;
}

@property (nonatomic) <HKHistogramAxisDimensionDataSource> *dataSource;

- (void).cxx_destruct;
- (id)dataSource;
- (id)endingLabelsFactorOverride;
- (id)formatterForLabelStepSize:(double)arg1;
- (double)niceStepSizeLargerThan:(double)arg1;
- (void)setDataSource:(id)arg1;
- (id)stringForLocation:(id)arg1 formatterForStepSize:(id)arg2;
- (double)ticksPerStepSize:(double)arg1;

@end
