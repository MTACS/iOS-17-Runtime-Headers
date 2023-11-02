
@protocol HMDRemoteMessageTransportReachabilityDelegate <NSObject>

@required

- (void)transport:(HMDRemoteMessageTransport *)arg1 idsIdentifier:(NSUUID *)arg2 didAppearReachable:(bool)arg3;

@end
