
@interface _MPCPlaybackEnginePlayerIDInitializationParameters : NSObject <MPCPlaybackEngineInitializationParameters> {
    AVAudioSession * _audioSession;
    MPNowPlayingInfoCenter * _nowPlayingInfoCenter;
    NSString * _playerID;
    MPRemoteCommandCenter * _remoteCommandCenter;
}

@property (nonatomic, readonly) AVAudioSession *audioSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MPNowPlayingInfoCenter *nowPlayingInfoCenter;
@property (nonatomic, readonly, copy) NSString *playerID;
@property (nonatomic, readonly) MPRemoteCommandCenter *remoteCommandCenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)audioSession;
- (id)initWithPlayerID:(id)arg1;
- (id)nowPlayingInfoCenter;
- (id)playerID;
- (id)remoteCommandCenter;

@end
