
@protocol HMDResidentAppleMediaStateManagerDataSource <NSObject>

@required

- (HMDAppleMediaAccessory *)accessoryForMediaProfileUniqueIdentifier:(NSUUID *)arg1;
- (HMDMediaProfile *)mediaProfileForUniqueIdentifier:(NSUUID *)arg1;
- (NSArray *)propertiesRegisteredForMediaProfileUniqueIdentifier:(NSUUID *)arg1;
- (HMFTimer *)timerWithTimerInterval:(double)arg1;

@end
