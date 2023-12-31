
@interface HFFaucetActiveStateControlItem : HFPowerStateControlItem {
    unsigned long long  _valveControlMode;
}

@property (nonatomic, readonly) unsigned long long valveControlMode;

+ (id)na_identity;

- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 auxiliaryTargetValueTuples:(id)arg2 additionalCharacteristicOptions:(id)arg3 displayResults:(id)arg4;
- (id)initWithValueSource:(id)arg1 valveControlMode:(unsigned long long)arg2 displayResults:(id)arg3;
- (id)resultsForBatchReadResponse:(id)arg1;
- (id)servicePredicateForCharacteristicType:(id)arg1 withUsage:(unsigned long long)arg2;
- (unsigned long long)valveControlMode;

@end
