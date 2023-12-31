
@interface SSItemOfferDevice : NSObject {
    long long  _deviceIdentifier;
    SSItemOfferDeviceError * _incompatibleDeviceError;
    SSItemOfferDeviceError * _incompatibleSystemError;
    NSString * _minimumProductVersion;
}

@property (nonatomic, readonly) long long deviceIdentifier;
@property (nonatomic, readonly) SSItemOfferDeviceError *incompatibleDeviceError;
@property (nonatomic, readonly) SSItemOfferDeviceError *incompatibleSystemError;
@property (nonatomic, readonly) NSString *minimumProductVersion;

- (void)dealloc;
- (long long)deviceIdentifier;
- (id)incompatibleDeviceError;
- (id)incompatibleSystemError;
- (id)init;
- (id)initWithDeviceIdentifier:(long long)arg1;
- (id)initWithOfferDeviceDicitionary:(id)arg1;
- (id)minimumProductVersion;

@end
