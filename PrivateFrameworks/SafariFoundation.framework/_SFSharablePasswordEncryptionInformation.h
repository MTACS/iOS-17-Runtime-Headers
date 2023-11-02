
@interface _SFSharablePasswordEncryptionInformation : NSObject {
    NSData * _encryptedPasswordData;
    NSData * _encryptionKeyReference;
}

@property (nonatomic, readonly, copy) NSData *encryptedPasswordData;
@property (nonatomic, readonly, copy) NSData *encryptionKeyReference;

- (void).cxx_destruct;
- (id)encryptedPasswordData;
- (id)encryptionKeyReference;
- (id)initWithEncryptedPasswordData:(id)arg1 encryptionKeyReference:(id)arg2;

@end
