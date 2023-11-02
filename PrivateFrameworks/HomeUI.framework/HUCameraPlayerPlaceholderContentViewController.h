
@interface HUCameraPlayerPlaceholderContentViewController : UIViewController <HFCameraPlaybackEngineObserver> {
    bool  _cameraPlayerHasContentToShow;
    HMCameraClip * _lastRequestedClip;
    UIImageView * _placeholderImageView;
    HFCameraPlaybackEngine * _playbackEngine;
}

@property (nonatomic) bool cameraPlayerHasContentToShow;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMCameraClip *lastRequestedClip;
@property (nonatomic, retain) UIImageView *placeholderImageView;
@property (nonatomic) HFCameraPlaybackEngine *playbackEngine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_shouldHidePlaceholderContentForCurrentAccessMode;
- (bool)_shouldShowDefaultPlaceholderContent;
- (bool)_shouldShowPlaceholderContentForUserScrubbing;
- (bool)cameraPlayerHasContentToShow;
- (void)hu_reloadData;
- (id)initWithPlaybackEngine:(id)arg1;
- (id)lastRequestedClip;
- (id)placeholderImageView;
- (id)playbackEngine;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackError:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2;
- (void)setCameraPlayerHasContentToShow:(bool)arg1;
- (void)setLastRequestedClip:(id)arg1;
- (void)setPlaceholderImageView:(id)arg1;
- (void)setPlaybackEngine:(id)arg1;
- (bool)shouldShowPlaceholderContent;
- (void)updatePlaceholderContent;
- (void)updatePlaceholderImage:(id)arg1;
- (void)viewDidLoad;

@end
