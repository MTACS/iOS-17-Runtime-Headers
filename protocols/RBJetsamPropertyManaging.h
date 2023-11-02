
@protocol RBJetsamPropertyManaging <NSObject>

@required

- (RBJetsamProperties *)jetsamPropertiesForProcess:(int)arg1 identity:(RBSProcessIdentity *)arg2 bundleProperties:(id <RBBundleProperties>)arg3 isPlatformBinary:(bool)arg4;

@end
