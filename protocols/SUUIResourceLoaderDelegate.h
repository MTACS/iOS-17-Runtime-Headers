
@protocol SUUIResourceLoaderDelegate <NSObject>

@optional

- (void)resourceLoader:(SUUIResourceLoader *)arg1 didLoadAllForReason:(long long)arg2;
- (void)resourceLoaderDidBeginLoading:(SUUIResourceLoader *)arg1;
- (void)resourceLoaderDidIdle:(SUUIResourceLoader *)arg1;

@end
