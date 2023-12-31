
@protocol CBPairingAgentParentDelegate <NSObject>

@required

- (CBPeer *)peerWithInfo:(NSDictionary *)arg1;
- (bool)sendMsg:(int)arg1 args:(NSDictionary *)arg2;
- (NSDictionary *)sendSyncMsg:(int)arg1 args:(NSDictionary *)arg2;

@end
