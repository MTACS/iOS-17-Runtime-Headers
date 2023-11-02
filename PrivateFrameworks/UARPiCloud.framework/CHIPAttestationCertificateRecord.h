
@interface CHIPAttestationCertificateRecord : NSObject <NSCopying, NSSecureCoding> {
    CKRecord * _ckRecord;
    NSString * _intermediateCertificates;
    NSObject<OS_os_log> * _log;
    NSString * _recordName;
    NSString * _recordStatus;
    NSString * _rootCertificate;
    NSString * _signature;
    NSString * _verificationCertificateID;
}

@property (readonly) CKRecord *ckRecord;
@property (readonly) NSString *intermediateCertificates;
@property (readonly) NSString *recordName;
@property (readonly) NSString *recordStatus;
@property (readonly) NSString *rootCertificate;
@property (readonly) NSString *signature;
@property (readonly) NSString *verificationCertificateID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ckRecord;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCKRecord:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)intermediateCertificates;
- (id)recordName;
- (id)recordStatus;
- (id)rootCertificate;
- (id)signature;
- (id)verificationCertificateID;

@end
