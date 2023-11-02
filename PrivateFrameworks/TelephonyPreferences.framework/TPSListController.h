
@interface TPSListController : PSListController {
    CTXPCServiceSubscriptionContext * _subscriptionContext;
    NSOrderedSet * _subscriptions;
}

@property (nonatomic, retain) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (nonatomic, copy) NSOrderedSet *subscriptions;

- (void).cxx_destruct;
- (void)setSpecifier:(id)arg1;
- (void)setSubscriptionContext:(id)arg1;
- (void)setSubscriptions:(id)arg1;
- (id)subscriptionContext;
- (id)subscriptions;

@end
