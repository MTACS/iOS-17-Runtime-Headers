
@interface _WKAuthenticatorAssertionResponse : _WKAuthenticatorResponse {
    NSData * _authenticatorData;
    NSData * _signature;
    NSData * _userHandle;
}

@property (nonatomic, readonly) NSData *authenticatorData;
@property (nonatomic, readonly) NSData *signature;
@property (nonatomic, readonly) NSData *userHandle;

- (id)authenticatorData;
- (id)initWithClientDataJSON:(id)arg1 rawId:(id)arg2 extensionOutputsCBOR:(id)arg3 authenticatorData:(id)arg4 signature:(id)arg5 userHandle:(id)arg6 attachment:(long long)arg7;
- (id)initWithClientDataJSON:(id)arg1 rawId:(id)arg2 extensions:(void*)arg3 authenticatorData:(id)arg4 signature:(id)arg5 userHandle:(id)arg6 attachment:(long long)arg7;
- (id)signature;
- (id)userHandle;

@end
