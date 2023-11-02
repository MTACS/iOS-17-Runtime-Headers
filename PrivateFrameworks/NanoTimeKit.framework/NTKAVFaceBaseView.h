
@interface NTKAVFaceBaseView : NTKBackgroundImageFaceView <CLKVideoPlayerViewDelegate> {
    UIImageView * _posterImageView;
    CLKVideoPlayerView * _videoPlayerView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *posterImageView;
@property (readonly) Class superclass;
@property (nonatomic, retain) CLKVideoPlayerView *videoPlayerView;

- (void).cxx_destruct;
- (void)_beginTransitionToOption;
- (void)_cleanupAfterTransitionToOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_createVideoPlayerViewIfNeeded;
- (void)_loadSnapshotContentViews;
- (void)_mediaServicesWereReset:(id)arg1;
- (id)_posterImageView;
- (void)_prepareForEditing;
- (void)_reset;
- (id)_selectedContentView;
- (void)_transitionToPosterView:(id)arg1;
- (void)_unloadSnapshotContentViews;
- (void)dealloc;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)layoutSubviews;
- (void)pauseVideoPlayerViewIfItExists;
- (id)posterImageView;
- (void)setPosterImageView:(id)arg1;
- (void)setVideoPlayerView:(id)arg1;
- (id)videoPlayerView;
- (void)videoPlayerViewDidBeginPlaying:(id)arg1;
- (void)videoPlayerViewDidBeginPlayingQueuedVideo:(id)arg1;
- (void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1;

@end
