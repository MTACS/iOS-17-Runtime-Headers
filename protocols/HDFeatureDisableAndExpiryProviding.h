
@protocol HDFeatureDisableAndExpiryProviding

@required

- (<HDFeatureDisableAndExpiryProvidingDelegate> *)delegate;
- (NSNumber *)rescindedStatusForCountryCode:(NSString *)arg1 device:(NRDevice *)arg2 error:(id*)arg3;
- (NSNumber *)rescindedStatusOnActivePairedDeviceForCountryCode:(NSString *)arg1 error:(id*)arg2;
- (void)setDelegate:(id <HDFeatureDisableAndExpiryProvidingDelegate>)arg1;

@end
