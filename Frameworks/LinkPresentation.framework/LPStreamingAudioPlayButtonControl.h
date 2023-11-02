
@interface LPStreamingAudioPlayButtonControl : LPPlayButtonControl <LPAudioPlayerClient> {
    LPAudioPlayerMediaPlayableAdaptor * _playableAdaptor;
    <LPAudioPlayer> * _player;
}

- (void).cxx_destruct;
- (void)audioPlayer:(id)arg1 didChangeProgress:(float)arg2;
- (void)audioPlayer:(id)arg1 didTransitionToState:(unsigned long long)arg2;
- (void)audioPlayerDidFailToPlay:(id)arg1;
- (void)buttonPressed:(id)arg1;
- (void)dealloc;
- (id)initWithAudio:(id)arg1 style:(id)arg2 theme:(id)arg3 player:(id)arg4;
- (id)playable;

@end
