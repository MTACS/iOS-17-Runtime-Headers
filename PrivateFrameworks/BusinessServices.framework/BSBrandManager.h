
@interface BSBrandManager : NSObject {
    BSBrandManagerObjcShim * _shim;
}

- (void).cxx_destruct;
- (void)brandWithURI:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithCachingEnabled:(bool)arg1 cacheURL:(id)arg2 brandDataSourceOpaqueWrapper:(id)arg3;

@end
