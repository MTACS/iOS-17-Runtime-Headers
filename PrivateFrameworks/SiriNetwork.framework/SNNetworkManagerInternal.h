
@interface SNNetworkManagerInternal : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDataDelegate, CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientSubscriberDelegate> {
    void carrierName;
    void coreTelephonyClient;
    void dataServiceDescriptor;
    void lastDataSubscriptionSlot;
    void lastFetchInProgress;
    void lastSignalStrength;
    void lastSuccessfulSymptomsFetch;
    void lock;
    void networkWiFiManager;
    void networkWirelessCoexManager;
    void observers;
    void pathEvaluator;
    void pathStatus;
    void pathUsesCellular;
    void queue;
    void subscriptionCount;
    void subscriptionSlotOneStatus;
    void subscriptionSlotTwoStatus;
}

+ (void)acquireDormancySuspendAssertion:(id*)arg1;
+ (void)releaseDormancySuspendAssertion:(id*)arg1;
+ (id)shared;

- (void).cxx_destruct;
- (void)acquireWiFiAssertionWithWifiAssertionTypeRawValue:(long long)arg1;
- (void)addObserver:(id)arg1;
- (void)carrierBundleChange:(id)arg1;
- (void)dealloc;
- (void)forceFastDormancy;
- (void)getSNLinkRecommendationMetrics:(id /* block */)arg1;
- (void)getSNProximityLinkRecommendationWithRetry:(bool)arg1 completion:(id /* block */)arg2;
- (void)getSNSubscribeLinkRecommendation:(id /* block */)arg1;
- (id)init;
- (void)preferredDataSimChanged:(id)arg1;
- (void)registerClient;
- (void)releaseWiFiAssertion;
- (void)removeObserver:(id)arg1;
- (void)signalStrengthChanged:(id)arg1 info:(id)arg2;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (void)startMonitoringNetwork:(id)arg1;
- (void)stopMonitoringNetwork;
- (void)unregisterClient;

@end
