
@interface BMAccessClient : NSObject {
    BMAccessAssertionCache * _accessAssertionCache;
    BMAccessTracker * _accessTracker;
    NSString * _useCase;
}

- (void).cxx_destruct;
- (bool)_currentProcessIsSandboxed;
- (id)_newConnectionForDomain:(unsigned long long)arg1;
- (id)_requestAccessToResource:(id)arg1 mode:(unsigned long long)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithUseCase:(id)arg1;
- (id)initWithUseCase:(id)arg1 sandboxExtensionCache:(id)arg2 accessTracker:(id)arg3;
- (void)invalidateConnection:(id)arg1;
- (id)requestAccessToResource:(id)arg1 mode:(unsigned long long)arg2 error:(id*)arg3;
- (id)requestEndpointForDomain:(unsigned long long)arg1 error:(id*)arg2;

@end
