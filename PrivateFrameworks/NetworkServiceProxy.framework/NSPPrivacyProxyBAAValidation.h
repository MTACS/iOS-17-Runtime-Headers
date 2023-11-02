
@interface NSPPrivacyProxyBAAValidation : PBCodable <NSCopying> {
    NSData * _baaSignature;
    NSData * _intermediateCertificate;
    NSData * _leafCertificate;
}

@property (nonatomic, retain) NSData *baaSignature;
@property (nonatomic, retain) NSData *intermediateCertificate;
@property (nonatomic, retain) NSData *leafCertificate;

- (void).cxx_destruct;
- (id)baaSignature;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)intermediateCertificate;
- (bool)isEqual:(id)arg1;
- (id)leafCertificate;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBaaSignature:(id)arg1;
- (void)setIntermediateCertificate:(id)arg1;
- (void)setLeafCertificate:(id)arg1;
- (void)writeTo:(id)arg1;

@end
