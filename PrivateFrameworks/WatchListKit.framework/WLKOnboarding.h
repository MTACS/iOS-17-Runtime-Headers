
@interface WLKOnboarding : NSObject

+ (bool)isOptedIn;
+ (void)optInUserIfNeeded:(id /* block */)arg1;
+ (void)optInUserIfNeededAndRefreshConfig:(id /* block */)arg1;

@end
