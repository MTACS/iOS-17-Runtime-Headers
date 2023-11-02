
@protocol FPProviderObserver <NSObject>

@required

- (void)providerDidEnterBackground:(NSString *)arg1;
- (void)providerDidEnterForeground:(NSString *)arg1;

@end
