
@interface SKAdImpression : NSObject {
    NSNumber * _adCampaignIdentifier;
    NSString * _adDescription;
    NSString * _adImpressionIdentifier;
    NSString * _adNetworkIdentifier;
    NSString * _adPurchaserName;
    NSString * _adType;
    NSNumber * _advertisedAppStoreItemIdentifier;
    NSString * _signature;
    NSNumber * _sourceAppStoreItemIdentifier;
    NSNumber * _sourceIdentifier;
    NSNumber * _timestamp;
    NSString * _version;
}

@property (nonatomic, retain) NSNumber *adCampaignIdentifier;
@property (nonatomic, retain) NSString *adDescription;
@property (nonatomic, retain) NSString *adImpressionIdentifier;
@property (nonatomic, retain) NSString *adNetworkIdentifier;
@property (nonatomic, retain) NSString *adPurchaserName;
@property (nonatomic, retain) NSString *adType;
@property (nonatomic, retain) NSNumber *advertisedAppStoreItemIdentifier;
@property (nonatomic, retain) NSString *signature;
@property (nonatomic, retain) NSNumber *sourceAppStoreItemIdentifier;
@property (nonatomic, retain) NSNumber *sourceIdentifier;
@property (nonatomic, retain) NSNumber *timestamp;
@property (nonatomic, retain) NSString *version;

- (void).cxx_destruct;
- (id)adCampaignIdentifier;
- (id)adDescription;
- (id)adImpressionIdentifier;
- (id)adNetworkIdentifier;
- (id)adPurchaserName;
- (id)adType;
- (id)advertisedAppStoreItemIdentifier;
- (id)initWithSourceAppStoreItemIdentifier:(id)arg1 advertisedAppStoreItemIdentifier:(id)arg2 adNetworkIdentifier:(id)arg3 adCampaignIdentifier:(id)arg4 adImpressionIdentifier:(id)arg5 timestamp:(id)arg6 signature:(id)arg7 version:(id)arg8;
- (void)setAdCampaignIdentifier:(id)arg1;
- (void)setAdDescription:(id)arg1;
- (void)setAdImpressionIdentifier:(id)arg1;
- (void)setAdNetworkIdentifier:(id)arg1;
- (void)setAdPurchaserName:(id)arg1;
- (void)setAdType:(id)arg1;
- (void)setAdvertisedAppStoreItemIdentifier:(id)arg1;
- (void)setSignature:(id)arg1;
- (void)setSourceAppStoreItemIdentifier:(id)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)signature;
- (id)sourceAppStoreItemIdentifier;
- (id)sourceIdentifier;
- (id)timestamp;
- (id)version;

@end
