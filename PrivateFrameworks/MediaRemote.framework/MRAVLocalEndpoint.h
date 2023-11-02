
@interface MRAVLocalEndpoint : MRAVOutputContextEndpoint

@property (nonatomic, readonly) MRAVRoutingDiscoverySession *audioDiscoverySession;

+ (id)sharedLocalEndpoint;
+ (id)sharedLocalEndpointForRoutingContextWithUID:(id)arg1;

- (id)audioDiscoverySession;
- (id)deviceInfo;
- (id)groupLeader;
- (id)groupSessionInfo;

@end
