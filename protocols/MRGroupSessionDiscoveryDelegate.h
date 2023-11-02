
@protocol MRGroupSessionDiscoveryDelegate <NSObject>

@required

- (void)groupSessionDiscovery:(MRGroupSessionDiscovery *)arg1 activeSessionDidChange:(MRGroupSessionInfo *)arg2;
- (void)groupSessionDiscovery:(MRGroupSessionDiscovery *)arg1 discoveredSessionsDidChange:(NSSet *)arg2;

@end
