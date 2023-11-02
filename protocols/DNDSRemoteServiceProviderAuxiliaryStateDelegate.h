
@protocol DNDSRemoteServiceProviderAuxiliaryStateDelegate <NSObject>

@required

- (bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 setScreenIsShared:(bool)arg2 screenIsMirrored:(bool)arg3 withError:(id*)arg4;

@end
