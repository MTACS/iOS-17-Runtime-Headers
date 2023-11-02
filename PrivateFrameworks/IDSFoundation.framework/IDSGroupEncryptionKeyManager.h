
@interface IDSGroupEncryptionKeyManager : NSObject {
    NSMutableDictionary * _currentDecryptingKeysAndSalts;
    NSData * _currentEncryptingKey;
    unsigned int  _currentEncryptingKeyGeneration;
    NSUUID * _currentEncryptingKeyIndex;
    NSData * _currentEncryptingKeySalt;
    NSMutableData * _encryptionContext;
    unsigned long long  _encryptionKeySize;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _previousEncryptingKeyIndexes;
    NSMutableArray * _previousEncryptingKeySalts;
    NSMutableArray * _previousEncryptingKeys;
}

- (void).cxx_destruct;
- (void)enumerateDecryptingKeysAndSaltsUsingBlock:(id /* block */)arg1;
- (id)initWithEncryptionContext:(id)arg1 encryptionKeySize:(unsigned long long)arg2;
- (void)invalidateKeyMaterialByKeyIndexes:(id)arg1;
- (void)purgeOldKeyMaterial;
- (void)receiveMembershipChangedInformation:(unsigned char)arg1;
- (void)recvKeyMaterial:(id)arg1;
- (bool)useCurrentEncryptionkeyWithHandler:(id /* block */)arg1;
- (bool)useDecryptingKeyForKeyIndex:(id)arg1 handler:(id /* block */)arg2;

@end
