
@interface MusicKit_SoftLinking_MPMusicPlayerController : NSObject {
    MPMusicPlayerController * _underlyingPlayerController;
}

@property (nonatomic) float currentPlaybackRate;
@property (nonatomic) double currentPlaybackTime;
@property (nonatomic, readonly) bool isPreparedToPlay;
@property (nonatomic, readonly) <MusicKit_SoftLinking_MPNowPlayingInfoAudioFormat> *nowPlayingAudioFormat;
@property (nonatomic, readonly) MusicKit_SoftLinking_MPMusicPlayerItem *nowPlayingItem;
@property (nonatomic, readonly) long long playbackState;
@property (nonatomic) long long repeatMode;
@property (nonatomic) long long shuffleMode;

+ (id)applicationMusicPlayer;
+ (id)notificationUserInfoKeyContentItemIDs;
+ (id)nowPlayingItemDidChangeNotificationName;
+ (id)playbackQueueDidChangeNotificationName;
+ (id)playbackStateDidChangeNotificationName;
+ (id)systemMusicPlayer;

- (void).cxx_destruct;
- (void)_handleNowPlayingItemDidChangeNotification:(id)arg1;
- (void)_handlePlaybackStateDidChangeNotification:(id)arg1;
- (void)_handleQueueDidChangeNotification:(id)arg1;
- (id)_initWithUnderlyingPlayerController:(id)arg1;
- (void)appendQueueDescriptor:(id)arg1;
- (void)beginGeneratingPlaybackNotifications;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (float)currentPlaybackRate;
- (double)currentPlaybackTime;
- (void)dealloc;
- (void)endGeneratingPlaybackNotifications;
- (void)endSeeking;
- (bool)isPreparedToPlay;
- (id)itemsForContentItemIDs:(id)arg1;
- (id)nowPlayingAudioFormat;
- (id)nowPlayingItem;
- (void)pause;
- (void)performQueueTransaction:(id /* block */)arg1;
- (void)play;
- (long long)playbackState;
- (void)prepareToPlayWithCompletionHandler:(id /* block */)arg1;
- (void)prependQueueDescriptor:(id)arg1;
- (long long)repeatMode;
- (void)setCurrentPlaybackRate:(float)arg1;
- (void)setCurrentPlaybackTime:(double)arg1;
- (void)setNowPlayingItemWithIdentifier:(id)arg1;
- (void)setQueueWithDescriptor:(id)arg1;
- (void)setRepeatMode:(long long)arg1;
- (void)setShuffleMode:(long long)arg1;
- (long long)shuffleMode;
- (void)skipToBeginning;
- (void)skipToNextItem;
- (void)skipToPreviousItem;
- (void)stop;

@end
