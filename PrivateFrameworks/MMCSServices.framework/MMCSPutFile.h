
@interface MMCSPutFile : MMCSSimpleFile {
    NSData * _authRequestData;
    id /* block */  _block;
    NSString * _protocolVersion;
    id /* block */  _registrationBlock;
    id /* block */  _updateBlock;
}

@property (copy) NSData *authRequestData;
@property (copy) id /* block */ completionBlock;
@property (copy) id /* block */ progressUpdateBlock;
@property (copy) NSString *protocolVersion;
@property (copy) id /* block */ registrationBlock;

- (id)authRequestData;
- (id /* block */)completionBlock;
- (void)dealloc;
- (id /* block */)progressUpdateBlock;
- (id)protocolVersion;
- (id /* block */)registrationBlock;
- (void)setAuthRequestData:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgressUpdateBlock:(id /* block */)arg1;
- (void)setProtocolVersion:(id)arg1;
- (void)setRegistrationBlock:(id /* block */)arg1;

@end
