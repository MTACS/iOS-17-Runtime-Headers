
@protocol SBWindowingModeResolverFactory <NSObject>

@required

- (long long)displayWindowingMode;
- (<SBWindowingModeResolver> *)resolverForPhysicalDisplay:(FBSDisplayConfiguration *)arg1;

@end
