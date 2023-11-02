
@interface AMSUIWebJSTelephony : NSObject <AMSUIWebJSTelephonyProtocol> {
    <AMSUIWebJSTelephonyDelegate> * _delegate;
    CoreTelephonyClient * _telephonyClient;
    CTXPCServiceSubscriptionContext * _telephonyContext;
    NSObject<OS_dispatch_queue> * _telephonyQueue;
    bool  _telephonySetupFailed;
}

@property (nonatomic, readonly) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AMSUIWebJSTelephonyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *networkCode;
@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) NSString *providerName;
@property (nonatomic, readonly) NSString *radioTechnology;
@property (nonatomic, readonly) NSString *radioType;
@property (readonly) Class superclass;
@property (nonatomic, retain) CoreTelephonyClient *telephonyClient;
@property (nonatomic, retain) CTXPCServiceSubscriptionContext *telephonyContext;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *telephonyQueue;
@property (nonatomic) bool telephonySetupFailed;

+ (bool)_hasCellularTelephonyCapability;
+ (bool)_hasRequiredTelephonyEntitlement;

- (void).cxx_destruct;
- (id)countryCode;
- (void)dealloc;
- (id)delegate;
- (id)formattedPhoneNumber:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)invalidate;
- (id)networkCode;
- (void)operatorNameChanged:(id)arg1 name:(id)arg2;
- (id)phoneNumber;
- (void)phoneNumberAvailable:(id)arg1;
- (void)phoneNumberChanged:(id)arg1;
- (id)providerName;
- (id)radioTechnology;
- (id)radioType;
- (void)setDelegate:(id)arg1;
- (void)setTelephonyClient:(id)arg1;
- (void)setTelephonyContext:(id)arg1;
- (void)setTelephonyQueue:(id)arg1;
- (void)setTelephonySetupFailed:(bool)arg1;
- (id)telephonyClient;
- (id)telephonyContext;
- (id)telephonyQueue;
- (bool)telephonySetupFailed;

@end
