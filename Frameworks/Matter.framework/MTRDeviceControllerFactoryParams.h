
@interface MTRDeviceControllerFactoryParams : NSObject {
    NSArray * _certificationDeclarationCertificates;
    <MTROTAProviderDelegate> * _otaProviderDelegate;
    NSNumber * _port;
    NSArray * _productAttestationAuthorityCertificates;
    bool  _shouldStartServer;
    <MTRStorage> * _storage;
}

@property (nonatomic, copy) NSArray *certificationDeclarationCertificates;
@property (nonatomic, retain) <MTROTAProviderDelegate> *otaProviderDelegate;
@property (nonatomic, copy) NSNumber *port;
@property (nonatomic, copy) NSArray *productAttestationAuthorityCertificates;
@property (nonatomic) bool shouldStartServer;
@property (nonatomic, readonly) <MTRStorage> *storage;

- (void).cxx_destruct;
- (id)certificationDeclarationCertificates;
- (id)initWithStorage:(id)arg1;
- (id)otaProviderDelegate;
- (id)port;
- (id)productAttestationAuthorityCertificates;
- (void)setCertificationDeclarationCertificates:(id)arg1;
- (void)setOtaProviderDelegate:(id)arg1;
- (void)setPort:(id)arg1;
- (void)setProductAttestationAuthorityCertificates:(id)arg1;
- (void)setShouldStartServer:(bool)arg1;
- (bool)shouldStartServer;
- (id)storage;

@end
