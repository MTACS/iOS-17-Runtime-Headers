
@interface ASAuthorizationPublicKeyCredentialLargeBlobAssertionInput : NSObject {
    NSData * _dataToWrite;
    long long  _operation;
}

@property (nonatomic, retain) NSData *dataToWrite;
@property (nonatomic, readonly) long long operation;

- (void).cxx_destruct;
- (id)dataToWrite;
- (id)initWithOperation:(long long)arg1;
- (long long)operation;
- (void)setDataToWrite:(id)arg1;

@end
