
@protocol AVOutputDeviceConfigurationModification <NSObject>

@required

- (void)addPeerToHomeGroup:(AVOutputDeviceAuthorizedPeer *)arg1;
- (void)removePeerWithIDFromHomeGroup:(NSString *)arg1;
- (void)setDeviceName:(NSString *)arg1;
- (void)setDevicePassword:(NSString *)arg1;
- (void)startAutomaticallyAllowingConnectionsFromPeersInHomeGroupAndRejectOtherConnections:(bool)arg1;
- (void)stopAutomaticallyAllowingConnectionsFromPeersInHomeGroup;

@end
