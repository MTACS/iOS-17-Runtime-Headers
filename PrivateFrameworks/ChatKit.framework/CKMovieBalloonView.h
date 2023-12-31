
@interface CKMovieBalloonView : CKImageBalloonView {
    AVPlayer * _avPlayer;
    AVPlayerItem * _avPlayerItem;
    AVPlayerLayer * _avPlayerLayer;
    CKMovieMediaObject * _mediaObject;
}

@property (setter=setAVPlayer:, nonatomic, retain) AVPlayer *avPlayer;
@property (setter=setAVPlayerItem:, nonatomic, retain) AVPlayerItem *avPlayerItem;
@property (setter=setAVPlayerLayer:, nonatomic, retain) AVPlayerLayer *avPlayerLayer;
@property (nonatomic) <CKMovieBalloonViewDelegate> *delegate;
@property (nonatomic, retain) CKMovieMediaObject *mediaObject;

- (void).cxx_destruct;
- (id)avPlayer;
- (id)avPlayerItem;
- (id)avPlayerLayer;
- (void)cleanupPlayerIfNeeded;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3 hasInvisibleInkEffect:(bool)arg4;
- (id)createAVAssetAndValidateCodec;
- (void)dealloc;
- (id)description;
- (bool)isCodecTypeAllowed:(unsigned int)arg1;
- (void)layoutSubviews;
- (id)mediaObject;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setAVPlayer:(id)arg1;
- (void)setAVPlayerItem:(id)arg1;
- (void)setAVPlayerLayer:(id)arg1;
- (void)setMediaObject:(id)arg1;
- (void)tapGestureRecognized:(id)arg1;
- (void)videoDidReachEnd:(id)arg1;

@end
