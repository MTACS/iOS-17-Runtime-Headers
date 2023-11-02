
@interface FTSelectedPNRSubscription : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientSuppServicesDelegate> {
    FTSelectedPNRSubscriptionCache * _cache;
    CoreTelephonyClient * _coreTelephonyClient;
    bool  _isCacheValid;
    NSRecursiveLock * _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isPhoneNumber:(id)arg1 equivalentToExistingPhoneNumber:(id)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_distributed_invalidateCache;
- (bool)_doesSubscriptionInfoContainMultipleLabels:(id)arg1;
- (bool)_doesSubscriptionInfoContainMultipleUniqueLabels:(id)arg1;
- (id)_firstPresentSubscriptionFromAvailableSubscriptions:(id)arg1;
- (bool)_isIdentityFallbackProhibitedForDeviceBasedOnCapability:(long long)arg1 subscriptionInfo:(id)arg2;
- (bool)_isInDualPhoneIdentityModeBasedOnCapability:(long long)arg1;
- (bool)_legacy_isPhoneNumberEmergencyNumber:(id)arg1;
- (void)_protected_invalidateCache;
- (id)_protected_reevaluateCacheIfNeededAndPersistUpdate:(bool)arg1;
- (id)_reevaluateCachedActiveSubscriptionWithError:(id*)arg1;
- (id)_reevaluateCachedSelectedPhoneNumberRegistrationWithSubscription:(id)arg1 activeContexts:(id)arg2 fallbackProhibited:(bool)arg3 persistUpdate:(bool)arg4 error:(id*)arg5;
- (id)_reevaluateCachedSelectedPhoneNumberWithContext:(id)arg1 error:(id*)arg2;
- (id)_reevaluateCachedSubscriptionWithError:(id*)arg1;
- (void)_reevaluateDualIdentityModeWithSubscriptionInfo:(id)arg1;
- (id)_subscriptionFromAvailableSubscriptions:(id)arg1 matchingSelectedLabel:(id)arg2;
- (void)activeSubscriptionsDidChange;
- (void)dealloc;
- (void)dualSimCapabilityDidChange;
- (id)init;
- (void)invalidateCache;
- (bool)isDeviceInDualPhoneIdentityMode;
- (bool)isPhoneNumberEmergencyNumber:(id)arg1;
- (bool)isSelectedPhoneNumberRegistrationSubscriptionContext:(id)arg1;
- (void)persistSelectedPhoneNumberRegistrationSubscriptionIfNeeded;
- (void)phoneNumberAvailable:(id)arg1;
- (void)phoneNumberChanged:(id)arg1;
- (id)selectedPhoneNumberRegistrationSubscriptionWithError:(id*)arg1;
- (id)selectedRegistrationPhoneNumberWithError:(id*)arg1;
- (id)setSelectedPhoneNumberRegistrationSubscriptionNumber:(id)arg1;
- (void)subscriptionInfoDidChange;

@end
