
@interface MFMessageSigner : NSObject {
    MFCertificateTrustInfo * _encryptionCertificateTrustInfo;
    NSString * _sender;
    MFCertificateTrustInfo * _signingCertificateTrustInfo;
    int  _status;
}

@property (nonatomic, readonly) MFCertificateTrustInfo *encryptionCertificateTrustInfo;
@property (nonatomic, readonly) MFError *error;
@property (nonatomic, readonly) NSString *sender;
@property (nonatomic, readonly) MFCertificateTrustInfo *signingCertificateTrustInfo;

- (void).cxx_destruct;
- (id)encryptionCertificateTrustInfo;
- (id)error;
- (id)initWithSender:(id)arg1 signingTrust:(struct __SecTrust { }*)arg2 encryptionTrust:(struct __SecTrust { }*)arg3 verification:(int)arg4;
- (id)sender;
- (id)signingCertificateTrustInfo;

@end
