
@interface MDKeyRing : NSObject <MDKeyRing> {
    NSUUID * _designatedKeyUUID;
    NSMutableDictionary * _keysByUUID;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSMutableDictionary *keysByUUID;

+ (id)defaultKeyRing;
+ (void)initialize;

- (struct __CFUUID { }*)_createKeyUUIDWithAccount:(id)arg1 password:(id)arg2;
- (id)allKeyUUIDs;
- (id)copyDecryptedData:(id)arg1 withKeyUUID:(id)arg2 iv1:(unsigned int)arg3 iv2:(unsigned int)arg4;
- (id)copyDesignatedKeyUUID;
- (id)copyEncryptedData:(id)arg1 withKeyUUID:(id)arg2 iv1:(unsigned int)arg3 iv2:(unsigned int)arg4;
- (id)copyPrivateKeyQuery:(id)arg1;
- (id)copyRandomPassword;
- (bool)createKeychainItemForKey:(id)arg1;
- (id)createRandomAESKey;
- (id)createRandomUUID;
- (void)dealloc;
- (id)dictionaryToSecItemFormat:(id)arg1;
- (id)fetchKeyFromKeychain:(id)arg1;
- (struct __SecKey { }*)getKey:(id)arg1;
- (id)init;
- (id)keysByUUID;
- (int)restoreFromExistingKey:(id)arg1;
- (void)scheduleAccessToKey:(struct __CFUUID { }*)arg1 onQueue:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)secItemFormatToDictionary:(id)arg1;
- (void)setKeysByUUID:(id)arg1;
- (void)writeToKeychain:(id)arg1;

@end
