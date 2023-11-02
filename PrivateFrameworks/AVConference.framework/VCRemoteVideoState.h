
@interface VCRemoteVideoState : NSObject {
    bool  _hasReceivedFirstFrame;
    bool  _isLocalNetworkDegraded;
    bool  _isMediaStalled;
    bool  _isNetworkDegraded;
    bool  _isVideoDegraded;
    bool  _isVideoPaused;
    bool  _isVideoSuspended;
    NSString * _localInterfaceType;
    NSString * _remoteInterfaceType;
    VideoAttributes * _remoteScreenAttributes;
    VideoAttributes * _remoteVideoAttributes;
}

@property bool hasReceivedFirstFrame;
@property bool isLocalNetworkDegraded;
@property bool isMediaStalled;
@property bool isNetworkDegraded;
@property bool isVideoDegraded;
@property bool isVideoPaused;
@property bool isVideoSuspended;
@property (nonatomic, copy) NSString *localInterfaceType;
@property (nonatomic, copy) NSString *remoteInterfaceType;
@property (retain) VideoAttributes *remoteScreenAttributes;
@property (retain) VideoAttributes *remoteVideoAttributes;

- (void)dealloc;
- (id)description;
- (bool)hasReceivedFirstFrame;
- (bool)isLocalNetworkDegraded;
- (bool)isMediaStalled;
- (bool)isNetworkDegraded;
- (bool)isVideoDegraded;
- (bool)isVideoPaused;
- (bool)isVideoSuspended;
- (id)localInterfaceType;
- (id)remoteInterfaceType;
- (id)remoteScreenAttributes;
- (id)remoteVideoAttributes;
- (void)setHasReceivedFirstFrame:(bool)arg1;
- (void)setIsLocalNetworkDegraded:(bool)arg1;
- (void)setIsMediaStalled:(bool)arg1;
- (void)setIsNetworkDegraded:(bool)arg1;
- (void)setIsVideoDegraded:(bool)arg1;
- (void)setIsVideoPaused:(bool)arg1;
- (void)setIsVideoSuspended:(bool)arg1;
- (void)setLocalInterfaceType:(id)arg1;
- (void)setRemoteInterfaceType:(id)arg1;
- (void)setRemoteScreenAttributes:(id)arg1;
- (void)setRemoteVideoAttributes:(id)arg1;

@end
