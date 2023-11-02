
@interface HDOTAFeatureDisableAndExpiryProvider : NSObject <HDFeatureDisableAndExpiryProviding, HDOTAFeatureAvailabilityObserver> {
    HDOTAFeatureAvailabilityManager * _OTAFeatureAvailabilityManager;
    <HDFeatureDisableAndExpiryProvidingDelegate> * _delegate;
    NSObject<OS_os_log> * _loggingCategory;
    <HDPairedDeviceCapabilityProviding> * _nanoRegistryDeviceCapabilityProvider;
    NSString * _remoteDisableCondition;
    NSString * _seedExpirationCondition;
}

@property (nonatomic) <HDFeatureDisableAndExpiryProvidingDelegate> *delegate;

- (void).cxx_destruct;
- (void)OTAFeatureAvailabilityManagerDidUpdateFeatureAvailabilityInfo:(id)arg1;
- (id)delegate;
- (id)description;
- (id)initWithDaemon:(id)arg1 featureIdentifier:(id)arg2;
- (id)initWithDaemon:(id)arg1 remoteDisableCondition:(id)arg2 seedExpirationCondition:(id)arg3;
- (id)rescindedStatusForCountryCode:(id)arg1 device:(id)arg2 error:(id*)arg3;
- (id)rescindedStatusOnActivePairedDeviceForCountryCode:(id)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;

@end
