
@protocol ARDaemonServiceDataSource <NSObject>

@required

- (long long)numberOfActiveConnectionsForService:(id <ARServiceType>)arg1;
- (<ARServiceType> *)service:(id <ARServiceType>)arg1 peerServiceOfType:(Class)arg2;

@end
