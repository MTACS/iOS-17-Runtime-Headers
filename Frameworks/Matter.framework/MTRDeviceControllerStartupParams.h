
@interface MTRDeviceControllerStartupParams : NSObject {
    NSSet * _caseAuthenticatedTags;
    NSNumber * _fabricID;
    NSData * _intermediateCertificate;
    NSData * _ipk;
    <MTRKeypair> * _nocSigner;
    NSNumber * _nodeID;
    NSData * _operationalCertificate;
    <MTROperationalCertificateIssuer> * _operationalCertificateIssuer;
    NSObject<OS_dispatch_queue> * _operationalCertificateIssuerQueue;
    <MTRKeypair> * _operationalKeypair;
    NSData * _rootCertificate;
    NSNumber * _vendorID;
}

@property (nonatomic, copy) NSSet *caseAuthenticatedTags;
@property (nonatomic, readonly, copy) NSNumber *fabricID;
@property (nonatomic, readonly) unsigned long long fabricId;
@property (nonatomic, copy) NSData *intermediateCertificate;
@property (nonatomic, readonly, copy) NSData *ipk;
@property (nonatomic, readonly, copy) <MTRKeypair> *nocSigner;
@property (nonatomic, copy) NSNumber *nodeID;
@property (nonatomic, copy) NSNumber *nodeId;
@property (nonatomic, copy) NSData *operationalCertificate;
@property (nonatomic, retain) <MTROperationalCertificateIssuer> *operationalCertificateIssuer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *operationalCertificateIssuerQueue;
@property (nonatomic, retain) <MTRKeypair> *operationalKeypair;
@property (nonatomic, copy) NSData *rootCertificate;
@property (nonatomic, copy) NSNumber *vendorID;
@property (nonatomic, copy) NSNumber *vendorId;

- (void).cxx_destruct;
- (id)caseAuthenticatedTags;
- (id)fabricID;
- (unsigned long long)fabricId;
- (id)initWithIPK:(id)arg1 fabricID:(id)arg2 nocSigner:(id)arg3;
- (id)initWithIPK:(id)arg1 operationalKeypair:(id)arg2 operationalCertificate:(id)arg3 intermediateCertificate:(id)arg4 rootCertificate:(id)arg5;
- (id)initWithOperationalKeypair:(id)arg1 operationalCertificate:(id)arg2 intermediateCertificate:(id)arg3 rootCertificate:(id)arg4 ipk:(id)arg5;
- (id)initWithParams:(id)arg1;
- (id)initWithSigningKeypair:(id)arg1 fabricId:(unsigned long long)arg2 ipk:(id)arg3;
- (id)intermediateCertificate;
- (id)ipk;
- (id)nocSigner;
- (id)nodeID;
- (id)nodeId;
- (id)operationalCertificate;
- (id)operationalCertificateIssuer;
- (id)operationalCertificateIssuerQueue;
- (id)operationalKeypair;
- (id)rootCertificate;
- (void)setCaseAuthenticatedTags:(id)arg1;
- (void)setIntermediateCertificate:(id)arg1;
- (void)setNodeID:(id)arg1;
- (void)setNodeId:(id)arg1;
- (void)setOperationalCertificate:(id)arg1;
- (void)setOperationalCertificateIssuer:(id)arg1;
- (void)setOperationalCertificateIssuerQueue:(id)arg1;
- (void)setOperationalKeypair:(id)arg1;
- (void)setRootCertificate:(id)arg1;
- (void)setVendorID:(id)arg1;
- (void)setVendorId:(id)arg1;
- (id)vendorID;
- (id)vendorId;

@end
