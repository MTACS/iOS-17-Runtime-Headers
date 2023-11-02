
@interface HKHandwashingGoalFormatter : NSObject <HKNumberFormatter> {
    HKDisplayType * _displayType;
    HKUnitPreferenceController * _unitPreferenceController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HKDisplayType *displayType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) HKUnitPreferenceController *unitPreferenceController;

- (void).cxx_destruct;
- (id)displayType;
- (id)initWithDisplayType:(id)arg1 unitPreferenceController:(id)arg2;
- (bool)returnsUnitWithValueForDisplay;
- (void)setDisplayType:(id)arg1;
- (void)setUnitPreferenceController:(id)arg1;
- (id)stringFromNumber:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;
- (id)unitPreferenceController;

@end
