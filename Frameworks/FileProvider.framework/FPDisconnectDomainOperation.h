
@interface FPDisconnectDomainOperation : FPActionOperation {
    FPProviderDomain * _domain;
    NSProgress * _remoteProgress;
}

- (void).cxx_destruct;
- (void)_tryDisconnectingSafely:(bool)arg1;
- (void)actionMain;
- (void)cancel;
- (id)initWithDomain:(id)arg1;

@end
