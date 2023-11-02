
@interface HKCoreTelephonyClient : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientProvisioningDelegate, CoreTelephonyClientRegistrationDelegate> {
    NSString * _cachedCountryCode;
    CTStewieSupport * _cachedStewieSupport;
    CoreTelephonyClient * _client;
    <HKCoreTelephonyClientDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKCoreTelephonyClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activeSubscriptionsDidChange;
- (void)dealloc;
- (id)delegate;
- (void)fetchMobileCountryCodeFromCellularWithCompletion:(id /* block */)arg1;
- (void)fetchStewieSupportedWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)invalidateCachedCountryCode;
- (void)onForeground:(id)arg1;
- (void)plmnChanged:(id)arg1 plmn:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)simLessSubscriptionsDidChange;
- (void)stewieSupportChanged;
- (void)subscriptionInfoDidChange;

@end
