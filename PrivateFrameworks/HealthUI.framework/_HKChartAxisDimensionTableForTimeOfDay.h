
@interface _HKChartAxisDimensionTableForTimeOfDay : HKChartAxisDimensionUsingTable {
    HKTimeSinceStartOfDayNumberFormatter * _numberFormatter;
}

@property (nonatomic, readonly) HKTimeSinceStartOfDayNumberFormatter *numberFormatter;

- (void).cxx_destruct;
- (id)endingLabelsFactorOverride;
- (id)initWithStepSizeTable:(struct HKStepSizeTableEntryDefn { double x1; double x2; }*)arg1 stepSizeTableSize:(long long)arg2 displayType:(id)arg3 unitController:(id)arg4;
- (id)numberFormatter;
- (id)stringForLocation:(id)arg1 formatterForStepSize:(id)arg2;

@end
