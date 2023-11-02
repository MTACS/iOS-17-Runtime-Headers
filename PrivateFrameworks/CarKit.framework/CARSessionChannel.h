
@interface CARSessionChannel : NSObject <BSInvalidatable, CARSessionChannelProviding> {
    NSString * _channelID;
    NSObject<OS_dispatch_queue> * _channelQueue;
    NSString * _channelType;
    NSNumber * _qualityOfService;
    struct OpaqueFigEndpointRemoteControlSession { } * _remoteControlSession;
    CARSession * _session;
    NSNumber * _streamPriority;
    bool  _withoutReply;
    <CARSessionChannelDelegate> * channelDelegate;
}

@property (nonatomic) <CARSessionChannelDelegate> *channelDelegate;
@property (nonatomic, readonly) NSString *channelID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *channelQueue;
@property (nonatomic, readonly) NSString *channelType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isOpened, nonatomic, readonly) bool opened;
@property (nonatomic, readonly) NSNumber *qualityOfService;
@property (nonatomic, readonly) CARSession *session;
@property (nonatomic, readonly) NSNumber *streamPriority;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool withoutReply;

- (void).cxx_destruct;
- (void)_channelInvalidated;
- (void)_channelQueue_closeChannel;
- (void)_dataReceived:(id)arg1;
- (id)_endpointValueForKey:(struct __CFString { }*)arg1;
- (void)_sendComplete;
- (id)channelDelegate;
- (id)channelID;
- (id)channelQueue;
- (id)channelType;
- (void)closeChannel;
- (id)initWithSession:(id)arg1 channelType:(id)arg2;
- (id)initWithSession:(id)arg1 channelType:(id)arg2 channelID:(id)arg3 withoutReply:(bool)arg4 qualityOfService:(id)arg5 streamPriority:(id)arg6;
- (void)invalidate;
- (bool)isOpened;
- (bool)openChannel;
- (bool)openChannelWithError:(id*)arg1;
- (id)qualityOfService;
- (bool)sendChannelMessage:(id)arg1;
- (id)session;
- (void)setChannelDelegate:(id)arg1;
- (id)shortChannelType;
- (id)streamPriority;
- (bool)withoutReply;

@end
