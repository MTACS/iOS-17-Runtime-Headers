
@interface MTROperationalCertificateChain : NSObject {
    NSNumber * _adminSubject;
    NSData * _intermediateCertificate;
    NSData * _operationalCertificate;
    NSData * _rootCertificate;
}

@property (nonatomic, copy) NSNumber *adminSubject;
@property (nonatomic, copy) NSData *intermediateCertificate;
@property (nonatomic, copy) NSData *operationalCertificate;
@property (nonatomic, copy) NSData *rootCertificate;

- (void).cxx_destruct;
- (id)adminSubject;
- (id)initWithOperationalCertificate:(id)arg1 intermediateCertificate:(id)arg2 rootCertificate:(id)arg3 adminSubject:(id)arg4;
- (id)intermediateCertificate;
- (id)operationalCertificate;
- (id)rootCertificate;
- (void)setAdminSubject:(id)arg1;
- (void)setIntermediateCertificate:(id)arg1;
- (void)setOperationalCertificate:(id)arg1;
- (void)setRootCertificate:(id)arg1;

@end
