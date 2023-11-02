
@interface HFPrimaryStateCharacteristicActionSuggestionVendor : NSObject <HFCharacteristicActionSuggestionVending> {
    unsigned long long  _bucketingPolicy;
    NSString * _characteristicType;
    id  _normalStateValue;
}

@property (nonatomic, readonly) unsigned long long bucketingPolicy;
@property (nonatomic, readonly, copy) NSString *characteristicType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id normalStateValue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_bucketingValueForAction:(id)arg1;
- (unsigned long long)bucketingPolicy;
- (id)characteristicType;
- (id)initWithCharacteristicType:(id)arg1 normalStateValue:(id)arg2;
- (id)initWithCharacteristicType:(id)arg1 normalStateValue:(id)arg2 bucketingPolicy:(unsigned long long)arg3;
- (id)normalStateValue;
- (id)suggestedActionForCharacteristic:(id)arg1 candidateActions:(id)arg2;

@end
