
@interface PLAssetsdInnerService : NSObject {
    PLLazyObject * _lazyService;
    PLAssetsdServicePermissions * _permissions;
    long long  _requiredState;
}

- (void).cxx_destruct;
- (void)_awaitForRequiredLibraryStateWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getInnerServiceWithContext:(id)arg1 reply:(id /* block */)arg2;
- (id)initWithPermissions:(id)arg1 requiredLibraryServicesState:(long long)arg2 lazyService:(id)arg3;
- (id)instantiateInnerService;

@end
