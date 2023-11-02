
@interface _WKAuthenticatorAttestationResponse : _WKAuthenticatorResponse {
    NSData * _attestationObject;
    NSArray * _transports;
}

@property (nonatomic, readonly) NSData *attestationObject;
@property (nonatomic, copy) NSArray *transports;

- (id)attestationObject;
- (void)dealloc;
- (id)initWithClientDataJSON:(id)arg1 rawId:(id)arg2 extensionOutputsCBOR:(id)arg3 attestationObject:(id)arg4 attachment:(long long)arg5 transports:(id)arg6;
- (id)initWithClientDataJSON:(id)arg1 rawId:(id)arg2 extensions:(void*)arg3 attestationObject:(id)arg4 attachment:(long long)arg5 transports:(id)arg6;
- (void)setTransports:(id)arg1;
- (id)transports;

@end
