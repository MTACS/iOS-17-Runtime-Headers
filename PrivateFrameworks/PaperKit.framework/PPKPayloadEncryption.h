
@interface PPKPayloadEncryption : NSObject {
    bool  _haveKey;
    unsigned char  _key;
    bool  _keyInitialized;
}

- (id)init;
- (void)initializeKey;

@end
