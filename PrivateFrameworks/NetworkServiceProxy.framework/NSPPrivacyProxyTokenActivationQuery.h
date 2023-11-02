
@interface NSPPrivacyProxyTokenActivationQuery : PBCodable <NSCopying> {
    int  _authType;
    NSPPrivacyProxyBAAValidation * _baaParameters;
    NSPPrivacyProxyTokenInfo * _tokenInfo;
}

@property (nonatomic) int authType;
@property (nonatomic, retain) NSPPrivacyProxyBAAValidation *baaParameters;
@property (nonatomic, readonly) bool hasBaaParameters;
@property (nonatomic, retain) NSPPrivacyProxyTokenInfo *tokenInfo;

- (void).cxx_destruct;
- (int)StringAsAuthType:(id)arg1;
- (int)authType;
- (id)authTypeAsString:(int)arg1;
- (id)baaParameters;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBaaParameters;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAuthType:(int)arg1;
- (void)setBaaParameters:(id)arg1;
- (void)setTokenInfo:(id)arg1;
- (id)tokenInfo;
- (void)writeTo:(id)arg1;

@end
