
@interface ASDSubscriptionEntitlement : NSObject <NSSecureCoding> {
    NSDictionary * _dictionary;
    bool  _hasFamily;
    unsigned long long  _segment;
}

@property (readonly, copy) NSNumber *appAdamID;
@property (readonly, copy) NSNumber *appVersion;
@property (readonly) bool autoRenewEnabled;
@property (readonly, copy) NSString *chargeCountryCode;
@property (readonly, copy) NSString *chargeCurrencyCode;
@property (readonly, copy) NSNumber *chargeStoreFrontID;
@property (readonly, copy) NSString *entitlementOriginType;
@property (readonly, copy) NSNumber *entitlementSourceAdamID;
@property (readonly, copy) NSDate *expiryDate;
@property (readonly, copy) NSString *externalSubscriptionID;
@property (readonly, copy) NSNumber *familyID;
@property (readonly, copy) NSNumber *familyRank;
@property (readonly, copy) NSNumber *featureAccessTypeID;
@property (readonly, copy) NSNumber *freeTrialPeriodID;
@property (readonly) bool hasFamily;
@property (readonly, copy) NSNumber *inAppAdamID;
@property (readonly, copy) NSString *inAppVersion;
@property (readonly, copy) NSNumber *initialPurchaseTimestamp;
@property (readonly) bool isInGracePeriod;
@property (readonly) bool isOfferPeriod;
@property (readonly) bool isPurchaser;
@property (readonly) bool isTrialPeriod;
@property (getter=isNewsAppPurchase, readonly) bool newsAppPurchase;
@property (readonly, copy) NSString *offerID;
@property (readonly, copy) NSNumber *originalPurchaseDownloadID;
@property (readonly, copy) NSString *poolType;
@property (readonly, copy) NSString *productCode;
@property (readonly, copy) NSNumber *promoScenarioID;
@property (readonly, copy) NSNumber *purchasabilityType;
@property (readonly, copy) NSNumber *purchaseDownloadID;
@property (readonly, copy) NSNumber *quantity;
@property (readonly) unsigned long long segment;
@property (readonly, copy) NSNumber *serviceBeginsTimestamp;
@property (readonly, copy) NSDate *startDate;
@property (readonly, copy) NSNumber *subscriptionBundleID;
@property (readonly, copy) NSString *vendorAdHocOfferID;
@property (readonly, copy) NSString *vendorID;

// Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appAdamID;
- (id)appVersion;
- (bool)autoRenewEnabled;
- (id)chargeCountryCode;
- (id)chargeCurrencyCode;
- (id)chargeStoreFrontID;
- (void)encodeWithCoder:(id)arg1;
- (id)entitlementOriginType;
- (id)entitlementSourceAdamID;
- (id)expiryDate;
- (id)externalSubscriptionID;
- (id)familyID;
- (id)familyRank;
- (id)featureAccessTypeID;
- (id)freeTrialPeriodID;
- (bool)hasFamily;
- (id)inAppAdamID;
- (id)inAppVersion;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 forAppAdamID:(id)arg2 segment:(unsigned long long)arg3 hasFamily:(bool)arg4;
- (id)initialPurchaseTimestamp;
- (bool)isInGracePeriod;
- (bool)isNewsAppPurchase;
- (bool)isOfferPeriod;
- (bool)isPurchaser;
- (bool)isTrialPeriod;
- (id)offerID;
- (id)originalPurchaseDownloadID;
- (id)poolType;
- (id)productCode;
- (id)promoScenarioID;
- (id)purchasabilityType;
- (id)purchaseDownloadID;
- (id)quantity;
- (unsigned long long)segment;
- (id)serviceBeginsTimestamp;
- (id)startDate;
- (id)subscriptionBundleID;
- (id)vendorAdHocOfferID;
- (id)vendorID;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (id)description;
- (id)servicesBundlePurchaseID;

@end
