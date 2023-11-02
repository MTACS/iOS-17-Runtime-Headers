
@interface HDFeatureNeverDisabledOrExpiredProvider : NSObject <HDFeatureDisableAndExpiryProviding> {
    <HDFeatureDisableAndExpiryProvidingDelegate> * _delegate;
}

@property (nonatomic) <HDFeatureDisableAndExpiryProvidingDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (id)rescindedStatusForCountryCode:(id)arg1 device:(id)arg2 error:(id*)arg3;
- (id)rescindedStatusOnActivePairedDeviceForCountryCode:(id)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;

@end
