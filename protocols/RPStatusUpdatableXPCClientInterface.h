
@protocol RPStatusUpdatableXPCClientInterface

@optional

- (void)xpcStatusUpdatableGiveStatusUpdate:(NSString *)arg1 peerDevice:(RPCompanionLinkDevice *)arg2 currentState:(int)arg3 statusInfo:(NSDictionary *)arg4;

@end
