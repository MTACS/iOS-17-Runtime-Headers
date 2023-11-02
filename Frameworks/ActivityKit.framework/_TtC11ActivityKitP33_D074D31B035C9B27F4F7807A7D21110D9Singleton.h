
@interface _TtC11ActivityKitP33_D074D31B035C9B27F4F7807A7D21110D9Singleton : NSObject <ACActivityFrequentUpdatesObservationXPCClient> {
    void activities;
    void activityDiffPublisher;
    void connection;
    void queue;
    void serverStartupToken;
}

- (void).cxx_destruct;
- (void)activityDidExceedReducedPushBudgetForIdentifier:(id)arg1;
- (void)activityDidUnsubscribeForIdentifier:(id)arg1;
- (id)init;

@end
