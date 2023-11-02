
@interface PUBrowsingIrisPlayerChange : PUViewModelChange {
    bool  _activatedDidChange;
    bool  _currentlyDisplayedTimesDidChange;
    bool  _imageLoadingEnabledDidChange;
    bool  _isLivePhotoLoadingAllowedDidChange;
    bool  _isLivePhotoPlaybackAllowedDidChange;
    bool  _livePhotoDidChange;
    bool  _playbackStateDidChange;
    bool  _playerDidChange;
    bool  _playingDidChange;
    bool  _scrubbingPhotoTimeDidChange;
    bool  _vitalityTransformDidChange;
}

@property (nonatomic) bool activatedDidChange;
@property (nonatomic) bool currentlyDisplayedTimesDidChange;
@property (nonatomic) bool imageLoadingEnabledDidChange;
@property (nonatomic) bool isLivePhotoLoadingAllowedDidChange;
@property (nonatomic) bool isLivePhotoPlaybackAllowedDidChange;
@property (nonatomic) bool livePhotoDidChange;
@property (nonatomic) bool playbackStateDidChange;
@property (nonatomic) bool playerDidChange;
@property (nonatomic) bool playingDidChange;
@property (nonatomic) bool scrubbingPhotoTimeDidChange;
@property (nonatomic) bool vitalityTransformDidChange;

- (bool)activatedDidChange;
- (bool)currentlyDisplayedTimesDidChange;
- (bool)hasChanges;
- (bool)imageLoadingEnabledDidChange;
- (bool)isLivePhotoLoadingAllowedDidChange;
- (bool)isLivePhotoPlaybackAllowedDidChange;
- (bool)livePhotoDidChange;
- (bool)playbackStateDidChange;
- (bool)playerDidChange;
- (bool)playingDidChange;
- (bool)scrubbingPhotoTimeDidChange;
- (void)setActivatedDidChange:(bool)arg1;
- (void)setCurrentlyDisplayedTimesDidChange:(bool)arg1;
- (void)setImageLoadingEnabledDidChange:(bool)arg1;
- (void)setIsLivePhotoLoadingAllowedDidChange:(bool)arg1;
- (void)setIsLivePhotoPlaybackAllowedDidChange:(bool)arg1;
- (void)setLivePhotoDidChange:(bool)arg1;
- (void)setPlaybackStateDidChange:(bool)arg1;
- (void)setPlayerDidChange:(bool)arg1;
- (void)setPlayingDidChange:(bool)arg1;
- (void)setScrubbingPhotoTimeDidChange:(bool)arg1;
- (void)setVitalityTransformDidChange:(bool)arg1;
- (bool)vitalityTransformDidChange;

@end
