
@protocol GTDeviceCapabilities

@required

- (NSDictionary *)daemonDeviceCapabilities;
- (NSDictionary *)gpuToolsVersionQuery;
- (NSDictionary *)inferiorEnvironment:(NSDictionary *)arg1;

@end
