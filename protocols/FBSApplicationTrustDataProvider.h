
@protocol FBSApplicationTrustDataProvider <NSObject>

@required

- (unsigned long long)trustStateForApplication:(FBSApplicationInfo *)arg1;

@end
