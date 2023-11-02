
@interface MTRFabricInfo : NSObject {
    NSNumber * _fabricID;
    NSNumber * _fabricIndex;
    NSData * _intermediateCertificate;
    NSData * _intermediateCertificateTLV;
    NSString * _label;
    NSNumber * _nodeID;
    NSData * _operationalCertificate;
    NSData * _operationalCertificateTLV;
    NSData * _rootCertificate;
    NSData * _rootCertificateTLV;
    NSData * _rootPublicKey;
    NSNumber * _vendorID;
}

@property (nonatomic, readonly) NSNumber *fabricID;
@property (nonatomic, readonly) NSNumber *fabricIndex;
@property (nonatomic, readonly) NSData *intermediateCertificate;
@property (nonatomic, readonly) NSData *intermediateCertificateTLV;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSNumber *nodeID;
@property (nonatomic, readonly) NSData *operationalCertificate;
@property (nonatomic, readonly) NSData *operationalCertificateTLV;
@property (nonatomic, readonly) NSData *rootCertificate;
@property (nonatomic, readonly) NSData *rootCertificateTLV;
@property (nonatomic, readonly) NSData *rootPublicKey;
@property (nonatomic, readonly) NSNumber *vendorID;

- (void).cxx_destruct;
- (id)fabricID;
- (id)fabricIndex;
- (id)initWithFabricTable:(const void*)arg1 fabricInfo:(const void*)arg2;
- (id)intermediateCertificate;
- (id)intermediateCertificateTLV;
- (id)label;
- (id)nodeID;
- (id)operationalCertificate;
- (id)operationalCertificateTLV;
- (id)rootCertificate;
- (id)rootCertificateTLV;
- (id)rootPublicKey;
- (id)vendorID;

@end
