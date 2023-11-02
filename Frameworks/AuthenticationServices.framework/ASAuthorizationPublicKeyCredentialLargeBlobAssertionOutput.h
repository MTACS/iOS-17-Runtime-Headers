
@interface ASAuthorizationPublicKeyCredentialLargeBlobAssertionOutput : NSObject {
    bool  _didWrite;
    NSData * _readData;
}

@property (nonatomic, readonly) bool didWrite;
@property (nonatomic, readonly) NSData *readData;

+ (id)_outputWithData:(id)arg1 didWrite:(bool)arg2;

- (void).cxx_destruct;
- (id)_initWithData:(id)arg1 didWrite:(bool)arg2;
- (bool)didWrite;
- (id)readData;

@end
