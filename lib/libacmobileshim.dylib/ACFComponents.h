
@interface ACFComponents : NSObject {
    <ACFCertificateStoragePolicy> * _certificateStoragePolicy;
    <ACFCryptographProtocol> * _cryptograph;
    <ACFKeychainManagerProtocol> * _keychainManager;
    Class  _localAuthenticationContextClass;
    Class  _transportClass;
}

@property (nonatomic, retain) <ACFCertificateStoragePolicy> *certificateStoragePolicy;
@property (nonatomic, retain) <ACFCryptographProtocol> *cryptograph;
@property (nonatomic, retain) <ACFKeychainManagerProtocol> *keychainManager;
@property (nonatomic, retain) Class localAuthenticationContextClass;
@property (nonatomic, retain) Class transportClass;

+ (id)components;
+ (id)defaultComponents;
+ (void)setComponents:(id)arg1;

- (id)certificateStoragePolicy;
- (id)createLocalAuthenticationContext;
- (id)createTransport;
- (id)cryptograph;
- (void)dealloc;
- (id)keychainManager;
- (Class)localAuthenticationContextClass;
- (void)setCertificateStoragePolicy:(id)arg1;
- (void)setCryptograph:(id)arg1;
- (void)setKeychainManager:(id)arg1;
- (void)setLocalAuthenticationContextClass:(Class)arg1;
- (void)setTransportClass:(Class)arg1;
- (Class)transportClass;

@end
