
@interface PCCarrierBundleHelper : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDataDelegate> {
    CTBundle * _bundle;
    NSDictionary * _cachedPushSettings;
    CoreTelephonyClient * _ctClient;
    CTXPCServiceSubscriptionContext * _currentDataContext;
    NSHashTable * _delegates;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) NSDictionary *cachedPushSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)helper;

- (void).cxx_destruct;
- (void)_processCarrierBundleChange:(id)arg1;
- (void)_updateCurrentDataSimContext:(id)arg1;
- (void)addDelegate:(id)arg1;
- (bool)boolValueFromPushBundleForKey:(id)arg1 error:(id*)arg2;
- (id)cachedPushSettings;
- (id)copyValueForKey:(id)arg1 error:(id*)arg2;
- (id)copyValueFromPushBundleForKey:(id)arg1 error:(id*)arg2;
- (void)currentDataSimChanged:(id)arg1;
- (id)init;
- (void)operatorBundleChange:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)setCachedPushSettings:(id)arg1;

@end
