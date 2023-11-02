
@interface HKInteractiveChartAFibBurdenData : HKInteractiveChartSinglePointData {
    bool  _clampsLowerData;
}

@property (nonatomic) bool clampsLowerData;

- (bool)clampsLowerData;
- (id)description;
- (id)init;
- (void)setClampsLowerData:(bool)arg1;

@end
