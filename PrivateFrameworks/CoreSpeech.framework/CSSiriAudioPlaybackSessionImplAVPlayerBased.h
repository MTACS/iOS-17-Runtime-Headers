
@interface CSSiriAudioPlaybackSessionImplAVPlayerBased : NSObject <CSSiriAudioPlaybackSession> {
    AVAudioSession * _audioSession;
    id /* block */  _completion;
    bool  _isActive;
    unsigned long long  _options;
    AVPlayer * _player;
    AVPlayerItem * _playerItem;
    NSObject<OS_dispatch_queue> * _queue;
    AFAudioPlaybackRequest * _request;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) AFAudioPlaybackRequest *request;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finalizeWithError:(id)arg1;
- (void)_handleBeginInterruption;
- (void)_handleEndInterruption:(bool)arg1;
- (void)_prepareWithOptions:(unsigned long long)arg1 audioSession:(id)arg2 completion:(id /* block */)arg3;
- (void)_resetPlayerItem;
- (void)_startWithOptions:(unsigned long long)arg1 audioSession:(id)arg2 preparationHandler:(id /* block */)arg3 executionHandler:(id /* block */)arg4 finalizationHandler:(id /* block */)arg5;
- (void)_stop:(bool)arg1;
- (id)description;
- (void)handleBeginInterruption;
- (void)handleEndInterruption:(bool)arg1;
- (id)initWithQueue:(id)arg1 request:(id)arg2 options:(unsigned long long)arg3;
- (unsigned long long)options;
- (void)playerItemDidPlayToEndTime:(id)arg1;
- (void)playerItemFailedToPlayToEndTime:(id)arg1;
- (void)prepareWithOptions:(unsigned long long)arg1 audioSession:(id)arg2 completion:(id /* block */)arg3;
- (id)request;
- (void)startWithOptions:(unsigned long long)arg1 audioSession:(id)arg2 preparationHandler:(id /* block */)arg3 executionHandler:(id /* block */)arg4 finalizationHandler:(id /* block */)arg5;
- (void)stop:(bool)arg1 completion:(id /* block */)arg2;

@end
