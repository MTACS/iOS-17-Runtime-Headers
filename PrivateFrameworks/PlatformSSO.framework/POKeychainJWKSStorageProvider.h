
@interface POKeychainJWKSStorageProvider : NSObject <POJWKSStorageProvider> {
    NSString * _extensionIdentifier;
    bool  _isSystem;
    POKeychainHelper * _keychainHelper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *extensionIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSystem;
@property (copy) NSData *jwksCache;
@property (retain) POKeychainHelper *keychainHelper;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)extensionIdentifier;
- (id)initWithExtensionIdentifier:(id)arg1;
- (id)initWithExtensionIdentifier:(id)arg1 system:(bool)arg2;
- (bool)isSystem;
- (id)jwksCache;
- (id)jwksCacheForExtensionIdentifier:(id)arg1;
- (id)keychainHelper;
- (void)setExtensionIdentifier:(id)arg1;
- (void)setIsSystem:(bool)arg1;
- (void)setJwksCache:(id)arg1;
- (void)setJwksCache:(id)arg1 forExtensionIdentifier:(id)arg2;
- (void)setKeychainHelper:(id)arg1;

@end
