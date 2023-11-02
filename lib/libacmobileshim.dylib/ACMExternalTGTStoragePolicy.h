
@interface ACMExternalTGTStoragePolicy : ACMKeychainTGTStoragePolicy {
    NSData * _secret;
}

@property (nonatomic, readonly) <ACFCryptographProtocol> *cryptograph;
@property (nonatomic, readonly) NSData *secret;

- (id)cryptograph;
- (id)decryptTokenData:(id)arg1;
- (id)encryptTokenData:(id)arg1;
- (bool)performRemoveTokenWithPrincipal:(id)arg1 service:(id)arg2;
- (id)preferences;
- (void)resetSecret;
- (id)searchItemWithInfo:(id)arg1;
- (id)secret;
- (id)service;
- (int)storeItemWithInfo:(id)arg1;
- (id)tokenDataWithDictionary:(id)arg1;
- (id)tokenDictionaryWithData:(id)arg1;

@end
