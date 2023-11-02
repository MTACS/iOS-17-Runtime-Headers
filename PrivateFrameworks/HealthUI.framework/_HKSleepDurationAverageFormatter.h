
@interface _HKSleepDurationAverageFormatter : HKInteractiveChartDataFormatter {
    NSArray * _rangeDataForTimeAsleepAverage;
    NSArray * _rangeDataForTimeInBedAverage;
}

@property (nonatomic, retain) NSArray *rangeDataForTimeAsleepAverage;
@property (nonatomic, retain) NSArray *rangeDataForTimeInBedAverage;

- (void).cxx_destruct;
- (void)_setRangeData:(id)arg1 isTimeInBed:(bool)arg2;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2;
- (id)init;
- (id)rangeDataForTimeAsleepAverage;
- (id)rangeDataForTimeInBedAverage;
- (void)setCurrentVisibleAverageNumber:(id)arg1 isTimeInBed:(bool)arg2 isHighlighted:(bool)arg3 useAverageCopy:(bool)arg4;
- (void)setRangeDataForTimeAsleepAverage:(id)arg1;
- (void)setRangeDataForTimeInBedAverage:(id)arg1;

@end
