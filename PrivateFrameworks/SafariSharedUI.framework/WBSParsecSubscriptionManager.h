
@interface WBSParsecSubscriptionManager : NSObject {
    bool  _needsUpdate;
    NSMutableDictionary * _subscriptionsByProvider;
    PSSSSubscriptionManagerInternal * _thirdPartySubscriptionManager;
}

@property (nonatomic, readonly) bool needsUpdate;
@property (nonatomic, readonly) NSArray *subscriptionDictionaries;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_init;
- (void)_updateThirdPartySubscriptionsWithBundleIdentifierWhitelist:(id)arg1 domainWhitelist:(id)arg2 maximumExpirationLimit:(double)arg3;
- (id)init;
- (bool)needsUpdate;
- (void)registerSubscriptionServiceForURL:(id)arg1 withSubscriptionInfo:(id)arg2;
- (void)removeSubscriptionsAddedAfterDate:(id)arg1;
- (id)subscriptionDictionaries;
- (void)updateSubscriptionsWithBundleIdentifierWhitelist:(id)arg1 domainWhitelist:(id)arg2 maximumExpirationLimit:(double)arg3;

@end
