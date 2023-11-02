
@interface FCBundleSubscription : NSObject <NSCopying, NSSecureCoding> {
    NSOrderedSet * _bundleChannelIDs;
    NSString * _bundleChannelIDsVersion;
    NSString * _bundlePurchaseID;
    NSNumber * _initialPurchaseTimestamp;
    bool  _isAmplifyUser;
    bool  _isPaidBundleViaOfferActivated;
    bool  _isPurchaser;
    NSString * _servicesBundlePurchaseID;
    unsigned long long  _unprotectedSubscriptionState;
}

@property (nonatomic, copy) NSOrderedSet *bundleChannelIDs;
@property (nonatomic, copy) NSString *bundleChannelIDsVersion;
@property (nonatomic, copy) NSString *bundlePurchaseID;
@property (nonatomic, copy) NSNumber *initialPurchaseTimestamp;
@property (nonatomic) bool isAmplifyUser;
@property (nonatomic) bool isPaidBundleViaOfferActivated;
@property (nonatomic) bool isPurchaser;
@property (nonatomic, readonly) bool isServicesBundleUser;
@property (nonatomic, readonly) bool isSubscribed;
@property (nonatomic, copy) NSString *servicesBundlePurchaseID;
@property (nonatomic, readonly) unsigned long long subscriptionState;
@property (nonatomic) unsigned long long unprotectedSubscriptionState;

+ (id)subscriptionWithSubscriptionState:(unsigned long long)arg1 bundleChannelIDs:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleChannelIDs;
- (id)bundleChannelIDsVersion;
- (id)bundlePurchaseID;
- (bool)containsHeadline:(id)arg1;
- (bool)containsItem:(id)arg1;
- (bool)containsTagID:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundlePurchaseID:(id)arg1 bundleChannelIDs:(id)arg2 bundleChannelIDsVersion:(id)arg3 inTrialPeriod:(bool)arg4 isPurchaser:(bool)arg5 servicesBundlePurchaseID:(id)arg6 isAmplifyUser:(bool)arg7 initialPurchaseTimestamp:(id)arg8 isPaidBundleViaOfferActivated:(bool)arg9;
- (id)initWithBundlePurchaseID:(id)arg1 bundleChannelIDs:(id)arg2 bundleChannelIDsVersion:(id)arg3 subscriptionState:(unsigned long long)arg4 isPurchaser:(bool)arg5 servicesBundlePurchaseID:(id)arg6 isAmplifyUser:(bool)arg7 initialPurchaseTimestamp:(id)arg8 isPaidBundleViaOfferActivated:(bool)arg9;
- (id)initWithCoder:(id)arg1;
- (id)initialPurchaseTimestamp;
- (bool)isAmplifyUser;
- (bool)isEqual:(id)arg1;
- (bool)isPaidBundleViaOfferActivated;
- (bool)isPurchaser;
- (bool)isServicesBundleUser;
- (bool)isSubscribed;
- (id)servicesBundlePurchaseID;
- (void)setBundleChannelIDs:(id)arg1;
- (void)setBundleChannelIDsVersion:(id)arg1;
- (void)setBundlePurchaseID:(id)arg1;
- (void)setInitialPurchaseTimestamp:(id)arg1;
- (void)setIsAmplifyUser:(bool)arg1;
- (void)setIsPaidBundleViaOfferActivated:(bool)arg1;
- (void)setIsPurchaser:(bool)arg1;
- (void)setServicesBundlePurchaseID:(id)arg1;
- (void)setUnprotectedSubscriptionState:(unsigned long long)arg1;
- (unsigned long long)subscriptionState;
- (unsigned long long)unprotectedSubscriptionState;

@end
