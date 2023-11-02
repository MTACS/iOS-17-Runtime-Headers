
@interface SRUIFStateFeedbackDefaultProvider : NSObject {
    id /* block */  _audioSessionRelinquishBlock;
    AFConnection * _connection;
    AFAudioPlaybackRequest * _currentAudioPlaybackRequest;
    AFWatchdogTimer * _delayToneTimer;
    unsigned long long  _options;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _uuidForFirstDelayTone;
}

- (void).cxx_destruct;
- (void)_playAudioPlaybackRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_playFeedbackWithSoundId:(long long)arg1 hapticLibraryKey:(id)arg2 UUID:(id)arg3 completion:(id /* block */)arg4;
- (void)_startDelayFeedbackWithResponseMode:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)cancelFeedback;
- (id)currentAudioPlaybackRequest;
- (id)initWithConnection:(id)arg1;
- (id)initWithConnection:(id)arg1 withPlaybackOptions:(unsigned long long)arg2;
- (void)playAudioPlaybackRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)playFeedbackForStateFeedbackType:(long long)arg1 withResponseMode:(id)arg2 completion:(id /* block */)arg3;
- (void)releaseAudioSessionWithCompletion:(id /* block */)arg1;
- (id)uuidForCurrentStateFeedback;
- (id)uuidForFirstDelayTone;

@end
