
@interface HKInteractiveChartBaselineRelativeData : HKInteractiveChartSinglePointData {
    NSNumber * _relativeValueState;
}

@property (nonatomic) NSNumber *relativeValueState;

- (id)description;
- (id)init;
- (id)relativeValueState;
- (void)setRelativeValueState:(id)arg1;

@end
