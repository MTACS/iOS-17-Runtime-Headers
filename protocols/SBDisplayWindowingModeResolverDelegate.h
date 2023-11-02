
@protocol SBDisplayWindowingModeResolverDelegate <NSObject>

@required

- (void)resolver:(id <SBWindowingModeResolver>)arg1 rootDisplay:(FBSDisplayIdentity *)arg2 didUpdateAvailability:(bool)arg3;

@end
