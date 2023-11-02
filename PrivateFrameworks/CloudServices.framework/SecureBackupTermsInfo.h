
@interface SecureBackupTermsInfo : PBCodable <NSCopying> {
    NSString * _altDSID;
    NSString * _countryCode;
    NSString * _icloudVersion;
    NSString * _metadata;
    NSString * _version;
}

@property (nonatomic, retain) NSString *altDSID;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, readonly) bool hasAltDSID;
@property (nonatomic, readonly) bool hasCountryCode;
@property (nonatomic, readonly) bool hasIcloudVersion;
@property (nonatomic, readonly) bool hasMetadata;
@property (nonatomic, readonly) bool hasVersion;
@property (nonatomic, retain) NSString *icloudVersion;
@property (nonatomic, retain) NSString *metadata;
@property (nonatomic, retain) NSString *version;

- (void).cxx_destruct;
- (id)altDSID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAltDSID;
- (bool)hasCountryCode;
- (bool)hasIcloudVersion;
- (bool)hasMetadata;
- (bool)hasVersion;
- (unsigned long long)hash;
- (id)icloudVersion;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (bool)readFrom:(id)arg1;
- (void)setAltDSID:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setIcloudVersion:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;
- (void)writeTo:(id)arg1;

@end
