
@protocol CATRemoteTransportDelegate <NSObject>

@optional

- (void)transport:(CATRemoteTransport *)arg1 encounteredTrustDecisionWhileTryingToSecure:(CATRemoteConnectionTrustDecision *)arg2;
- (void)transportDidSecure:(CATRemoteTransport *)arg1;
- (void)transportWillSecure:(CATRemoteTransport *)arg1;

@end
