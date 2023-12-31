
@interface MUPayloadEncryption : NSObject {
    bool  _haveKey;
    unsigned char  _key;
    bool  _keyInitialized;
}

+ (id)sharedInstance;

- (id)decryptData:(id)arg1;
- (id)encryptData:(id)arg1;
- (id)init;
- (void)initializeKey;

@end
