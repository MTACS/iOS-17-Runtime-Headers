
@interface ECSignatureInfo : NSObject {
    struct __SecCertificate { } * _encryptionCertificate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _encryptionCertificateLock;
    MSCMSSignerInfo * _signerInfo;
}

@property (nonatomic, readonly, copy) NSArray *addresses;
@property (nonatomic, readonly) struct __SecCertificate { }*preferredEncryptionCertificate;
@property (nonatomic, readonly) struct __SecCertificate { }*signingCertificate;
@property (nonatomic, readonly, copy) NSDate *signingDate;
@property (nonatomic, readonly, copy) NSArray *smimeCapabilities;

- (void).cxx_destruct;
- (id)addresses;
- (void)dealloc;
- (id)initWithSignerInfo:(id)arg1;
- (struct __SecCertificate { }*)preferredEncryptionCertificate;
- (struct __SecCertificate { }*)signingCertificate;
- (id)signingDate;
- (id)smimeCapabilities;

@end
