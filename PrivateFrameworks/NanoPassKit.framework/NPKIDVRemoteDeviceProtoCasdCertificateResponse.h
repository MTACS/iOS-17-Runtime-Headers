
@interface NPKIDVRemoteDeviceProtoCasdCertificateResponse : PBCodable <NSCopying> {
    NSData * _casdCertificate;
    NSData * _errorData;
}

@property (nonatomic, retain) NSData *casdCertificate;
@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasCasdCertificate;
@property (nonatomic, readonly) bool hasErrorData;

- (void).cxx_destruct;
- (id)casdCertificate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasCasdCertificate;
- (bool)hasErrorData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCasdCertificate:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
