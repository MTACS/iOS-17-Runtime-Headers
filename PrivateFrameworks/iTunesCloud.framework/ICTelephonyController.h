
@interface ICTelephonyController : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientSuppServicesDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSString * _phoneNumber;
    NSObject<OS_dispatch_queue> * _telephonyCallbackQueue;
    CoreTelephonyClient * _telephonyClient;
    CTXPCServiceSubscriptionContext * _telephonySubscriptionContext;
}

@property (nonatomic, readonly, copy) NSString *IMEI;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *mobileSubscriberCountryCode;
@property (nonatomic, readonly, copy) NSString *mobileSubscriberNetworkCode;
@property (nonatomic, readonly, copy) NSString *phoneNumber;
@property (nonatomic, readonly, copy) NSString *providerName;
@property (readonly) Class superclass;

+ (id)sharedController;

- (void).cxx_destruct;
- (id)IMEI;
- (bool)_ensureTelephonyHandlesAreReady;
- (void)_handleActiveSubscriptionsDidChange;
- (id)_init;
- (id)_telephonyClient;
- (id)_telephonySubscriptionContext;
- (void)_updatePhoneNumberAllowingDidChangeNotification:(bool)arg1;
- (void)activeSubscriptionsDidChange;
- (void)dealloc;
- (id)mobileSubscriberCountryCode;
- (id)mobileSubscriberNetworkCode;
- (id)phoneNumber;
- (void)phoneNumberAvailable:(id)arg1;
- (void)phoneNumberChanged:(id)arg1;
- (id)providerName;
- (bool)sendSMSWithText:(id)arg1 toPhoneNumber:(id)arg2 error:(id*)arg3;

@end
