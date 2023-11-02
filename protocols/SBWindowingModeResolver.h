
@protocol SBWindowingModeResolver <NSObject>

@required

- (<SBDisplayWindowingModeResolverDelegate> *)delegate;
- (long long)displayWindowingMode;
- (bool)isWindowingModeAvailable;
- (FBSDisplayIdentity *)rootDisplayIdentity;
- (void)setDelegate:(id <SBDisplayWindowingModeResolverDelegate>)arg1;

@end
