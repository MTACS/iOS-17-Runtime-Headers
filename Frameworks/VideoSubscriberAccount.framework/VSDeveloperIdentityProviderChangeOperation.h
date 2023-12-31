
@interface VSDeveloperIdentityProviderChangeOperation : VSAsyncOperation {
    long long  _changeKind;
    NSXPCConnection * _connection;
    VSIdentityProvider * _identityProvider;
    VSOptional * _result;
}

@property (nonatomic) long long changeKind;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) VSIdentityProvider *identityProvider;
@property (nonatomic, retain) VSOptional *result;

- (void).cxx_destruct;
- (id)_serviceWithErrorHandler:(id /* block */)arg1;
- (long long)changeKind;
- (id)connection;
- (void)dealloc;
- (void)executionDidBegin;
- (id)identityProvider;
- (id)init;
- (id)result;
- (void)setChangeKind:(long long)arg1;
- (void)setConnection:(id)arg1;
- (void)setIdentityProvider:(id)arg1;
- (void)setResult:(id)arg1;

@end
