
@interface PKAuxiliaryCapabilityRegisterResponse : PKAuxiliaryCapabilityWebServiceResponse {
    NSArray * _deviceDecryptionCertificateChain;
    NSArray * _deviceSignatureCertificateChain;
    NSArray * _serverDecryptionCertificateChain;
    NSArray * _serverSignatureCertificateChain;
}

@property (nonatomic, retain) NSArray *deviceDecryptionCertificateChain;
@property (nonatomic, retain) NSArray *deviceSignatureCertificateChain;
@property (nonatomic, retain) NSArray *serverDecryptionCertificateChain;
@property (nonatomic, retain) NSArray *serverSignatureCertificateChain;

+ (bool)jsonDataOptional;

- (void).cxx_destruct;
- (id)_retrieveCertificateChainFromJSONObject:(id)arg1 withParameterName:(id)arg2;
- (id)deviceDecryptionCertificateChain;
- (id)deviceSignatureCertificateChain;
- (id)initWithData:(id)arg1;
- (id)serverDecryptionCertificateChain;
- (id)serverSignatureCertificateChain;
- (void)setDeviceDecryptionCertificateChain:(id)arg1;
- (void)setDeviceSignatureCertificateChain:(id)arg1;
- (void)setServerDecryptionCertificateChain:(id)arg1;
- (void)setServerSignatureCertificateChain:(id)arg1;

@end
