
@interface PSIDSLinkHBHEncryptedPayload : PBCodable <NSCopying> {
    NSData * _authenticationTag;
    NSData * _cipherText;
    NSData * _initializationVector;
}

@property (nonatomic, retain) NSData *authenticationTag;
@property (nonatomic, retain) NSData *cipherText;
@property (nonatomic, retain) NSData *initializationVector;

- (void).cxx_destruct;
- (id)authenticationTag;
- (id)cipherText;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initializationVector;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAuthenticationTag:(id)arg1;
- (void)setCipherText:(id)arg1;
- (void)setInitializationVector:(id)arg1;
- (void)writeTo:(id)arg1;

@end
