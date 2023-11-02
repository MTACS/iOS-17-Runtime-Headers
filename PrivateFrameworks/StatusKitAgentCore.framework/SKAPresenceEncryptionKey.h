
@interface SKAPresenceEncryptionKey : NSObject {
    NSData * _keyData;
}

@property (nonatomic, retain) NSData *keyData;
@property (nonatomic, readonly) NSData *keyMaterial;

+ (id)logger;

- (void).cxx_destruct;
- (bool)_initializeNewKeyMaterial;
- (id)_randomBytesWithLength:(unsigned long long)arg1 error:(id*)arg2;
- (id)decryptPayload:(id)arg1;
- (id)encryptPayload:(id)arg1;
- (id)initWithKeyMaterial:(id)arg1;
- (id)initWithNewKeyMaterial;
- (id)keyData;
- (id)keyMaterial;
- (void)setKeyData:(id)arg1;

@end
