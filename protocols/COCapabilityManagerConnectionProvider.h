
@protocol COCapabilityManagerConnectionProvider <NSObject>

@required

- (NSXPCConnection *)capabilityManagerServiceConnection;

@end
