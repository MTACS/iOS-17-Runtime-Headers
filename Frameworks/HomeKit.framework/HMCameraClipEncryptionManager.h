
@interface HMCameraClipEncryptionManager : NSObject {
    NSData * _key;
}

@property (readonly, copy) NSData *key;

- (void).cxx_destruct;
- (id)encryptedDataContextFromData:(id)arg1;
- (id)init;
- (id)initWithKey:(id)arg1;
- (id)key;

@end
