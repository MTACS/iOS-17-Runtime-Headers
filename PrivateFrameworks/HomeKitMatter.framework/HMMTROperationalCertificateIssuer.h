
@interface HMMTROperationalCertificateIssuer : NSObject <HMFObject, MTROperationalCertificateIssuer> {
    HMMTRAccessoryServerBrowser * _browser;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (nonatomic, readonly) HMMTRAccessoryServerBrowser *browser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy) NSString *shortDescription;
@property (nonatomic, readonly) bool shouldSkipAttestationCertificateValidation;
@property (readonly) Class superclass;

+ (id)shortDescription;

- (void).cxx_destruct;
- (id)browser;
- (id)description;
- (id)initWithQueue:(id)arg1 browser:(id)arg2;
- (void)issueOperationalCertificateForRequest:(id)arg1 attestationInfo:(id)arg2 controller:(id)arg3 completion:(id /* block */)arg4;
- (id)privateDescription;
- (id)queue;
- (id)shortDescription;
- (bool)shouldSkipAttestationCertificateValidation;

@end
