
@interface HMCameraClipDecryptionManager : NSObject {
    NSData * _key;
}

@property (readonly, copy) NSData *key;

- (void).cxx_destruct;
- (id)dataFromEncryptedDataContext:(id)arg1;
- (id)initWithKey:(id)arg1;
- (id)key;

@end
