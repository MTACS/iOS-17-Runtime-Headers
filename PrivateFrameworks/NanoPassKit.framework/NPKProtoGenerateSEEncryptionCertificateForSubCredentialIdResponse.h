
@interface NPKProtoGenerateSEEncryptionCertificateForSubCredentialIdResponse : PBCodable <NSCopying> {
    NSData * _certificate;
    NSData * _errorData;
}

@property (nonatomic, retain) NSData *certificate;
@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasCertificate;
@property (nonatomic, readonly) bool hasErrorData;

- (void).cxx_destruct;
- (id)certificate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasCertificate;
- (bool)hasErrorData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCertificate:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
