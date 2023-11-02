
@interface PKPaymentMarket : NSObject <NSSecureCoding> {
    long long  _classification;
    NSSet * _expressCredentialTypes;
    NSSet * _expressTransitNetworks;
    unsigned long long  _expressUpgradeHideDisableAction;
    double  _expressUpgradePromoteDuration;
    NSSet * _geoFences;
    NSString * _identifier;
    NSDictionary * _localizedNames;
    NSString * _notificationAssetIdentifier;
    bool  _productsRequiredForRegion;
    NSString * _region;
    NSDictionary * _renotifyCampaigns;
    bool  _shouldConsiderCellularRegion;
    NSSet * _supportedCredentialTypes;
    NSSet * _supportedTransitNetworks;
    long long  _type;
}

@property (readonly) long long classification;
@property (readonly, copy) NSSet *expressCredentialTypes;
@property (readonly, copy) NSSet *expressTransitNetworks;
@property (readonly) unsigned long long expressUpgradeHideDisableAction;
@property (readonly) double expressUpgradePromoteDuration;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *notificationAssetIdentifier;
@property (readonly) bool productsRequiredForRegion;
@property (readonly, copy) NSString *region;
@property (readonly, copy) NSString *renotifyDCICampaignIdentifier;
@property (readonly, copy) NSString *renotifyOpenLoopCampaignIdentifier;
@property (readonly) bool shouldConsiderCellularRegion;
@property (readonly, copy) NSSet *supportedCredentialTypes;
@property (readonly, copy) NSSet *supportedTransitNetworks;
@property (readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_geoFenceWithDictionary:(id)arg1;
- (id)analyticsReportingNameValue;
- (long long)classification;
- (bool)containsLocation:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)englishName;
- (id)expressCredentialTypes;
- (id)expressTransitNetworks;
- (unsigned long long)expressUpgradeHideDisableAction;
- (double)expressUpgradePromoteDuration;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 forDeviceClass:(id)arg2 version:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)notificationAssetIdentifier;
- (bool)productsRequiredForRegion;
- (id)region;
- (id)renotifyDCICampaignIdentifier;
- (id)renotifyOpenLoopCampaignIdentifier;
- (double)shortestDistanceFromLocation:(id)arg1;
- (bool)shouldConsiderCellularRegion;
- (id)supportedCredentialTypes;
- (id)supportedTransitNetworks;
- (long long)type;

@end
