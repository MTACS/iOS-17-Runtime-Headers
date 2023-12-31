
@protocol SKUIResourceLoaderDelegate <NSObject>

@optional

- (void)resourceLoader:(SKUIResourceLoader *)arg1 didLoadAllForReason:(long long)arg2;
- (void)resourceLoaderDidBeginLoading:(SKUIResourceLoader *)arg1;
- (void)resourceLoaderDidIdle:(SKUIResourceLoader *)arg1;

@end
