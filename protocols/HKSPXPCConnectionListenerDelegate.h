
@protocol HKSPXPCConnectionListenerDelegate <NSObject>

@required

- (void)connectionListenerDidAddClient:(HKSPXPCClient *)arg1;
- (void)connectionListenerDidRemoveClient:(HKSPXPCClient *)arg1;

@end
