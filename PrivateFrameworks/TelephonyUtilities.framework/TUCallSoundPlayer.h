
@interface TUCallSoundPlayer : NSObject {
    long long  _currentlyPlayingSoundType;
    TUSoundPlayer * _player;
}

@property (nonatomic) long long currentlyPlayingSoundType;
@property (nonatomic, retain) TUSoundPlayer *player;
@property (getter=isPlaying, nonatomic, readonly) bool playing;

- (void).cxx_destruct;
- (bool)attemptToPlayDescriptor:(id)arg1;
- (bool)attemptToPlayDescriptor:(id)arg1 completion:(id /* block */)arg2;
- (bool)attemptToPlaySoundType:(long long)arg1 forCall:(id)arg2;
- (bool)attemptToPlaySoundType:(long long)arg1 forCall:(id)arg2 completion:(id /* block */)arg3;
- (long long)currentlyPlayingSoundType;
- (void)dealloc;
- (id)init;
- (bool)isPlaying;
- (id)player;
- (void)setCurrentlyPlayingSoundType:(long long)arg1;
- (void)setPlayer:(id)arg1;
- (void)stopPlaying;

@end
