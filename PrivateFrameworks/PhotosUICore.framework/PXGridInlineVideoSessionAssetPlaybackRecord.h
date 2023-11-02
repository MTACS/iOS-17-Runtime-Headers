
@interface PXGridInlineVideoSessionAssetPlaybackRecord : PXGridInlinePlaybackRecord <PXChangeObserver, PXGDisplayAssetPixelBufferSource> {
    NSString * _bufferRequestIdentifier;
    struct __CVBuffer { } * _currentPixelBuffer;
    long long  _desiredPlayState;
    bool  _discardVideoOnPause;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _ivarLock;
    id /* block */  _pixelBufferDidChangeHandler;
    bool  _playLivePhotosWithSettlingEffectIfPossible;
    id /* block */  _providePlaceholderHandler;
    PXVideoSession * _videoSession;
}

@property (nonatomic, readonly) struct __CVBuffer { }*currentPixelBuffer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool discardVideoOnPause;
@property (nonatomic, readonly) PXGSpriteReference *geometryReference;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ pixelBufferDidChangeHandler;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } preferredTransform;
@property (nonatomic, copy) id /* block */ providePlaceholderHandler;
@property (readonly) Class superclass;
@property (retain) PXVideoSession *videoSession;
@property (nonatomic, readonly) NSString *videoStatusDescription;

+ (id)videoSessionQueue;

- (void).cxx_destruct;
- (void)_configureVideoSession:(id)arg1;
- (void)_setCurrentPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)_videoQueue_ensureVideoSessionWithDesiredPlayState:(long long)arg1;
- (void)_videoQueue_relinquishVideoSession;
- (void)_videoQueue_updateCurrentPixelBuffer;
- (struct __CVBuffer { }*)currentPixelBuffer;
- (void)dealloc;
- (long long)desiredPlayState;
- (bool)discardVideoOnPause;
- (id)initWithDisplayAsset:(id)arg1 mediaProvider:(id)arg2 spriteReference:(id)arg3 playLivePhotosWithSettlingEffectIfPossible:(bool)arg4;
- (bool)isPlaying;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id /* block */)pixelBufferDidChangeHandler;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (void)prepareForInvisible;
- (void)prepareForVisible;
- (id /* block */)providePlaceholderHandler;
- (void)setDesiredPlayState:(long long)arg1;
- (void)setDiscardVideoOnPause:(bool)arg1;
- (void)setPixelBufferDidChangeHandler:(id /* block */)arg1;
- (void)setProvidePlaceholderHandler:(id /* block */)arg1;
- (void)setVideoSession:(id)arg1;
- (id)videoSession;
- (id)videoStatusDescription;

@end
