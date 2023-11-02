
@interface HKCodableHealthRecordsProvider : PBCodable <NSCopying> {
    NSData * _providerLogo;
    NSString * _providerName;
    NSString * _providerURI;
}

@property (nonatomic, readonly) bool hasProviderLogo;
@property (nonatomic, readonly) bool hasProviderName;
@property (nonatomic, readonly) bool hasProviderURI;
@property (nonatomic, retain) NSData *providerLogo;
@property (nonatomic, retain) NSString *providerName;
@property (nonatomic, retain) NSString *providerURI;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasProviderLogo;
- (bool)hasProviderName;
- (bool)hasProviderURI;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)providerLogo;
- (id)providerName;
- (id)providerURI;
- (bool)readFrom:(id)arg1;
- (void)setProviderLogo:(id)arg1;
- (void)setProviderName:(id)arg1;
- (void)setProviderURI:(id)arg1;
- (void)writeTo:(id)arg1;

@end
