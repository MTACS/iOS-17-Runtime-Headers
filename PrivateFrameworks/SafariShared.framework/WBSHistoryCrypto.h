
@interface WBSHistoryCrypto : NSObject {
    NSData * _cachedCryptographicKey;
    NSData * _salt;
}

@property (nonatomic, readonly) NSData *cryptographicKey;
@property (nonatomic, readonly) NSData *salt;

- (void).cxx_destruct;
- (id)_createCryptographicKey;
- (id)_createOrLoadCryptographicKey;
- (id)cryptographicKey;
- (id)decryptDictionary:(id)arg1;
- (id)encryptDictionary:(id)arg1;
- (id)init;
- (id)initWithCryptographicKey:(id)arg1 salt:(id)arg2;
- (id)salt;

@end
