
@protocol DNDSRemoteServiceProviderMeDeviceStateDelegate <NSObject>

@required

- (DNDMeDeviceState *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 currentMeDeviceStateWithError:(id*)arg2;

@end
