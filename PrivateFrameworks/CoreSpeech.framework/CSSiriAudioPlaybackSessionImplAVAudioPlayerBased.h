
@interface CSSiriAudioPlaybackSessionImplAVAudioPlayerBased : NSObject <AVAudioPlayerDelegate, CSSiriAudioPlaybackSession> {
    AVAudioSession * _audioSession;
    id /* block */  _completion;
    bool  _isActive;
    bool  _isPrepared;
    unsigned long long  _options;
    AVAudioPlayer * _player;
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
- (void)_didNotStartWithError:(id)arg1;
- (void)_didStopWithError:(id)arg1;
- (void)_finalizeWithError:(id)arg1;
- (void)_handleBeginInterruption;
- (void)_handleEndInterruption:(bool)arg1;
- (bool)_prepareWithOptions:(unsigned long long)arg1 audioSession:(id)arg2 error:(id*)arg3;
- (void)_startWithOptions:(unsigned long long)arg1 audioSession:(id)arg2 preparationHandler:(id /* block */)arg3 executionHandler:(id /* block */)arg4 finalizationHandler:(id /* block */)arg5;
- (void)_stop:(bool)arg1;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(bool)arg2;
- (id)description;
- (void)handleBeginInterruption;
- (void)handleEndInterruption:(bool)arg1;
- (id)initWithQueue:(id)arg1 request:(id)arg2 options:(unsigned long long)arg3;
- (unsigned long long)options;
- (void)prepareWithOptions:(unsigned long long)arg1 audioSession:(id)arg2 completion:(id /* block */)arg3;
- (id)request;
- (void)startWithOptions:(unsigned long long)arg1 audioSession:(id)arg2 preparationHandler:(id /* block */)arg3 executionHandler:(id /* block */)arg4 finalizationHandler:(id /* block */)arg5;
- (void)stop:(bool)arg1 completion:(id /* block */)arg2;

@end
