
@interface PUPlayPauseBarItemsControllerChange : NSObject {
    bool  _currentPlaybackTimeDidChange;
    bool  _playPauseStateDidChange;
    bool  _playbackDurationDidChange;
}

@property (setter=_setCurrentPlaybackTimeDidChange:, nonatomic) bool currentPlaybackTimeDidChange;
@property (nonatomic, readonly) bool hasChanges;
@property (setter=_setPlayPauseStateDidChange:, nonatomic) bool playPauseStateDidChange;
@property (setter=_setPlaybackDurationDidChange:, nonatomic) bool playbackDurationDidChange;

- (void)_setCurrentPlaybackTimeDidChange:(bool)arg1;
- (void)_setPlayPauseStateDidChange:(bool)arg1;
- (void)_setPlaybackDurationDidChange:(bool)arg1;
- (bool)currentPlaybackTimeDidChange;
- (bool)hasChanges;
- (bool)playPauseStateDidChange;
- (bool)playbackDurationDidChange;

@end
