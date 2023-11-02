
@interface SGPersistentSaltProvider : NSObject {
    NSString * _accessGroup;
    _PASLock * _lock;
    NSString * _serviceIdentifier;
}

+ (id)hexStringForData:(id)arg1;
+ (id)saltProviderFromKeyChainWithServiceIdentifier:(id)arg1 accessGroup:(id)arg2;
+ (id)saltProviderWithString:(id)arg1 serviceIdentifier:(id)arg2 accessGroup:(id)arg3;

- (void).cxx_destruct;
- (id)_createSalt;
- (void)_deleteSalt;
- (id)_findExistingSaltError:(out id*)arg1;
- (id)_findOrCreateSalt;
- (id)_queryKeychainError:(out id*)arg1;
- (id)initWithServiceIdentifier:(id)arg1 accessGroup:(id)arg2;
- (id)salt;

@end
