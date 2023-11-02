
@interface DIIdentityDocument : NSObject {
    NSData * _encryptedData;
}

@property (nonatomic, readonly) NSData *encryptedData;

- (void).cxx_destruct;
- (id)encryptedData;
- (id)initWithEncryptedData:(id)arg1;

@end
