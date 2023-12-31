
@interface HFValveActiveStateControlItem : HFPowerStateControlItem

- (id)_faucetValveSubtypeToIconIdentifierMap;
- (id)_iconDescriptorForServiceSubtype:(id)arg1 inUse:(bool)arg2 active:(bool)arg3 hasFaucetAsParentService:(bool)arg4;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 auxiliaryTargetValueTuples:(id)arg2 additionalCharacteristicOptions:(id)arg3 displayResults:(id)arg4;
- (id)initWithValueSource:(id)arg1 displayResults:(id)arg2;
- (id)resultsForBatchReadResponse:(id)arg1;
- (id)servicePredicateForCharacteristicType:(id)arg1 withUsage:(unsigned long long)arg2;
- (id)writeValue:(id)arg1;

@end
