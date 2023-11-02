
@interface STKCarrierSubscriptionMonitor : NSObject <CoreTelephonyClientCarrierBundleDelegate> {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _subscriptionContext;
    NSMutableDictionary * _subscriptionInfo;
    CoreTelephonyClient * _telephonyClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)carrierBundleChange:(id)arg1;
- (id)init;
- (unsigned long long)numAvailableSubscriptions;
- (id)subscriptionContextForSlot:(long long)arg1;
- (void)subscriptionInfoDidChange;
- (id)subscriptionInfoForSlot:(long long)arg1;

@end
