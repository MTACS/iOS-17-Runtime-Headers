
@interface HRECharacteristicActionVarianceRule : HREActionVariance {
    NSString * _characteristicType;
}

@property (nonatomic, readonly) NSString *characteristicType;

+ (id)anyVarianceRuleForCharacteristicType:(id)arg1;
+ (id)varianceKeyForCharacteristicType:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithType:(id)arg1;
- (id)characteristicType;
- (bool)passesForAction:(id)arg1;

@end
