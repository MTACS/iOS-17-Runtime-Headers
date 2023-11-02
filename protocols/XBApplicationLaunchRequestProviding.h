
@protocol XBApplicationLaunchRequestProviding <NSObject>

@required

- (NSArray *)launchRequestsForApplication:(_UIApplicationInfo *)arg1 withCompatibilityInfo:(XBApplicationLaunchCompatibilityInfo *)arg2 defaultLaunchRequests:(NSArray *)arg3;

@end
