
@interface TPSBundleController : PSBundleController {
    NSArray * _specifiers;
    CTXPCServiceSubscriptionContext * _subscriptionContext;
    bool  _supportsDisabledSubscriptions;
    TPSTelephonyController * _telephonyController;
}

@property (getter=isHidden, nonatomic, readonly) bool hidden;
@property (nonatomic, readonly) PSListController *parentListController;
@property (nonatomic, copy) NSArray *specifiers;
@property (nonatomic, retain) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (getter=isSubscriptionListHidden, nonatomic, readonly) bool subscriptionListHidden;
@property (nonatomic, readonly, copy) NSOrderedSet *subscriptions;
@property (nonatomic, readonly, copy) NSOrderedSet *supportedSubscriptions;
@property (nonatomic, readonly) bool supportsDisabledSubscriptions;
@property (nonatomic, readonly) TPSTelephonyController *telephonyController;

- (void).cxx_destruct;
- (id)initWithParentListController:(id)arg1;
- (bool)isHidden;
- (bool)isSubscriptionListHidden;
- (id)parentListController;
- (void)setSpecifiers:(id)arg1;
- (void)setSubscriptionContext:(id)arg1;
- (id)specifiers;
- (id)specifiersWithSpecifier:(id)arg1;
- (id)subscriptionContext;
- (id)subscriptionContextForSpecifier:(id)arg1;
- (id)subscriptions;
- (id)supportedSubscriptions;
- (bool)supportsDisabledSubscriptions;
- (id)telephonyController;
- (void)telephonyController:(id)arg1 didChangeActiveSubscriptions:(id)arg2;
- (void)telephonyController:(id)arg1 didChangeSubscriptions:(id)arg2;

@end
