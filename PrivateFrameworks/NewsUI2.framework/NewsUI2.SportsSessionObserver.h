
@interface NewsUI2.SportsSessionObserver : NSObject <FCBundleSubscriptionChangeObserver, FCSubscriptionObserving, FCUserInfoObserving> {
    void client;
    void cloudContext;
    void commandCenter;
    void sessionManager;
    void subscriptionController;
    void syncTracker;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidChange:(id)arg1 previousBundleSubscription:(id)arg2;
- (void)bundleSubscriptionDidExpire:(id)arg1;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (id)init;
- (void)pushUserSubscriptionContextData;
- (void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6;
- (void)userInfoDidChangeSportsUserID:(id)arg1;

@end
