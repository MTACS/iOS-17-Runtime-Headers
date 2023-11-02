
@interface PXDisplayAssetLivePhotoContentView : PXDisplayAssetContentView {
    ISLivePhotoUIView * _livePhotoView;
    double  _playerItemLoadingProgress;
    AVPlayerItem * _videoPlayerItem;
}

@property (nonatomic) double playerItemLoadingProgress;
@property (nonatomic, retain) AVPlayerItem *videoPlayerItem;

- (void).cxx_destruct;
- (void)_handlePlayerItemResult:(id)arg1 info:(id)arg2 requestID:(long long)arg3;
- (void)_updateLivePhotoContentMode;
- (void)_updateLivePhotoPlayerItem;
- (void)contentModeDidChange;
- (id)contentView;
- (void)contentsRectDidChange;
- (void)imageDidChange;
- (void)imageProgressDidChange;
- (void)imageRequesterDidChange:(unsigned long long)arg1;
- (bool)isDisplayingFullQualityContent;
- (double)loadingProgress;
- (void)placeholderImageFiltersDidChange;
- (long long)playbackStyle;
- (double)playerItemLoadingProgress;
- (void)setPlayerItemLoadingProgress:(double)arg1;
- (void)setVideoPlayerItem:(id)arg1;
- (void)updateContent;
- (id)videoPlayerItem;
- (void)viewModelDidChange:(unsigned long long)arg1;

@end
