
@interface _MFCoreTelephonySubscriptionChangeListener : NSObject <CoreTelephonyClientCarrierBundleDelegate> {
    CoreTelephonyClient * _client;
    NSObject<OS_dispatch_queue> * _telephonyQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)carrierBundleChange:(id)arg1;
- (id)init;

@end
