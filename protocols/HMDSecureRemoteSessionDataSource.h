
@protocol HMDSecureRemoteSessionDataSource <NSObject>

@required

- (HMDSecureRemoteStream *)createSecureStreamWithPeerDevice:(HMDDevice *)arg1 clientMode:(bool)arg2 sessionID:(NSUUID *)arg3;

@end
