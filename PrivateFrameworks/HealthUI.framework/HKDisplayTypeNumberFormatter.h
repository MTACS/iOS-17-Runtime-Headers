
@interface HKDisplayTypeNumberFormatter : NSObject <HKNumberFormatter> {
    HKDisplayType * _displayType;
    HKUnitPreferenceController * _unitController;
    HKDisplayTypeValueFormatter * _valueFormatter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithDisplayType:(id)arg1 unitController:(id)arg2;
- (bool)returnsUnitWithValueForDisplay;
- (id)stringFromNumber:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;

@end
