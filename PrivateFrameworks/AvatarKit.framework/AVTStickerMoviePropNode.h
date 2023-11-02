
@interface AVTStickerMoviePropNode : SCNNode {
    bool  _applyToEmission;
    AVAssetReader * _assetReader;
    AVAssetReaderTrackOutput * _assetReaderOutput;
    struct opaqueCMSampleBuffer { } * _currentSampleBuffer;
    bool  _enableLoop;
    bool  _isObservingPlayerItemStatus;
    id /* block */  _loadCompletionHandler;
    AVAsset * _movieAsset;
    NSURL * _movieURL;
    AVPlayer * _player;
    AVPlayerItem * _playerItem;
}

@property (nonatomic) bool applyToEmission;
@property (nonatomic) bool enableLoop;
@property (nonatomic) bool isObservingPlayerItemStatus;
@property (nonatomic, copy) id /* block */ loadCompletionHandler;
@property (nonatomic, retain) AVAsset *movieAsset;
@property (nonatomic, retain) NSURL *movieURL;
@property (nonatomic, retain) AVPlayer *player;
@property (nonatomic, retain) AVPlayerItem *playerItem;

- (void).cxx_destruct;
- (bool)applyToEmission;
- (id)clone;
- (struct opaqueCMSampleBuffer { }*)copySampleBufferAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)dealloc;
- (bool)enableLoop;
- (id)initWithMovieURL:(id)arg1 geometry:(id)arg2 applyToEmission:(bool)arg3;
- (bool)isObservingPlayerItemStatus;
- (void)itemDidFinishPlaying:(id)arg1;
- (id /* block */)loadCompletionHandler;
- (id)movieAsset;
- (id)movieURL;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)player;
- (id)playerItem;
- (void)preparePlayerWithCompletionHandler:(id /* block */)arg1;
- (void)setApplyToEmission:(bool)arg1;
- (void)setEnableLoop:(bool)arg1;
- (void)setIsObservingPlayerItemStatus:(bool)arg1;
- (void)setLoadCompletionHandler:(id /* block */)arg1;
- (void)setMovieAsset:(id)arg1;
- (void)setMovieURL:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerItem:(id)arg1;
- (void)setup;
- (void)startObservingPlayerItemStatus;
- (void)stickerGenerationDidEnd;
- (void)stickerGenerationWillBegin;
- (void)stopObservingPlayerItemStatusIfNeeded;

@end
