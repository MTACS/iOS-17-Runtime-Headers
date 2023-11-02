
@interface NewsUI2.NotificationService : NSObject <AMSUserNotificationAuthorizationDelegate> {
    void authorizationOptions;
    void metricsProvider;
    void networkReachability;
    void warmingSheetPresenter;
}

- (void).cxx_destruct;
- (void)handleEngagementRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)init;

@end
