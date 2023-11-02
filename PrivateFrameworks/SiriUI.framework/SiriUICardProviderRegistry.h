
@interface SiriUICardProviderRegistry : NSObject

+ (id)sharedInstance;

- (void)loadProviders;
- (void)preloadProviders;

@end
