
@interface TKTokenKeychainCertificate : TKTokenKeychainItem {
    NSNumber * _certificateEncoding;
    NSNumber * _certificateType;
    NSData * _data;
    NSData * _issuer;
    NSData * _publicKeyHash;
    NSData * _serialNumber;
    NSData * _subject;
    NSData * _subjectKeyID;
}

@property (retain) NSNumber *certificateEncoding;
@property (retain) NSNumber *certificateType;
@property (readonly, copy) NSData *data;
@property (retain) NSData *issuer;
@property (retain) NSData *publicKeyHash;
@property (retain) NSData *serialNumber;
@property (retain) NSData *subject;
@property (retain) NSData *subjectKeyID;

- (void).cxx_destruct;
- (id)certificateEncoding;
- (id)certificateType;
- (id)data;
- (id)encodedObjectID;
- (id)initWithCertificate:(struct __SecCertificate { }*)arg1 objectID:(id)arg2;
- (id)initWithItemInfo:(id)arg1;
- (id)issuer;
- (id)keychainAttributes;
- (id)publicKeyHash;
- (id)serialNumber;
- (void)setCertificateEncoding:(id)arg1;
- (void)setCertificateType:(id)arg1;
- (void)setIssuer:(id)arg1;
- (void)setPublicKeyHash:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setSubjectKeyID:(id)arg1;
- (id)subject;
- (id)subjectKeyID;

@end
