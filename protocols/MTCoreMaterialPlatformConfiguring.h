
@protocol MTCoreMaterialPlatformConfiguring <NSObject>

@required

- (NSURL *)overrideRecipeBundleURL;

@optional

- (NSString *)blurEdgesOptimization;
- (bool)isDitherOptimizationSupported;

@end
