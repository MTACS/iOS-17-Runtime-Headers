
@protocol HFCharacteristicValueReader <NSObject>

@required

- (HMHome *)hf_home;
- (void)performBatchCharacteristicRequest:(HMCharacteristicBatchRequest *)arg1;

@end
