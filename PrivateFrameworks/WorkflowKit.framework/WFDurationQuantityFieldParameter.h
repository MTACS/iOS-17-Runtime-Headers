
@interface WFDurationQuantityFieldParameter : WFQuantityFieldParameter

@property (nonatomic) unsigned long long possibleCalendarUnits;

+ (unsigned long long)calendarUnitFromUnitString:(id)arg1;
+ (unsigned long long)possibleCalendarUnitsForUnits:(id)arg1;
+ (id)stateForDuration:(double)arg1 possibleUnits:(id)arg2;
+ (bool)unitStringIsDurationUnit:(id)arg1;

- (void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 prompt:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)defaultSerializedRepresentation;
- (id)initWithDefinition:(id)arg1;
- (bool)isTimePickerParameter;
- (id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3;
- (bool)parameterStateIsValid:(id)arg1;
- (unsigned long long)possibleCalendarUnits;
- (void)setPossibleCalendarUnits:(unsigned long long)arg1;
- (id)stateForDuration:(double)arg1;

@end
