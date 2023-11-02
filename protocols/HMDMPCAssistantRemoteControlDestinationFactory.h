
@protocol HMDMPCAssistantRemoteControlDestinationFactory

@required

- (MPCAssistantMutableRemoteControlDestination *)mutableCopyForMPCDestination:(MPCAssistantRemoteControlDestination *)arg1;
- (MPCAssistantRemoteControlDestination *)nowPlayingApplicationDestination;
- (void)resolveMPCDestination:(void *)arg1 withHashedRouteIdentifiers:(void *)arg2 audioRoutingInfo:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: MPCAssistantRemoteControlDestination *, NSArray *, struct { bool x1; bool x2; bool x3; bool x4; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MPCAssistantRemoteControlDestination *, void*
- (MPCAssistantRemoteControlDestination *)systemMediaApplicationDestination;

@end
