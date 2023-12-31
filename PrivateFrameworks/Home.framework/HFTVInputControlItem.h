
@interface HFTVInputControlItem : HFControlItem {
    NSArray * _inputs;
}

@property (nonatomic, readonly, copy) NSArray *inputs;

+ (id /* block */)_inputSourceValueComparatorForTelevisionProfile:(id)arg1;
+ (id)inputCharacteristicTypes;
+ (id)readOnlyOptionalInputCharacteristicTypes;
+ (Class)valueClass;

- (void).cxx_destruct;
- (id)characteristicValuesForValue:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 displayResults:(id)arg2;
- (id)inputs;
- (id)readValueAndPopulateStandardResults;
- (bool)supportsItemRepresentingServices:(id)arg1;
- (id)valueForCharacteristicType:(id)arg1 inBatchReadResponse:(id)arg2;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)writeValue:(id)arg1;

@end
