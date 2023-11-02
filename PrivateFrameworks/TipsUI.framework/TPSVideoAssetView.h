
@interface TPSVideoAssetView : TPSImageAssetView {
    TPSKVOManager * _KVOManager;
    bool  _avPlayerPlaybackFinished;
    AVPlayer * _avplayer;
    AVPlayerLayer * _avplayerLayer;
    NSString * _cacheVideoIdentifier;
    NSString * _downloadedVideoPath;
    bool  _lastFrameDominant;
    UIImage * _lastFrameImage;
    bool  _readyToDisplayAVPlayer;
    bool  _registeredForAVPlayerNotification;
    UIButton * _replayButton;
    NSTimer * _replayButtonTimer;
    UIImageView * _replayGradientView;
    bool  _supportsVideoAssetViewCanShowMedia;
    bool  _supportsVideoAssetViewFinishedPlayingVideo;
    bool  _supportsVideoAssetViewUpdateAssetLoadingFinished;
    double  _videoDelayTime;
    <TPSVideoAssetViewDelegate> * _videoDelegate;
    NSString * _videoPath;
    bool  _videoPlaybackFinished;
    TPSURLSessionItem * _videoURLSessionItem;
}

@property (nonatomic, retain) NSString *cacheVideoIdentifier;
@property (nonatomic, retain) NSString *downloadedVideoPath;
@property (nonatomic) bool lastFrameDominant;
@property (nonatomic, retain) UIImage *lastFrameImage;
@property (nonatomic) bool readyToDisplayAVPlayer;
@property (nonatomic, retain) UIButton *replayButton;
@property (nonatomic, retain) UIImageView *replayGradientView;
@property (nonatomic) bool supportsVideoAssetViewCanShowMedia;
@property (nonatomic) bool supportsVideoAssetViewFinishedPlayingVideo;
@property (nonatomic) bool supportsVideoAssetViewUpdateAssetLoadingFinished;
@property (nonatomic) double videoDelayTime;
@property (nonatomic) <TPSVideoAssetViewDelegate> *videoDelegate;
@property (nonatomic, retain) NSString *videoPath;
@property (nonatomic) bool videoPlaybackFinished;
@property (nonatomic, retain) TPSURLSessionItem *videoURLSessionItem;

- (void).cxx_destruct;
- (void)avplayerDidFinishPlaying:(id)arg1;
- (void)avplayerItemErrorChanged:(id)arg1;
- (id)cacheVideoIdentifier;
- (void)cancel;
- (void)cancelReplayButtonTimer;
- (void)cancelVideoDownloadTask;
- (void)commonInit;
- (void)continuePlayVideo;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (void)dealloc;
- (bool)displayingVideoLastFrame;
- (id)downloadedVideoPath;
- (void)fetchImageWithIdentifier:(id)arg1 path:(id)arg2;
- (bool)lastFrameDominant;
- (id)lastFrameImage;
- (void)layoutSubviews;
- (void)playVideo;
- (void)playVideoDelay;
- (bool)readyToDisplayAVPlayer;
- (void)removeVideoPlayerLayer;
- (id)replayButton;
- (id)replayGradientView;
- (void)replayVideo;
- (void)resetVideoPlayer;
- (void)restartVideoDelay;
- (void)scrubVideoToFirstFrame;
- (void)setAspectFillAsset:(bool)arg1;
- (void)setCacheVideoIdentifier:(id)arg1;
- (void)setDownloadedVideoPath:(id)arg1;
- (void)setLastFrameDominant:(bool)arg1;
- (void)setLastFrameImage:(id)arg1;
- (void)setReadyToDisplayAVPlayer:(bool)arg1;
- (void)setReplayButton:(id)arg1;
- (void)setReplayGradientView:(id)arg1;
- (void)setSupportsVideoAssetViewCanShowMedia:(bool)arg1;
- (void)setSupportsVideoAssetViewFinishedPlayingVideo:(bool)arg1;
- (void)setSupportsVideoAssetViewUpdateAssetLoadingFinished:(bool)arg1;
- (void)setVideoDelayTime:(double)arg1;
- (void)setVideoDelegate:(id)arg1;
- (void)setVideoPath:(id)arg1;
- (void)setVideoPlaybackFinished:(bool)arg1;
- (void)setVideoURLSessionItem:(id)arg1;
- (void)stopVideoPlayer;
- (bool)supportsVideoAssetViewCanShowMedia;
- (bool)supportsVideoAssetViewFinishedPlayingVideo;
- (bool)supportsVideoAssetViewUpdateAssetLoadingFinished;
- (bool)updateImageToVideoLastFrame;
- (void)updateReplayButtonHiddenState:(bool)arg1;
- (void)updateVideoGravity;
- (double)videoDelayTime;
- (id)videoDelegate;
- (bool)videoInProgress;
- (id)videoPath;
- (bool)videoPlaybackFinished;
- (id)videoURLSessionItem;

@end