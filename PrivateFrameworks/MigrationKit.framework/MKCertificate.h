
@interface MKCertificate : NSObject {
    NSData * _certificate;
    NSData * _digest;
    struct __SecIdentity { } * _identity;
}

@property (nonatomic, retain) NSData *certificate;
@property (nonatomic, retain) NSData *digest;
@property (nonatomic) struct __SecIdentity { }*identity;

- (void).cxx_destruct;
- (void)_appendBase64Data:(id)arg1 toString:(id)arg2;
- (id)certificate;
- (id)dataFromPEMFormattedData:(id)arg1;
- (void)dealloc;
- (id)digest;
- (id)encodedCertificate;
- (void)generateCertificate;
- (struct __SecIdentity { }*)identity;
- (id)init;
- (id)initWithPEM:(id)arg1;
- (id)initWithTrust:(struct __SecTrust { }*)arg1;
- (id)pemFormattedCertificateData:(id)arg1;
- (void)setCertificate:(id)arg1;
- (void)setDigest:(id)arg1;
- (void)setIdentity:(struct __SecIdentity { }*)arg1;

@end
