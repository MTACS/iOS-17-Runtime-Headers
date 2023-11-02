
@interface EMRemoteContentURLCache : NSURLCache

- (void)getCachedResponseForDataTask:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)storeCachedResponse:(id)arg1 forDataTask:(id)arg2;
- (void)storeCancelationIfNeededForDataTask:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)storeResponseIfNeeded:(id)arg1 withData:(id)arg2 forDataTask:(id)arg3 completionHandler:(id /* block */)arg4;

@end
