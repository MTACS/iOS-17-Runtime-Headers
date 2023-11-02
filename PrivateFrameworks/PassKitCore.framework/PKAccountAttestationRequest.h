
@interface PKAccountAttestationRequest : NSObject {
    NSString * _anonymizationSalt;
    PKSecureElementCertificateSet * _casdCertificate;
}

@property (nonatomic, copy) NSString *anonymizationSalt;
@property (nonatomic, retain) PKSecureElementCertificateSet *casdCertificate;

+ (id)_keychainItemWrapper;
+ (id)createAnonymizationSalt;
+ (id)defaultAnonymizationSaltWithError:(id*)arg1;
+ (id)keychainDataWithError:(id*)arg1;
+ (void)removeAccountAttesationData;
+ (void)removeLocalAccountAttesationData;
+ (id)setDefaultAnonymizationSalt:(id)arg1;

- (void).cxx_destruct;
- (id)anonymizationSalt;
- (id)casdCertificate;
- (void)setAnonymizationSalt:(id)arg1;
- (void)setCasdCertificate:(id)arg1;

@end
