
@protocol QuickWebsiteSearchEventListener <NSObject>

@required

- (void)didAutoDetectSiteSpecificSearchProviderWithOriginatingURL:(NSURL *)arg1 searchURLTemplate:(NSString *)arg2;

@end
