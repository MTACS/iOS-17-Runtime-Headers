
@protocol VNRPNTrackerResourcesProviding <NSObject>

@required

- (VNRPNTrackerEspressoResources *)createRPNTrackerResourcesConfiguredWithOptions:(NSDictionary *)arg1 error:(id*)arg2;
- (VNRPNTrackerEspressoResources *)trackerResourcesConfiguredWithOptions:(NSDictionary *)arg1 error:(id*)arg2;

@end
