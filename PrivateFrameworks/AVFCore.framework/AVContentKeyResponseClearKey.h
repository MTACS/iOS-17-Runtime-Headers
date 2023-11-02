
@interface AVContentKeyResponseClearKey : AVContentKeyResponse {
    NSData * _initializationVector;
    NSData * _keyData;
}

- (void)dealloc;
- (id)initWithKeyData:(id)arg1 initializationVector:(id)arg2;

@end
