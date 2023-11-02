
@interface MFCertificateTrustInformationKeychainManager : NSObject <EFLoggable> {
    NSString * _addressForSaving;
    CertUITrustManager * _keychainManager;
    EMCertificateTrustInformation * _trustInformation;
}

@property (nonatomic, readonly) int action;
@property (nonatomic, readonly, copy) NSString *addressForSaving;
@property (nonatomic, readonly) bool canSaveCertificateToKeychain;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasTrustException;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long keychainStatus;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (int)action;
- (void)addTrustException;
- (id)addressForSaving;
- (bool)canSaveCertificateToKeychain;
- (bool)hasTrustException;
- (id)initWithTrustInformation:(id)arg1;
- (unsigned long long)keychainStatus;
- (void)removeCertificateFromKeychain;
- (void)removeTrustException;
- (void)saveCertificateToKeychain;

@end
