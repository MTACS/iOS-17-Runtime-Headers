
@interface WLKSubscriptionData : NSObject <NSSecureCoding> {
    NSDictionary * _account;
    long long  _activeSubscriptionsCount;
    NSDictionary * _activeTVPlusSubscription;
    NSDictionary * _backingDictionary;
    NSDictionary * _family;
    NSArray * _subscriptionArray;
    NSDictionary * _subscriptionsByAdamID;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)activeSubscriptionsCount;
- (id)activeTVPlusSubscription;
- (id)currentAccount;
- (id)currentFamily;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSubscriptionData:(id)arg1;
- (bool)isTVPlusSubscriber;
- (id)subscriptionByAdamID:(id)arg1;
- (id)subscriptions;

@end
