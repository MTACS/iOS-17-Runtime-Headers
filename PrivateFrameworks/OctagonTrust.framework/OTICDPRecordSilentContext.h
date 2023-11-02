
@interface OTICDPRecordSilentContext : PBCodable <NSCopying> {
    OTEscrowAuthenticationInformation * _authInfo;
    OTCDPRecoveryInformation * _cdpInfo;
}

@property (nonatomic, retain) OTEscrowAuthenticationInformation *authInfo;
@property (nonatomic, retain) OTCDPRecoveryInformation *cdpInfo;
@property (nonatomic, readonly) bool hasAuthInfo;
@property (nonatomic, readonly) bool hasCdpInfo;

- (void).cxx_destruct;
- (id)authInfo;
- (id)cdpInfo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAuthInfo;
- (bool)hasCdpInfo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAuthInfo:(id)arg1;
- (void)setCdpInfo:(id)arg1;
- (void)writeTo:(id)arg1;

@end
