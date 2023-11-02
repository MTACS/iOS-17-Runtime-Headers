
@interface BKUIFingerPrintPosedVideoPlayerView : UIView {
    NSString * _assetName;
    NSDictionary * _assetnameForAssetLengthDict;
    UIImage * _horizontalPosedImage;
    AVPlayerLayer * _playerLayer;
    UIImageView * _portraitImageView;
    NSString * _subDirectory;
    UIImage * _verticalPosedImage;
    AVQueuePlayer * _videoPlayer;
}

@property (nonatomic, copy) NSString *assetName;
@property (nonatomic, retain) NSDictionary *assetnameForAssetLengthDict;
@property (nonatomic, retain) UIImage *horizontalPosedImage;
@property (nonatomic, retain) AVPlayerLayer *playerLayer;
@property (nonatomic, retain) UIImageView *portraitImageView;
@property (nonatomic, copy) NSString *subDirectory;
@property (nonatomic, retain) UIImage *verticalPosedImage;
@property (nonatomic, retain) AVQueuePlayer *videoPlayer;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)_devicePrefix;
- (id)_filters;
- (void)_setFilters:(id)arg1;
- (void)_updateImageForOrientation:(long long)arg1;
- (id)assetName;
- (id)assetnameForAssetLengthDict;
- (void)hideVideoPlayer;
- (id)horizontalPosedImage;
- (id)initWithAssetName:(id)arg1 subdirectory:(id)arg2;
- (void)itemDidFinishPlaying:(id)arg1;
- (void)layoutSubviews;
- (void)load;
- (id)playerLayer;
- (id)portraitImageView;
- (void)setAssetName:(id)arg1;
- (void)setAssetnameForAssetLengthDict:(id)arg1;
- (void)setHorizontalPosedImage:(id)arg1;
- (void)setPlayerLayer:(id)arg1;
- (void)setPortraitImageView:(id)arg1;
- (void)setSubDirectory:(id)arg1;
- (void)setVerticalPosedImage:(id)arg1;
- (void)setVideoPlayer:(id)arg1;
- (void)showVideoPlayer;
- (id)subDirectory;
- (void)transitionToOrientation:(long long)arg1;
- (id)verticalPosedImage;
- (id)videoPlayer;

@end
