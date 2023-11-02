
@interface APInstallAttribution : NSObject <NSSecureCoding> {
    NSString * _adNetworkId;
    unsigned long long  _adamId;
    NSString * _attributionSignature;
    unsigned long long  _campaignId;
    NSUUID * _contextIdentifier;
    unsigned long long  _sourceAppAdamId;
    unsigned long long  _timestamp;
    NSString * _version;
}

@property (nonatomic, retain) NSString *adNetworkId;
@property (nonatomic) unsigned long long adamId;
@property (nonatomic, retain) NSString *attributionSignature;
@property (nonatomic) unsigned long long campaignId;
@property (nonatomic, retain) NSUUID *contextIdentifier;
@property (nonatomic) unsigned long long sourceAppAdamId;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSString *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)adNetworkId;
- (unsigned long long)adamId;
- (id)attributionSignature;
- (unsigned long long)campaignId;
- (id)contextIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAdNetworkId:(id)arg1;
- (void)setAdamId:(unsigned long long)arg1;
- (void)setAttributionSignature:(id)arg1;
- (void)setCampaignId:(unsigned long long)arg1;
- (void)setContextIdentifier:(id)arg1;
- (void)setSourceAppAdamId:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setVersion:(id)arg1;
- (unsigned long long)sourceAppAdamId;
- (unsigned long long)timestamp;
- (id)version;

@end
