
@interface JFXAnimojiPlaybackDelegate : NSObject <PVCompositeDelegate> {
    JFXAnimojiEffect * _animojiEffect;
    NSObject<OS_dispatch_queue> * _animojiRenderQueue;
    JFXAnimojiEffectRenderer * _animojiRenderer;
    JFXARMetadataMediaReader * _arMetadataReader;
    JFXCachedAnimojiImage * _cachedAnimojiImage;
    NSObject<OS_dispatch_queue> * _cachedAnimojiImageQueue;
    NSObject<OS_dispatch_queue> * _delayedUnloadPlaybackQueue;
    id /* block */  _delayedUnloadPlaybackResourcesBlock;
    JFXDepthDataMediaReader * _depthReader;
    bool  _isScrubbing;
    NSObject<OS_dispatch_queue> * _mediaDataReaderUpdateQueue;
    <JFXPlayableElement> * _playableElement;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _playbackElementPlaybackMediaRange;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _playbackElementPlaybackPresentationOffset;
    JFXSharedMediaDataReaderManager * _sharedMediaDataReaderManager;
    bool  _useAnimojiBlendShapes;
}

@property (nonatomic, retain) JFXAnimojiEffect *animojiEffect;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *animojiRenderQueue;
@property (nonatomic, retain) JFXAnimojiEffectRenderer *animojiRenderer;
@property (nonatomic, retain) JFXARMetadataMediaReader *arMetadataReader;
@property (nonatomic, retain) JFXCachedAnimojiImage *cachedAnimojiImage;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *cachedAnimojiImageQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delayedUnloadPlaybackQueue;
@property (nonatomic, copy) id /* block */ delayedUnloadPlaybackResourcesBlock;
@property (nonatomic, retain) JFXDepthDataMediaReader *depthReader;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isScrubbing;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *mediaDataReaderUpdateQueue;
@property (nonatomic, readonly) <JFXPlayableElement> *playableElement;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } playbackElementPlaybackMediaRange;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } playbackElementPlaybackPresentationOffset;
@property (nonatomic, retain) JFXSharedMediaDataReaderManager *sharedMediaDataReaderManager;
@property (readonly) Class superclass;
@property (nonatomic) bool useAnimojiBlendShapes;

- (void).cxx_destruct;
- (id)JFX_arMetadataReaderItemForMediaTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)JFX_avDepthDataFromDepthDataForMediaTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)JFX_cacheAnimojiImage:(id)arg1;
- (id)JFX_cachedAnimojiImageForMediaTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forAnimojiRenderingAttributes:(id)arg2;
- (void)JFX_clearCachedAnimojiImages;
- (void)JFX_initAnimojiImageBufferCachingProperties;
- (void)JFX_initAnimojiRenderingProperies;
- (void)JFX_initMediaDataReaderProperties;
- (void)JFX_initPlaybackLoadingProperies;
- (void)JFX_loadAnimojiRenderer;
- (void)JFX_loadMediaDataReaders;
- (void)JFX_loadResourcesForPlayback;
- (id)JFX_renderAnimojiEffect:(id)arg1 forTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 withARFrame:(id)arg3 depthData:(id)arg4 inputBufferSize:(struct CGSize { double x1; double x2; })arg5 captureOrientation:(long long)arg6 interfaceOrientation:(long long)arg7 preRecordedBlendShapes:(id)arg8 backgroundColor:(id)arg9;
- (void)JFX_requestUnloadResourcesForPlayback;
- (void)JFX_setMediaDataReaderScrubbingMode:(bool)arg1;
- (void)JFX_unloadAnimojiRenderer;
- (void)JFX_unloadMediaDataReaders;
- (void)JFX_unloadResourcesForPlayback;
- (id)animojiEffect;
- (id)animojiRenderQueue;
- (id)animojiRenderer;
- (id)arMetadataReader;
- (id)cachedAnimojiImage;
- (id)cachedAnimojiImageQueue;
- (id)delayedUnloadPlaybackQueue;
- (id /* block */)delayedUnloadPlaybackResourcesBlock;
- (id)depthReader;
- (id)initWithPlayableElement:(id)arg1 sharedMediaDataReaderManager:(id)arg2;
- (bool)isScrubbing;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })jfx_mediaTimeFromPlaybackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)loadWithUserContext:(id)arg1;
- (id)mediaDataReaderUpdateQueue;
- (id)playableElement;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })playbackElementPlaybackMediaRange;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })playbackElementPlaybackPresentationOffset;
- (id)preprocessWithInputs:(id)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 userContext:(id)arg3 compositeContext:(id)arg4;
- (id)renderWithInputs:(id)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 userContext:(id)arg3 compositeContext:(id)arg4;
- (void)setAnimojiEffect:(id)arg1;
- (void)setAnimojiRenderer:(id)arg1;
- (void)setArMetadataReader:(id)arg1;
- (void)setCachedAnimojiImage:(id)arg1;
- (void)setDelayedUnloadPlaybackResourcesBlock:(id /* block */)arg1;
- (void)setDepthReader:(id)arg1;
- (void)setIsScrubbing:(bool)arg1;
- (void)setSharedMediaDataReaderManager:(id)arg1;
- (void)setUseAnimojiBlendShapes:(bool)arg1;
- (id)sharedMediaDataReaderManager;
- (void)unloadWithUserContext:(id)arg1;
- (bool)useAnimojiBlendShapes;

@end
