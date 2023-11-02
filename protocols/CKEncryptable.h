
@protocol CKEncryptable <NSObject>

@required

- (bool)needsDecryption;
- (bool)needsEncryption;

@end
