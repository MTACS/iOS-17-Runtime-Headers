
@interface HKChartAxisDimensionUsingTable : NSObject <HKAxisLabelDimension> {
    HKDisplayType * _displayType;
    struct HKStepSizeTableEntryDefn { double x1; double x2; } * _stepSizeTable;
    long long  _stepSizeTableSize;
    HKUnitPreferenceController * _unitController;
}

@property (readonly) HKDisplayType *displayType;
@property (readonly) struct HKStepSizeTableEntryDefn { double x1; double x2; }*stepSizeTable;
@property (readonly) long long stepSizeTableSize;
@property (readonly) HKUnitPreferenceController *unitController;

- (void).cxx_destruct;
- (struct HKStepSizeTableEntryDefn { double x1; double x2; }*)_findStepSize:(double)arg1 allowEqual:(bool)arg2;
- (id)displayType;
- (id)endingLabelsFactorOverride;
- (id)formatterForLabelStepSize:(double)arg1;
- (id)initWithStepSizeTable:(struct HKStepSizeTableEntryDefn { double x1; double x2; }*)arg1 stepSizeTableSize:(long long)arg2 displayType:(id)arg3 unitController:(id)arg4;
- (double)niceStepSizeLargerThan:(double)arg1;
- (struct HKStepSizeTableEntryDefn { double x1; double x2; }*)stepSizeTable;
- (long long)stepSizeTableSize;
- (id)stringForLocation:(id)arg1 formatterForStepSize:(id)arg2;
- (double)ticksPerStepSize:(double)arg1;
- (id)unitController;

@end
