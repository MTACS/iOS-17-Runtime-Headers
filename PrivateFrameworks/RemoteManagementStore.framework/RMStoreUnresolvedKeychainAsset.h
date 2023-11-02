
@interface RMStoreUnresolvedKeychainAsset : RMStoreUnresolvedAsset {
    RMStoreDeclarationKey * _assetKey;
    RMStoreDeclarationKey * _configurationKey;
    NSString * _keychainDefaultAccessibility;
    NSString * _keychainGroup;
    bool  _useSystemKeychain;
}

@property (nonatomic, readonly, copy) RMStoreDeclarationKey *assetKey;
@property (nonatomic, readonly, copy) RMStoreDeclarationKey *configurationKey;
@property (nonatomic, readonly, copy) NSString *keychainDefaultAccessibility;
@property (nonatomic, readonly, copy) NSString *keychainGroup;
@property (nonatomic, readonly) bool useSystemKeychain;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetKey;
- (id)configurationKey;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAsset:(id)arg1 assetKey:(id)arg2 configurationKey:(id)arg3 group:(id)arg4 defaultAccessibility:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToUnresolvedKeychainAsset:(id)arg1;
- (id)keychainDefaultAccessibility;
- (id)keychainGroup;
- (bool)useSystemKeychain;

@end
