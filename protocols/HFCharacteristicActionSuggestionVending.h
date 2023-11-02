
@protocol HFCharacteristicActionSuggestionVending <NSObject>

@required

- (NSString *)characteristicType;
- (HFCustomCharacteristicActionSuggestionResult *)suggestedActionForCharacteristic:(HMCharacteristic *)arg1 candidateActions:(NSSet *)arg2;

@end
