
@interface CTXPCServiceSubscriptionInfo : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _subscriptions;
    NSArray * _subscriptionsInUse;
    NSArray * _subscriptionsValid;
}

@property (nonatomic, retain) NSArray *subscriptions;
@property (nonatomic, retain) NSArray *subscriptionsInUse;
@property (nonatomic, retain) NSArray *subscriptionsValid;
@property (nonatomic, readonly, copy) NSOrderedSet *tps_activeSubscriptionSet;
@property (nonatomic, readonly, copy) NSOrderedSet *tps_subscriptionSet;

// Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)redactedDescription;
- (void)setSubscriptions:(id)arg1;
- (void)setSubscriptionsInUse:(id)arg1;
- (void)setSubscriptionsValid:(id)arg1;
- (id)subscriptions;
- (id)subscriptionsInUse;
- (id)subscriptionsValid;

// Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences

- (id)tps_activeSubscriptionSet;
- (id)tps_subscriptionSet;

@end
