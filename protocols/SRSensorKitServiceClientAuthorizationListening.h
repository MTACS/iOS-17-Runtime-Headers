
@protocol SRSensorKitServiceClientAuthorizationListening

@required

- (void)authorizedServicesDidChange:(NSSet *)arg1 deniedServices:(NSSet *)arg2 prerequisites:(long long)arg3 lastModifiedTimes:(NSDictionary *)arg4 bundleIdentifier:(NSString *)arg5;

@end
