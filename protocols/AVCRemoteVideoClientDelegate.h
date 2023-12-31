
@protocol AVCRemoteVideoClientDelegate <NSObject>

@optional

- (void)remoteVideoClient:(AVCRemoteVideoClient *)arg1 networkQualityDidDegrade:(bool)arg2 info:(NSDictionary *)arg3;
- (void)remoteVideoClient:(AVCRemoteVideoClient *)arg1 remoteMediaDidStall:(bool)arg2;
- (void)remoteVideoClient:(AVCRemoteVideoClient *)arg1 remoteScreenAttributesDidChange:(VideoAttributes *)arg2;
- (void)remoteVideoClient:(AVCRemoteVideoClient *)arg1 remoteVideoAttributesDidChange:(VideoAttributes *)arg2;
- (void)remoteVideoClient:(AVCRemoteVideoClient *)arg1 remoteVideoDidPause:(bool)arg2;
- (void)remoteVideoClient:(AVCRemoteVideoClient *)arg1 videoDidDegrade:(bool)arg2;
- (void)remoteVideoClient:(AVCRemoteVideoClient *)arg1 videoDidSuspend:(bool)arg2;
- (void)remoteVideoClientDidReceiveFirstFrame:(AVCRemoteVideoClient *)arg1;
- (void)remoteVideoClientDidReceiveLastFrame:(AVCRemoteVideoClient *)arg1;
- (void)remoteVideoServerDidDie:(AVCRemoteVideoClient *)arg1;

@end
