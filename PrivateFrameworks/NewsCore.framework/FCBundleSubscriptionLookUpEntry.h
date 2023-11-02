
@interface FCBundleSubscriptionLookUpEntry : NSObject {
    NSArray * _bundleChannelIDs;
    NSString * _bundleChannelIDsVersion;
    NSDate * _dateOfExpiration;
    bool  _hasShownRenewalNotice;
    NSString * _identifier;
    bool  _inTrialPeriod;
    NSNumber * _initialPurchaseTimestamp;
    bool  _isAmplifyUser;
    bool  _isPaidBundleViaOfferActivated;
    bool  _isPurchaser;
    NSString * _purchaseID;
    unsigned long long  _purchaseValidationState;
    NSString * _servicesBundlePurchaseID;
}

@property (nonatomic, copy) NSArray *bundleChannelIDs;
@property (nonatomic, copy) NSString *bundleChannelIDsVersion;
@property (nonatomic, copy) NSDate *dateOfExpiration;
@property (nonatomic) bool hasShownRenewalNotice;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool inTrialPeriod;
@property (nonatomic, copy) NSNumber *initialPurchaseTimestamp;
@property (nonatomic) bool isAmplifyUser;
@property (nonatomic) bool isPaidBundleViaOfferActivated;
@property (nonatomic) bool isPurchaser;
@property (nonatomic, copy) NSString *purchaseID;
@property (nonatomic) unsigned long long purchaseValidationState;
@property (nonatomic, copy) NSString *servicesBundlePurchaseID;

- (void).cxx_destruct;
- (id)bundleChannelIDs;
- (id)bundleChannelIDsVersion;
- (id)bundleSubscription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateOfExpiration;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasShownRenewalNotice;
- (id)identifier;
- (bool)inTrialPeriod;
- (id)initWithEntryID:(id)arg1 bundleChannelIDs:(id)arg2 bundleChannelIDsVersion:(id)arg3 purchaseID:(id)arg4 purchaseValidationState:(unsigned long long)arg5 dateOfExpiration:(id)arg6 hasShownRenewalNotice:(bool)arg7 inTrialPeriod:(bool)arg8 isPurchaser:(bool)arg9 servicesBundlePurchaseID:(id)arg10 isAmplifyUser:(bool)arg11 isPaidBundleViaOfferActivated:(bool)arg12 initialPurchaseTimestamp:(id)arg13;
- (id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2;
- (id)initialPurchaseTimestamp;
- (bool)isAmplifyUser;
- (bool)isPaidBundleViaOfferActivated;
- (bool)isPurchaser;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)purchaseID;
- (unsigned long long)purchaseValidationState;
- (id)servicesBundlePurchaseID;
- (void)setBundleChannelIDs:(id)arg1;
- (void)setBundleChannelIDsVersion:(id)arg1;
- (void)setDateOfExpiration:(id)arg1;
- (void)setHasShownRenewalNotice:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInTrialPeriod:(bool)arg1;
- (void)setInitialPurchaseTimestamp:(id)arg1;
- (void)setIsAmplifyUser:(bool)arg1;
- (void)setIsPaidBundleViaOfferActivated:(bool)arg1;
- (void)setIsPurchaser:(bool)arg1;
- (void)setPurchaseID:(id)arg1;
- (void)setPurchaseValidationState:(unsigned long long)arg1;
- (void)setServicesBundlePurchaseID:(id)arg1;

@end
