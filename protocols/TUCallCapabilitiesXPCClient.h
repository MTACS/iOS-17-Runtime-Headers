
@protocol TUCallCapabilitiesXPCClient <NSObject>

@required

- (oneway void)capabilityStateUpdated:(TUCallCapabilitiesState *)arg1;

@end
