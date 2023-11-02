
@interface HMDMPCAssistantRemoteControlDestinationFactory : NSObject <HMDMPCAssistantRemoteControlDestinationFactory>

- (id)mutableCopyForMPCDestination:(id)arg1;
- (id)nowPlayingApplicationDestination;
- (void)resolveMPCDestination:(id)arg1 withHashedRouteIdentifiers:(id)arg2 audioRoutingInfo:(struct { bool x1; bool x2; bool x3; bool x4; })arg3 completion:(id /* block */)arg4;
- (id)systemMediaApplicationDestination;

@end
