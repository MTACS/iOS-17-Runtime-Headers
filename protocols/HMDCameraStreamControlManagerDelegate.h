
@protocol HMDCameraStreamControlManagerDelegate <NSObject>

@required

- (void)streamControlManager:(id <HMDCameraStreamControlManagerProtocol>)arg1 didNegotiateStreamWithSelectedParameters:(NSDictionary *)arg2;
- (void)streamControlManager:(id <HMDCameraStreamControlManagerProtocol>)arg1 didStopStreamWithSessionID:(HMDCameraStreamSessionID *)arg2 error:(NSError *)arg3;
- (void)streamControlManagerDidReceiveFirstFrame:(id <HMDCameraStreamControlManagerProtocol>)arg1;
- (void)streamControlManagerDidReconfigureStream:(id <HMDCameraStreamControlManagerProtocol>)arg1;
- (void)streamControlManagerDidSetUpRemoteConnection:(id <HMDCameraStreamControlManagerProtocol>)arg1;
- (void)streamControlManagerDidStartStream:(id <HMDCameraStreamControlManagerProtocol>)arg1;

@end
