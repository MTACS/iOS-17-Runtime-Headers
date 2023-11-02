
@interface PMDeviceSharingAvailability : NSObject {
    void devicesWithSharingAvailable;
    void devicesWithSharingUnavailable;
}

@property (nonatomic, readonly) NSArray *devicesWithSharingAvailable;
@property (nonatomic, readonly) NSArray *devicesWithSharingUnavailable;

- (void).cxx_destruct;
- (id)devicesWithSharingAvailable;
- (id)devicesWithSharingUnavailable;
- (id)init;
- (id)initWithDevicesWithSharingAvailable:(id)arg1 devicesWithSharingUnavailable:(id)arg2;

@end
