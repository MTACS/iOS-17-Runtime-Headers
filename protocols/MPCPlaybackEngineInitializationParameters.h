
@protocol MPCPlaybackEngineInitializationParameters <NSObject>

@required

- (AVAudioSession *)audioSession;
- (MPNowPlayingInfoCenter *)nowPlayingInfoCenter;
- (NSString *)playerID;
- (MPRemoteCommandCenter *)remoteCommandCenter;

@end
