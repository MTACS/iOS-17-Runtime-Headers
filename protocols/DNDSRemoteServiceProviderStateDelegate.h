
@protocol DNDSRemoteServiceProviderStateDelegate <NSObject>

@required

- (DNDState *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 currentStateWithError:(id*)arg2;

@end
