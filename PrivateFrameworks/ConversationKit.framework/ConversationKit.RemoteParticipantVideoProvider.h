
@interface ConversationKit.RemoteParticipantVideoProvider : NSObject <AVCRemoteVideoClientDelegate> {
    void _remoteScreenAttributes;
    void _remoteVideoAttributes;
    void avcRemoteVideoClient;
    void avcRemoteVideoClientDelegate;
    void features;
}

@property (nonatomic, readonly) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (void)remoteVideoClient:(id)arg1 networkQualityDidDegrade:(bool)arg2 info:(id)arg3;
- (void)remoteVideoClient:(id)arg1 remoteMediaDidStall:(bool)arg2;
- (void)remoteVideoClient:(id)arg1 remoteScreenAttributesDidChange:(id)arg2;
- (void)remoteVideoClient:(id)arg1 remoteVideoAttributesDidChange:(id)arg2;
- (void)remoteVideoClient:(id)arg1 remoteVideoDidPause:(bool)arg2;
- (void)remoteVideoClient:(id)arg1 videoDidDegrade:(bool)arg2;
- (void)remoteVideoClient:(id)arg1 videoDidSuspend:(bool)arg2;
- (void)remoteVideoClientDidReceiveFirstFrame:(id)arg1;

@end
