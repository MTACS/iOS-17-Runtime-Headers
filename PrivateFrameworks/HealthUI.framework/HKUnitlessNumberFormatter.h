
@interface HKUnitlessNumberFormatter : NSObject <HKNumberFormatter> {
    HKDisplayType * _displayType;
    bool  _forceUnitlessForAllTypes;
    HKUnitPreferenceController * _unitPreferenceController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HKDisplayType *displayType;
@property (nonatomic) bool forceUnitlessForAllTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HKUnitPreferenceController *unitPreferenceController;

- (void).cxx_destruct;
- (id)displayType;
- (bool)forceUnitlessForAllTypes;
- (id)initWithDisplayType:(id)arg1 unitPreferenceController:(id)arg2;
- (id)initWithDisplayType:(id)arg1 unitPreferenceController:(id)arg2 forceUnitlessForAllTypes:(bool)arg3;
- (bool)returnsUnitWithValueForDisplay;
- (void)setForceUnitlessForAllTypes:(bool)arg1;
- (id)stringFromNumber:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;
- (id)unitPreferenceController;

@end
