
@protocol HDEncryptedArchiveKey <NSObject>

@required

- (NSData *)keyDataForDecryptionWithError:(id*)arg1;
- (NSData *)keyDataForEncryptionWithError:(id*)arg1;
- (bool)symmetric;

@end
