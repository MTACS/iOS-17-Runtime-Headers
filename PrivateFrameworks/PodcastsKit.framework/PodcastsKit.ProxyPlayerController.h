
@interface PodcastsKit.ProxyPlayerController : NSObject <MPRequestResponseControllerDelegate, PKPlayerController> {
    void _currentContentItemIdentifier;
    void contextExpirationTime;
    void contextTuple;
    void currentEpisode;
    void playerResponseHandler;
    void requestResponseController;
}

@property (nonatomic, readonly) double backwardJumpDuration;
@property (nonatomic, retain) PKEpisode *currentEpisode;
@property (nonatomic, readonly) PKDurationSnapshot *durationSnapshot;
@property (nonatomic, readonly) double forwardJumpDuration;
@property (nonatomic, copy) id /* block */ playerResponseHandler;

- (void).cxx_destruct;
- (double)backwardJumpDuration;
- (void)controller:(id)arg1 defersResponseReplacement:(id /* block */)arg2;
- (id)currentEpisode;
- (id)durationSnapshot;
- (double)forwardJumpDuration;
- (id)init;
- (void)jumpBackwardsWithCompletion:(id /* block */)arg1;
- (void)jumpForwardsWithCompletion:(id /* block */)arg1;
- (void)pauseWithCompletion:(id /* block */)arg1;
- (void)playWithCompletion:(id /* block */)arg1;
- (id /* block */)playerResponseHandler;
- (void)seekToPositionWithElapsedTime:(double)arg1 completion:(id /* block */)arg2;
- (void)setCurrentEpisode:(id)arg1;
- (void)setManifest:(id)arg1 startPlayback:(bool)arg2 completion:(id /* block */)arg3;
- (void)setPlayerResponseHandler:(id /* block */)arg1;
- (void)startPlayback:(id)arg1 completion:(id /* block */)arg2;

@end
