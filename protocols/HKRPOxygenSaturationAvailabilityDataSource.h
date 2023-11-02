
@protocol HKRPOxygenSaturationAvailabilityDataSource <NSObject>

@required

- (bool)deviceIsSupported;
- (bool)skipHardwareCheck;

@end
