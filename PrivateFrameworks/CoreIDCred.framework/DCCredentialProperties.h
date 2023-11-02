
@interface DCCredentialProperties : NSObject <NSSecureCoding> {
    NSDate * _createdAt;
    NSString * _credentialIdentifier;
    unsigned long long  _credentialState;
    NSDictionary * _deviceEncryptionKeys;
    bool  _hasUsablePresentmentAuthPolicy;
    NSDictionary * _keySigningKeys;
    bool  _needsPresentmentKeyRefresh;
    DCCredentialOptions * _options;
    NSString * _partition;
    NSData * _payloadIngestionHash;
    NSArray * _payloadProtectionKeys;
    NSDate * _payloadValidFrom;
    NSDate * _payloadValidUntil;
    NSDictionary * _presentmentKeys;
    NSDate * _updatedAt;
}

@property (nonatomic, retain) NSDate *createdAt;
@property (nonatomic, retain) NSString *credentialIdentifier;
@property (nonatomic) unsigned long long credentialState;
@property (nonatomic, retain) NSDictionary *deviceEncryptionKeys;
@property (nonatomic) bool hasUsablePresentmentAuthPolicy;
@property (nonatomic, retain) NSDictionary *keySigningKeys;
@property (nonatomic) bool needsPresentmentKeyRefresh;
@property (nonatomic, retain) DCCredentialOptions *options;
@property (nonatomic, retain) NSString *partition;
@property (nonatomic, retain) NSData *payloadIngestionHash;
@property (nonatomic, retain) NSArray *payloadProtectionKeys;
@property (nonatomic, retain) NSDate *payloadValidFrom;
@property (nonatomic, retain) NSDate *payloadValidUntil;
@property (nonatomic, retain) NSDictionary *presentmentKeys;
@property (nonatomic, retain) NSDate *updatedAt;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)createdAt;
- (id)credentialIdentifier;
- (unsigned long long)credentialState;
- (id)description;
- (id)deviceEncryptionKeys;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasUsablePresentmentAuthPolicy;
- (id)initWithCoder:(id)arg1;
- (id)keySigningKeys;
- (bool)needsPresentmentKeyRefresh;
- (id)options;
- (id)partition;
- (id)payloadIngestionHash;
- (id)payloadProtectionKeys;
- (id)payloadValidFrom;
- (id)payloadValidUntil;
- (id)presentmentKeys;
- (void)setCreatedAt:(id)arg1;
- (void)setCredentialIdentifier:(id)arg1;
- (void)setCredentialState:(unsigned long long)arg1;
- (void)setDeviceEncryptionKeys:(id)arg1;
- (void)setHasUsablePresentmentAuthPolicy:(bool)arg1;
- (void)setKeySigningKeys:(id)arg1;
- (void)setNeedsPresentmentKeyRefresh:(bool)arg1;
- (void)setOptions:(id)arg1;
- (void)setPartition:(id)arg1;
- (void)setPayloadIngestionHash:(id)arg1;
- (void)setPayloadProtectionKeys:(id)arg1;
- (void)setPayloadValidFrom:(id)arg1;
- (void)setPayloadValidUntil:(id)arg1;
- (void)setPresentmentKeys:(id)arg1;
- (void)setUpdatedAt:(id)arg1;
- (id)updatedAt;

@end
