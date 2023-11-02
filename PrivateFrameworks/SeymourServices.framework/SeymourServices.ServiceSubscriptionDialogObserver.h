
@interface SeymourServices.ServiceSubscriptionDialogObserver : NSObject <ASDNotificationCenterDialogObserver> {
    void dataSource;
}

- (void).cxx_destruct;
- (void)handleAuthenticateRequest:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)handleDialogRequest:(id)arg1 resultHandler:(id /* block */)arg2;
- (id)init;

@end
