
@protocol DNDSRemoteServiceProviderBehaviorResolutionDelegate <NSObject>

@required

- (DNDClientEventBehavior *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 resolveBehaviorForEventDetails:(DNDClientEventDetails *)arg2 clientDetails:(DNDSClientDetails *)arg3 date:(NSDate *)arg4 error:(id*)arg5;

@end
