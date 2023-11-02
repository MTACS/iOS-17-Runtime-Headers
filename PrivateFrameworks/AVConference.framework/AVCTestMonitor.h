
@interface AVCTestMonitor : NSObject {
    AVConferenceXPCClient * _connection;
    id  _delegate;
    NSObject<OS_dispatch_queue> * _delegateNotificationQueue;
    unsigned int  _reportToken;
}

- (void)dealloc;
- (id)delegate;
- (id)delegateNotificationQueue;
- (void)deregisterBlocksForNotifications;
- (void)forceNetworkCellular:(bool)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)registerBlocksForNotifications;
- (void)requestSessionMediaDaemonStatsReport;
- (void)setEmulatedNetworkConfigurationPath:(id)arg1;
- (void)setEmulatedRxPLR:(double)arg1;
- (void)setEnableAudioPowerSpectrumReport:(bool)arg1;
- (void)setEnableLoopbackInterface:(bool)arg1;
- (void)setEnableOneToOneMode:(bool)arg1;
- (void)setForcedCapBitrate:(int)arg1;
- (void)setForcedTargetBitrate:(int)arg1;
- (void)setupNotificationQueue:(id)arg1;
- (void)updateAudioInjectConfig:(id)arg1;

@end
