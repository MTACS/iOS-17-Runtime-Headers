
@interface PXDisplayAssetLoopingVideoContentView : PXDisplayAssetContentView <PXActivityCoordinatorItem> {
    ISWrappedAVAudioSession * _audioSession;
    bool  _canLoadVideo;
    unsigned long long  _loadingIntervalID;
    unsigned long long  _playbackIntervalID;
    NSNumber * _queuePosition;
    id  _timeObserver;
    double  _videoLoadingProgress;
    ISWrappedAVPlayer * _videoPlayer;
    AVPlayerItem * _videoPlayerItem;
    PXVideoPlayerView * _videoView;
}

@property (nonatomic) unsigned long long activityCoordinatorQueuePosition;
@property (nonatomic, retain) ISWrappedAVAudioSession *audioSession;
@property (nonatomic) bool canLoadVideo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *queuePosition;
@property (readonly) Class superclass;
@property (nonatomic) double videoLoadingProgress;
@property (nonatomic, retain) ISWrappedAVPlayer *videoPlayer;
@property (nonatomic, retain) AVPlayerItem *videoPlayerItem;

- (void).cxx_destruct;
- (void)_endLoadingInterval:(bool)arg1;
- (void)_endPlaybackInterval;
- (void)_handleDidShowPlaceholderForUnloadingPlayerItem:(id)arg1;
- (void)_handlePlayerItemResult:(id)arg1 info:(id)arg2 requestID:(long long)arg3;
- (void)_handleVideoPlayerTimeObserverWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_loadVideo;
- (void)_unloadVideo;
- (void)_updateVideoPlayerPlayerItem;
- (void)_updateVideoViewContentMode;
- (void)_updateVideoViewPlaceholderFilters;
- (unsigned long long)activityCoordinatorQueuePosition;
- (void)animatedContentEnabledDidChange;
- (id)audioSession;
- (bool)canLoadVideo;
- (void)contentModeDidChange;
- (id)contentView;
- (void)contentsRectDidChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentContentsRect;
- (id)currentImage;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)imageDidChange;
- (void)imageProgressDidChange;
- (bool)isDisplayingFullQualityContent;
- (void)isDisplayingFullQualityContentDidChange;
- (double)loadingProgress;
- (void)placeholderImageFiltersDidChange;
- (long long)playbackStyle;
- (id)queuePosition;
- (void)setActivityCoordinatorQueuePosition:(unsigned long long)arg1;
- (void)setAudioSession:(id)arg1;
- (void)setCanLoadVideo:(bool)arg1;
- (void)setQueuePosition:(id)arg1;
- (void)setVideoLoadingProgress:(double)arg1;
- (void)setVideoPlayer:(id)arg1;
- (void)setVideoPlayerItem:(id)arg1;
- (void)updateContent;
- (double)videoLoadingProgress;
- (id)videoPlayer;
- (id)videoPlayerItem;

@end
