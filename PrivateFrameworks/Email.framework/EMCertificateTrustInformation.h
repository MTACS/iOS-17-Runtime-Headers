
@interface EMCertificateTrustInformation : NSObject <EFLoggable, NSSecureCoding> {
    bool  __forceNetworkAccessAllowed;
    unsigned long long  _certificateType;
    NSString * _sender;
    struct __SecTrust { } * _trust;
    ECSecureMIMETrustEvaluation * _trustEvaluation;
}

@property (nonatomic) bool _forceNetworkAccessAllowed;
@property (nonatomic, readonly) struct __SecCertificate { }*certificate;
@property (nonatomic) unsigned long long certificateType;
@property (nonatomic, readonly, copy) NSString *commonName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *emailAddresses;
@property (nonatomic, readonly, copy) <ECEmailAddressConvertible> *firstEmailAddress;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *sender;
@property (readonly) Class superclass;
@property (nonatomic) struct __SecTrust { }*trust;
@property (nonatomic, retain) ECSecureMIMETrustEvaluation *trustEvaluation;

+ (id)log;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_forceNetworkAccessAllowed;
- (struct __SecCertificate { }*)certificate;
- (unsigned long long)certificateType;
- (id)commonName;
- (void)dealloc;
- (id)emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluateTrustWithOptions:(unsigned long long)arg1;
- (id)firstEmailAddress;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrust:(struct __SecTrust { }*)arg1 certificateType:(unsigned long long)arg2 sender:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)reevaluateTrustWithNetworkAccessAllowed;
- (id)sender;
- (void)setCertificateType:(unsigned long long)arg1;
- (void)setSender:(id)arg1;
- (void)setTrust:(struct __SecTrust { }*)arg1;
- (void)setTrustEvaluation:(id)arg1;
- (void)set_forceNetworkAccessAllowed:(bool)arg1;
- (struct __SecTrust { }*)trust;
- (id)trustEvaluation;

@end
