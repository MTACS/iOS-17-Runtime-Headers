
@interface IMMediaRemoteController : NSObject {
    IMAVPlayer * _player;
    MPRemoteCommandCenter * _remoteCommandCenter;
    NSArray * _supportedPlaybackRates;
}

@property (nonatomic, retain) IMAVPlayer *player;
@property (nonatomic, retain) MPRemoteCommandCenter *remoteCommandCenter;
@property (nonatomic, retain) NSArray *supportedPlaybackRates;

- (void).cxx_destruct;
- (long long)_decreasePlayerPlaybackSpeed;
- (long long)_increasePlayerPlaybackSpeed;
- (void)_updatePlaybackSpeed;
- (struct __CFArray { }*)copySupportedCommands;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1;
- (id)player;
- (long long)remoteChangePlaybackRate:(id)arg1;
- (id)remoteCommandCenter;
- (long long)remoteNextTrack:(id)arg1;
- (long long)remotePause:(id)arg1;
- (long long)remotePreviousTrack:(id)arg1;
- (long long)remoteSeekBackward:(id)arg1;
- (long long)remoteSeekForward:(id)arg1;
- (long long)remoteSetPlayhead:(id)arg1;
- (long long)remoteSkipBackward:(id)arg1;
- (long long)remoteSkipForward:(id)arg1;
- (long long)remoteStop:(id)arg1;
- (void)remoteTogglePlayPauseCommand:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setPlayer:(id)arg1;
- (void)setRemoteCommandCenter:(id)arg1;
- (void)setSupportedPlaybackRates:(id)arg1;
- (void)setupRemoteCommandCenter:(id)arg1;
- (id)supportedPlaybackRates;
- (void)tearDownRemoteCommandCenter:(id)arg1;

@end
