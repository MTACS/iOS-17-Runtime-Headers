
@interface ECSecureMIMETrustEvaluation : NSObject <EFLoggable, NSSecureCoding> {
    NSError * _error;
    unsigned long long  _options;
    NSString * _signerEmailAddress;
    struct __SecTrust { } * _trust;
    unsigned int  _trustResult;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) bool requiresReevaluationWithNetworkAccess;
@property (nonatomic, readonly, copy) NSString *signerEmailAddress;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct __SecTrust { }*trust;
@property (nonatomic, readonly) unsigned int trustResult;

+ (id)anchorCertificatesForTesting;
+ (id)evaluateTrust:(struct __SecTrust { }*)arg1 withOptions:(unsigned long long)arg2 signerEmailAddress:(id)arg3;
+ (id)log;
+ (id)reevaluateWithNetworkAccessAllowed:(id)arg1;
+ (void)setAnchorCertificatesForTesting:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_evaluate;
- (id)_initWithTrust:(struct __SecTrust { }*)arg1 options:(unsigned long long)arg2 signerEmailAddress:(id)arg3;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)options;
- (bool)requiresReevaluationWithNetworkAccess;
- (id)signerEmailAddress;
- (struct __SecTrust { }*)trust;
- (unsigned int)trustResult;

@end
