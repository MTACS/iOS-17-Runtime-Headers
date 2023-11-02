
@interface SASExpressSettingsPrivacyBundle : PBCodable <NSCopying> {
    unsigned long long  _contentVersion;
    NSString * _identifier;
}

@property (nonatomic) unsigned long long contentVersion;
@property (nonatomic, retain) NSString *identifier;

- (void).cxx_destruct;
- (unsigned long long)contentVersion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContentVersion:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
