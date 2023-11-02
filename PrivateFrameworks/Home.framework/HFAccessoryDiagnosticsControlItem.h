
@interface HFAccessoryDiagnosticsControlItem : HFControlItem

+ (Class)valueClass;

- (id)characteristicValuesForValue:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 displayResults:(id)arg2;
- (id)resultsForBatchReadResponse:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;

@end
