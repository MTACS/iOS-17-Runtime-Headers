
@protocol DNDSRemoteAvailabilityServiceProviderDelegate <NSObject>

@required

- (bool)remoteAvailabilityServiceProvider:(DNDSRemoteAvailabilityServiceProvider *)arg1 isLocalUserAvailableForApplicationIdentifier:(DNDApplicationIdentifier *)arg2 withError:(out id*)arg3;

@end
