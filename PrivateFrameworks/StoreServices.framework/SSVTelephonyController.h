
@interface SSVTelephonyController : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientSuppServicesDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    bool  _hasTelephonyCapability;
    bool  _isPhoneNumberAccessRestricted;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSString * _operatorName;
    NSString * _phoneNumber;
    NSString * _registrationStatus;
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
@property (nonatomic, readonly, copy) NSString *operatorName;
@property (nonatomic, readonly, copy) NSString *phoneNumber;
@property (getter=isPhoneNumberAccessRestricted, nonatomic, readonly) bool phoneNumberAccessRestricted;
@property (nonatomic, readonly, copy) NSString *providerName;
@property (nonatomic, readonly, copy) NSString *registrationStatus;
@property (readonly) Class superclass;

+ (bool)_hasRequiredTelephonyEntitlement;
+ (id)sharedController;

- (void).cxx_destruct;
- (id)IMEI;
- (bool)_ensureTelephonyHandlesAreReady;
- (id)_init;
- (id)_operatorName;
- (id)_phoneNumber;
- (id)_registrationStatus;
- (id)_telephonyClient;
- (id)_telephonySubscriptionContext;
- (void)_updateOperatorName;
- (void)_updatePhoneNumber;
- (void)_updateRegistrationStatus;
- (void)activeSubscriptionsDidChange;
- (void)dealloc;
- (void)displayStatusChanged:(id)arg1 status:(id)arg2;
- (bool)isPhoneNumberAccessRestricted;
- (id)mobileSubscriberCountryCode;
- (id)mobileSubscriberNetworkCode;
- (id)operatorName;
- (void)operatorNameChanged:(id)arg1 name:(id)arg2;
- (id)phoneNumber;
- (void)phoneNumberAvailable:(id)arg1;
- (void)phoneNumberChanged:(id)arg1;
- (id)providerName;
- (id)registrationStatus;
- (bool)sendSMSWithText:(id)arg1 toPhoneNumber:(id)arg2 countryCode:(id)arg3 error:(id*)arg4;

@end
