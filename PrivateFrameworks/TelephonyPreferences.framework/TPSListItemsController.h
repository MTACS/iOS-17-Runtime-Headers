
@interface TPSListItemsController : PSListItemsController {
    CTXPCServiceSubscriptionContext * _subscriptionContext;
}

@property (nonatomic, retain) CTXPCServiceSubscriptionContext *subscriptionContext;

- (void).cxx_destruct;
- (void)setSpecifier:(id)arg1;
- (void)setSubscriptionContext:(id)arg1;
- (id)subscriptionContext;

@end
