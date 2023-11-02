
@interface SessionPushNotifications.PushServer : NSObject {
    void _eventPublisher;
    void _subscriptionExceedingReducedBudgetPublisher;
    void _tokenPublisher;
    void _unsubscribedActivityPublisher;
    void apsQueue;
    void budgetEnforcementPolicyProvider;
    void budgetEnforcementPolicyProviderSubscription;
    void calloutQueue;
    void connectionFactory;
    void connections;
    void nextBudgetTimeoutExpirationWake;
    void publicTokenStore;
    void queue;
    void subscriptionStore;
    void taskScheduler;
    void tokenStore;
    void topicsByPriority;
}

- (void).cxx_destruct;
- (id)init;

@end
