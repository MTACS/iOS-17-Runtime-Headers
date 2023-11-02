
@interface NPKIDVRemoteDeviceProtoPrearmCredentialRequest : PBRequest <NSCopying> {
    NSData * _authorizationTokenData;
}

@property (nonatomic, retain) NSData *authorizationTokenData;
@property (nonatomic, readonly) bool hasAuthorizationTokenData;

- (void).cxx_destruct;
- (id)authorizationTokenData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAuthorizationTokenData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAuthorizationTokenData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
