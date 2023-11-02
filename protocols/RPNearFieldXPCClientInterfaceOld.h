
@protocol RPNearFieldXPCClientInterfaceOld

@required

- (void)didConnect;
- (void)failDiscoveryWithError:(NSError *)arg1;
- (void)receivedAlwaysOnEventWithSuggestedRole:(unsigned int)arg1;
- (void)receivedTapEvent:(RPNearFieldTapEvent *)arg1;

@end
