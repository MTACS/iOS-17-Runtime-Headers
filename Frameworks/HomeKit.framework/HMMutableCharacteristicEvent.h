
@interface HMMutableCharacteristicEvent : HMCharacteristicEvent

@property (nonatomic, retain) HMCharacteristic *characteristic;
@property (nonatomic, copy) <NSCopying> *triggerValue;

@end
