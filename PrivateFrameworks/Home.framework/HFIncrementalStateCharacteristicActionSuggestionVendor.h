
@interface HFIncrementalStateCharacteristicActionSuggestionVendor : NSObject <HFCharacteristicActionSuggestionVending> {
    NSString * _characteristicType;
}

@property (nonatomic, readonly, copy) NSString *characteristicType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)characteristicType;
- (id)initWithCharacteristicType:(id)arg1;
- (id)suggestedActionForCharacteristic:(id)arg1 candidateActions:(id)arg2;

@end
