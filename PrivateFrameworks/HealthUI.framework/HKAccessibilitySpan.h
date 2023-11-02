
@interface HKAccessibilitySpan : NSObject {
    NSNumber * _dataComprehensionMaxYValue;
    NSNumber * _dataComprehensionMinYValue;
    NSString * _dataComprehensionUnitForChart;
    NSString * _dataSeriesTitle;
    long long  _dataSeriesType;
}

@property (nonatomic, readonly) NSNumber *dataComprehensionMaxYValue;
@property (nonatomic, readonly) NSNumber *dataComprehensionMinYValue;
@property (nonatomic, readonly) NSString *dataComprehensionUnitForChart;
@property (nonatomic, readonly) NSString *dataSeriesTitle;
@property (nonatomic, readonly) long long dataSeriesType;

- (void).cxx_destruct;
- (id)dataComprehensionMaxYValue;
- (id)dataComprehensionMinYValue;
- (id)dataComprehensionUnitForChart;
- (id)dataSeriesTitle;
- (long long)dataSeriesType;
- (id)description;
- (id)initWithTitle:(id)arg1 seriesType:(long long)arg2 dataComprehensionMinYValue:(id)arg3 dataComprehensionMaxYValue:(id)arg4 dataComprehensionUnitForChart:(id)arg5;

@end
