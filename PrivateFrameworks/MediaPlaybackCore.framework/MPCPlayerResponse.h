
@interface MPCPlayerResponse : MPResponse {
    MPCMediaRemoteController * _controller;
    NSArray * _participants;
    MPCPlayerPath * _playerPath;
    bool  _sharedListeningSession;
    long long  _state;
    MPCPlayerResponseTracklist * _tracklist;
    <MPCVideoOutput> * _videoOutput;
    UIView<MPCVideoView> * _videoView;
}

@property (nonatomic, readonly) <MPCPlayerResponseBuilder> *builder;
@property (nonatomic, readonly) MPCMediaRemoteController *controller;
@property (nonatomic, readonly) NSArray *participants;
@property (nonatomic, retain) MPCPlayerPath *playerPath;
@property (getter=isSharedListeningSession, nonatomic, readonly) bool sharedListeningSession;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) MPCPlayerResponseTracklist *tracklist;
@property (nonatomic, retain) <MPCVideoOutput> *videoOutput;
@property (nonatomic, retain) UIView<MPCVideoView> *videoView;

+ (id)builderProtocol;

- (void).cxx_destruct;
- (id)_commandRequestForMediaRemoteCommand:(unsigned int)arg1;
- (id)_stateDumpObject;
- (id)controller;
- (id)createSharedSessionWithIdentity:(id)arg1 intentHandler:(id /* block */)arg2;
- (id)createSharedSessionWithIntentHandler:(id /* block */)arg1;
- (id)description;
- (id)initWithRequest:(id)arg1 middleware:(id)arg2;
- (bool)isSharedListeningSession;
- (id)leaveSession;
- (id)participants;
- (id)pause;
- (id)play;
- (id)playerPath;
- (void)setPlayerPath:(id)arg1;
- (void)setVideoOutput:(id)arg1;
- (void)setVideoView:(id)arg1;
- (long long)state;
- (id)stop;
- (id)tracklist;
- (id)videoOutput;
- (id)videoView;

@end
