
@interface HFCharacteristicCondition : HFCondition {
    HMCharacteristic * _characteristic;
    unsigned long long  _operatorType;
    id  _value;
}

@property (nonatomic, readonly) HMCharacteristic *characteristic;
@property (nonatomic, readonly) unsigned long long operatorType;
@property (nonatomic, readonly) id value;

+ (id)_characteristicPredicateInCompoundPredicate:(id)arg1;
+ (id)_valuePredicateInCompoundPredicate:(id)arg1;

- (void).cxx_destruct;
- (id)_nameFormattingContext:(long long)arg1;
- (id)characteristic;
- (id)hf_naturalLanguageSummaryWithOptions:(id)arg1;
- (id)initWithCharacteristic:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3;
- (id)initWithPredicate:(id)arg1;
- (unsigned long long)operatorType;
- (id)value;

@end
