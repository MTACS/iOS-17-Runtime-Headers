
@interface HFMultiStateControlItem : HFControlItem {
    NSString * _multiStateCharacteristicType;
    HFMultiStateValueSet * _possibleValueSet;
}

@property (nonatomic, readonly, copy) NSString *multiStateCharacteristicType;
@property (nonatomic, readonly, copy) HFMultiStateValueSet *possibleValueSet;

+ (id)na_identity;
+ (Class)valueClass;

- (void).cxx_destruct;
- (id)characteristicValuesForValue:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 possibleValueSet:(id)arg3 displayResults:(id)arg4;
- (id)initWithValueSource:(id)arg1 multiStateCharacteristicType:(id)arg2 allCharacteristicOptions:(id)arg3 possibleValueSet:(id)arg4 displayResults:(id)arg5;
- (id)multiStateCharacteristicType;
- (id)possibleValueSet;
- (id)valueForCharacteristicValues:(id)arg1;

@end
