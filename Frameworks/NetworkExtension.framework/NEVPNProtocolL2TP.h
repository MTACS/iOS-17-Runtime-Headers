
@interface NEVPNProtocolL2TP : NEVPNProtocolPPP {
    NSString * _localIdentifier;
    long long  _machineAuthenticationMethod;
    NEIdentityKeychainItem * _machineIdentity;
    bool  _machineIdentityDataImported;
    NSData * _machineIdentityDataInternal;
    NEKeychainItem * _sharedSecretKeychainItem;
    NSArray * _userPreferences;
}

@property (copy) NSString *localIdentifier;
@property long long machineAuthenticationMethod;
@property (copy) NSData *machineIdentityReference;
@property (copy) NEKeychainItem *sharedSecretKeychainItem;
@property (copy) NSData *sharedSecretReference;
@property (retain) NSArray *userPreferences;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyIPSecDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct __SCNetworkInterface { }*)createInterface;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)localIdentifier;
- (long long)machineAuthenticationMethod;
- (id)machineIdentityReference;
- (void)migratePasswordsFromPreferences:(struct __SCPreferences { }*)arg1;
- (bool)needToUpdateKeychain;
- (void)removeKeychainItemsInDomain:(long long)arg1 keepIdentity:(bool)arg2;
- (void)setIPSecSettingsFromLegacyDictionary:(id)arg1;
- (void)setLocalIdentifier:(id)arg1;
- (void)setMachineAuthenticationMethod:(long long)arg1;
- (void)setMachineIdentityReference:(id)arg1;
- (bool)setServiceProtocolsInService:(struct __SCNetworkService { }*)arg1;
- (void)setSharedSecretKeychainItem:(id)arg1;
- (void)setSharedSecretReference:(id)arg1;
- (void)setUserPreferences:(id)arg1;
- (id)sharedSecretKeychainItem;
- (id)sharedSecretReference;
- (void)syncWithKeychainInDomain:(long long)arg1 configuration:(id)arg2 suffix:(id)arg3;
- (bool)updateWithServiceProtocolsFromService:(struct __SCNetworkService { }*)arg1;
- (id)userPreferences;

@end
