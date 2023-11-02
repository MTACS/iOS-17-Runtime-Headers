
@interface HKAxisLabelDimensionRelativeTemperature : HKAxisLabelDimensionScalar {
    HKDisplayType * _displayType;
    HKUnitPreferenceController * _unitController;
    HKQuantityDisplayTypeValueFormatter * _valueFormatter;
}

@property (nonatomic, retain) HKDisplayType *displayType;
@property (nonatomic, retain) HKUnitPreferenceController *unitController;
@property (nonatomic, retain) HKQuantityDisplayTypeValueFormatter *valueFormatter;

- (void).cxx_destruct;
- (id)displayType;
- (id)initWithDisplayType:(id)arg1 unitPreferencesController:(id)arg2;
- (void)setDisplayType:(id)arg1;
- (void)setUnitController:(id)arg1;
- (void)setValueFormatter:(id)arg1;
- (id)stringForLocation:(id)arg1 formatterForStepSize:(id)arg2;
- (id)unitController;
- (id)valueFormatter;

@end
