
@interface AMSMediaTokenServiceKeychainStore : NSObject {
    NSString * _clientIdentifier;
    NSString * _keychainAccessGroup;
}

@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (nonatomic, copy) NSString *keychainAccessGroup;

- (void).cxx_destruct;
- (struct __CFDictionary { }*)_copyKeychainQuery;
- (bool)_removeTokenFromKeychain;
- (id)clientIdentifier;
- (bool)deleteToken;
- (id)initWithClientIdentifier:(id)arg1 keychainAccessGroup:(id)arg2;
- (id)keychainAccessGroup;
- (id)retrieveToken;
- (void)setKeychainAccessGroup:(id)arg1;
- (bool)storeToken:(id)arg1;

@end
