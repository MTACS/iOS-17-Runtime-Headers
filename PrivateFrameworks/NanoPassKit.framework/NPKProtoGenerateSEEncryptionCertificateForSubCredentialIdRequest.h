
@interface NPKProtoGenerateSEEncryptionCertificateForSubCredentialIdRequest : PBRequest <NSCopying> {
    NSString * _subCredentialId;
}

@property (nonatomic, readonly) bool hasSubCredentialId;
@property (nonatomic, retain) NSString *subCredentialId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSubCredentialId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSubCredentialId:(id)arg1;
- (id)subCredentialId;
- (void)writeTo:(id)arg1;

@end
