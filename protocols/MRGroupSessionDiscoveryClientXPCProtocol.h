
@protocol MRGroupSessionDiscoveryClientXPCProtocol

@required

- (void)activeSessionDidChange:(MRGroupSessionInfo *)arg1;
- (void)discoveredSessionsDidChange:(NSSet *)arg1;

@end
