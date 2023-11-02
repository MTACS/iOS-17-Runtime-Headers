
@interface CHRAnalyticsManager : NSObject {
    void conceptStore;
    void healthStore;
    void managerQueue;
    void optInDetermined;
    void queuedEvents;
}

+ (id)shared;

- (void).cxx_destruct;
- (id)init;
- (void)postOnboardingFunnelEventWithStep:(long long)arg1 context:(long long)arg2 gatewayUrl:(id)arg3;
- (void)postPrivacyInteractionEventWithType:(long long)arg1 context:(long long)arg2 action:(bool)arg3;
- (void)postUserInteractionEventWithType:(long long)arg1 context:(long long)arg2 action:(long long)arg3 category:(id)arg4 conceptIdentifier:(id)arg5;
- (void)submitAndFlushQueuedEvents;

@end
