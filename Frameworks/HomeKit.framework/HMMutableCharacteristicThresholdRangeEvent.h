
@interface HMMutableCharacteristicThresholdRangeEvent : HMCharacteristicThresholdRangeEvent

@property (nonatomic, retain) HMCharacteristic *characteristic;
@property (nonatomic, copy) HMNumberRange *thresholdRange;

@end
