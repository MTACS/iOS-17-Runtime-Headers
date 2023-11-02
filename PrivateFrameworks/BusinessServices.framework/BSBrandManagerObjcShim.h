
@interface BSBrandManagerObjcShim : NSObject {
    void brandManager;
}

- (void).cxx_destruct;
- (void)brandWithURI:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithCachingEnabled:(bool)arg1 cacheURL:(id)arg2 brandDataSourceWrapper:(id)arg3;

@end
