
@interface AVContentKeyResponseAuthorizationToken : AVContentKeyResponse {
    NSData * _authorizationTokenData;
}

- (void)dealloc;
- (id)initWithAuthorizationTokenData:(id)arg1;

@end
