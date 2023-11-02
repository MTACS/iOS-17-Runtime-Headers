
@interface JFXVideoMediaItem : JTAssetMediaItem {
    AVAsset * _avAsset;
    bool  _capturedByInAppCamera;
    bool  _isHighFrameRate;
    int  _mediaStartOffset;
    bool  _originalIsHEVC4k;
    JTVideoMediaUtils * _videoMediaItemUtils;
}

@property (nonatomic, retain) AVAsset *avAsset;
@property (nonatomic) bool capturedByInAppCamera;
@property (nonatomic, readonly) float frameRate;
@property (nonatomic, readonly) bool hasAudioTracks;
@property (nonatomic, readonly) bool hasVideoTracks;
@property (nonatomic, readonly) bool isHighFrameRate;
@property (nonatomic, readonly) bool isUnsupportedAudio;
@property (nonatomic) int mediaStartOffset;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } naturalSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } naturalSizeWithTransform;
@property (nonatomic, readonly) bool needsDerivativeMedia;
@property (nonatomic) bool originalIsHEVC4k;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (nonatomic, retain) JTVideoMediaUtils *videoMediaItemUtils;

+ (void)videoMediaItemWithLocalURL:(id)arg1 delegate:(id)arg2 completionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)assetURL;
- (id)avAsset;
- (void)cacheAssetInformation;
- (bool)canBeAddedToSequence;
- (bool)capturedByInAppCamera;
- (id)colorSpace;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)durationAt30fps;
- (float)frameRate;
- (bool)hasAudibleCharacteristic;
- (bool)hasAudioTracks;
- (bool)hasVideoTracks;
- (bool)hasVisualCharacteristic;
- (unsigned long long)hash;
- (id)info;
- (bool)isEqual:(id)arg1;
- (bool)isHighFrameRate;
- (bool)isUnsupportedAudio;
- (void)loadAVAssetWithCompletionHandler:(id /* block */)arg1;
- (int)mediaStartOffset;
- (void)mediaserverdCrashed;
- (struct CGSize { double x1; double x2; })naturalSize;
- (struct CGSize { double x1; double x2; })naturalSizeWithTransform;
- (bool)needsDerivativeMedia;
- (bool)originalIsHEVC4k;
- (void)reloadAVAsset;
- (void)setAssetIs4kHEVC:(bool)arg1;
- (void)setAvAsset:(id)arg1;
- (void)setCapturedByInAppCamera:(bool)arg1;
- (void)setMediaStartOffset:(int)arg1;
- (void)setOriginalIsHEVC4k:(bool)arg1;
- (void)setVideoMediaItemUtils:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform:(struct CGSize { double x1; double x2; })arg1 fillDest:(bool)arg2;
- (id)videoMediaItemUtils;

@end
