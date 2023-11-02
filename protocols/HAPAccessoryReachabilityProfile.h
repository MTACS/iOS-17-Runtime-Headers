
@protocol HAPAccessoryReachabilityProfile <NSObject, NSCopying>

@required

- (HAPCharacteristic *)pollCharacteristic;
- (void)setSleepInterval:(double)arg1;
- (double)sleepInterval;
- (HAPCharacteristic *)sleepIntervalCharacteristic;

@end
