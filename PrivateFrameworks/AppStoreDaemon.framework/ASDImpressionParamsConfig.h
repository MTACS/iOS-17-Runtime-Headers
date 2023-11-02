
@interface ASDImpressionParamsConfig : NSObject <NSSecureCoding> {
    NSString * _adNetworkId;
    NSNumber * _appAdamId;
    NSString * _attributionSignature;
    NSNumber * _campaignId;
    NSNumber * _fidelityType;
    NSString * _impressionId;
    NSString * _processName;
    NSNumber * _sourceAppAdamId;
    NSString * _sourceAppBundleId;
    NSNumber * _sourceIdentifier;
    NSNumber * _timestamp;
    NSString * _version;
}

@property (nonatomic, retain) NSString *adNetworkId;
@property (nonatomic, retain) NSNumber *appAdamId;
@property (nonatomic, retain) NSString *attributionSignature;
@property (nonatomic, retain) NSNumber *campaignId;
@property (nonatomic, retain) NSNumber *fidelityType;
@property (nonatomic, retain) NSString *impressionId;
@property (nonatomic, retain) NSString *processName;
@property (nonatomic, retain) NSNumber *sourceAppAdamId;
@property (nonatomic, retain) NSString *sourceAppBundleId;
@property (nonatomic, retain) NSNumber *sourceIdentifier;
@property (nonatomic, retain) NSNumber *timestamp;
@property (nonatomic, retain) NSString *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)adNetworkId;
- (id)appAdamId;
- (id)attributionSignature;
- (id)campaignId;
- (void)encodeWithCoder:(id)arg1;
- (id)fidelityType;
- (id)impressionId;
- (id)initWithCoder:(id)arg1;
- (id)processName;
- (void)setAdNetworkId:(id)arg1;
- (void)setAppAdamId:(id)arg1;
- (void)setAttributionSignature:(id)arg1;
- (void)setCampaignId:(id)arg1;
- (void)setFidelityType:(id)arg1;
- (void)setImpressionId:(id)arg1;
- (void)setProcessName:(id)arg1;
- (void)setSourceAppAdamId:(id)arg1;
- (void)setSourceAppBundleId:(id)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)sourceAppAdamId;
- (id)sourceAppBundleId;
- (id)sourceIdentifier;
- (id)timestamp;
- (id)version;

@end
