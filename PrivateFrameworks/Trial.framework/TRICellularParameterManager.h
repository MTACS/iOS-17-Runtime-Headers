
@interface TRICellularParameterManager : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDataDelegate, CoreTelephonyClientSubscriberDelegate> {
    NSString * _carrierBundleIdentifier;
    NSString * _carrierCountryIsoCode;
    _PASLock * _lock;
    CTXPCServiceSubscriptionContext * _subscriptionContext;
    CoreTelephonyClient * _telephonyClient;
}

@property (nonatomic, retain) NSString *carrierBundleIdentifier;
@property (nonatomic, retain) NSString *carrierCountryIsoCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_dispatchQueueForCarrierInfoGathering;
- (id)_fetchCarrierBundleIdentifier:(id)arg1;
- (id)_fetchCarrierCountryIsoCode:(id)arg1;
- (void)_updateSystemInfo;
- (void)carrierBundleChange:(id)arg1;
- (id)carrierBundleIdentifier;
- (id)carrierCountryIsoCode;
- (id)init;
- (void)preferredDataSimChanged:(id)arg1;
- (void)setCarrierBundleIdentifier:(id)arg1;
- (void)setCarrierCountryIsoCode:(id)arg1;
- (void)subscriberCountryCodeDidChange:(id)arg1;

@end
