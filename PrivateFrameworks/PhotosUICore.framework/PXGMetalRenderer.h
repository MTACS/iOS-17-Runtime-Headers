
@interface PXGMetalRenderer : NSObject <PXGEffectComponentDelegate, PXGMetalRenderDestinationDelegate, PXGMetalTextureConverterDelegate, PXGRenderer> {
    struct PXGCameraConfiguration { 
        struct { 
            /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
        } viewMatrix; 
        struct { 
            void*columns[4]; 
        } billboardMatrix; 
    }  _cameraConfiguration;
    <MTLSamplerState> * _clampToZeroSampler;
    PXGColorGradingTexturesStore * _colorGradingTexturesStore;
    <MTLCommandQueue> * _commandQueue;
    NSObject<OS_dispatch_queue> * _compilationQueue;
    <PXGRendererDelegate> * _delegate;
    <MTLDepthStencilState> * _depthStencil;
    <MTLDevice> * _device;
    bool  _didPerformFirstRender;
    PXGEntityManager * _entityManager;
    long long  _frameId;
    NSObject<OS_dispatch_semaphore> * _inFlightSemaphore;
    struct { 
        long long scrollRegime; 
        bool isAnimatingScroll; 
        bool isScrubbing; 
        bool isAnimatingContent; 
        unsigned long long contentChangeTrend; 
        bool isViewBoundsChanging; 
        bool isInitialLoad; 
        bool isVisible; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } targetRect; 
    }  _interactionState;
    bool  _isCreatingOffscreenEffectTexture;
    bool  _isCreatingOffscreenTexture;
    bool  _isInvertColorsEnabled;
    double  _lastOffscreenEffectRenderTime;
    double  _lastOffscreenRenderTime;
    double  _lastTime;
    NSObject<OS_dispatch_queue> * _layoutQueue;
    <MTLLibrary> * _library;
    bool  _lowMemoryMode;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _metalLock;
    <MTLSamplerState> * _mirrorRepeatSampler;
    double  _offscreenEffectScale;
    <MTLTexture> * _offscreenEffectTexture;
    <MTLTexture> * _offscreenTexture;
    PXGMetalOffscreenTexturesStore * _offscreenTextureCache;
    PXGMetalRenderTextureStore * _opaqueTextures;
    struct { int x1; unsigned long long x2; id x3; id x4; id x5; bool x6; } * _pipelines;
    long long  _pipelinesCapacity;
    long long  _pipelinesCount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _pipelinesLock;
    <PXGMetalRenderDestination> * _renderDestination;
    bool  _renderDestinationIsPresentable;
    bool  _renderDestinationWantsCompleteRenderingNotification;
    NSMutableArray * _reusableRenderStates;
    PXGSpriteDataStore * _spriteRenderDataStore;
    <MTLBuffer> * _squareGeometryBuffer;
    id /* block */  _test_renderSnapshotHandler;
    <PXGMetalRendererTestingDelegate> * _testingDelegate;
    PXGMetalTextureConverter * _textureConverter;
    PXGMetalRenderTextureStore * _translucentTextures;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleRect;
    NSObject<OS_dispatch_queue> * _workQueue;
    <MTLBuffer> * _yCbCrMatricesBuffer;
}

@property (nonatomic, readonly) struct { } camera;
@property (nonatomic) struct PXGCameraConfiguration { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; struct { void*x_2_1_1[4]; } x2; } cameraConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGRendererDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long destinationColorSpaceName;
@property (nonatomic, retain) PXGEntityManager *entityManager;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct { long long x1; bool x2; bool x3; bool x4; unsigned long long x5; bool x6; bool x7; bool x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; } interactionState;
@property (nonatomic) bool isInvertColorsEnabled;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *layoutQueue;
@property (nonatomic) bool lowMemoryMode;
@property (nonatomic) double offscreenEffectScale;
@property (nonatomic, readonly) unsigned char presentationType;
@property (nonatomic, readonly) <PXGMetalRenderDestination> *renderDestination;
@property (nonatomic, retain) PXScrollViewController *scrollViewController;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ test_renderSnapshotHandler;
@property (nonatomic) <PXGMetalRendererTestingDelegate> *testingDelegate;
@property (nonatomic, readonly) <PXGTextureConverter> *textureConverter;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRectInRenderCoordinates;
@property (nonatomic, readonly) bool wantsBGRATextures;
@property (nonatomic, readonly) bool wantsMipmaps;
@property (nonatomic, readonly) bool wantsToDriveRender;

+ (id)_loadAndPreprocessShaderSourceWithFilename:(id)arg1 extension:(id)arg2;
+ (id)mainShaderSource;
+ (float)maxZPosition;

- (void).cxx_destruct;
- (void)_checkinRenderState:(id)arg1;
- (id)_checkoutRenderState;
- (void)_clearPipelines;
- (void)_configureCaptureSpriteTexture:(id)arg1 renderState:(id)arg2 withTexture:(id)arg3 drawingScale:(double)arg4;
- (void)_configureUniformGeometries:(struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; struct { void*x_2_1_1[4]; } x2; float x3; }*)arg1 drawingScale:(double)arg2;
- (id)_createPipelineStateForColorProgram:(id)arg1 shader:(id)arg2 shaderFlags:(int)arg3 colorPixelFormat:(unsigned long long)arg4 depthStencilPixelFormat:(unsigned long long)arg5 isOpaque:(bool)arg6;
- (long long)_drawRenderTexture:(struct { id x1; id x2; struct _NSRange { unsigned long long x_3_1_1; unsigned long long x_3_1_2; } x3; float x4; int x5; unsigned char x6; bool x7; }*)arg1 withCommandEncoder:(id)arg2;
- (long long)_drawSpritesWithRenderState:(id)arg1 commandEncoder:(id)arg2 passingTest:(id /* block */)arg3;
- (struct { int x1; unsigned long long x2; id x3; id x4; id x5; bool x6; })_handleCompiledRenderPipelineState:(id)arg1 forColorProgram:(id)arg2 shader:(id)arg3 shaderFlags:(int)arg4 colorPixelFormat:(unsigned long long)arg5 pipelineIndex:(long long)arg6 isOpaque:(bool)arg7;
- (void)_parseSpriteTextures:(id)arg1 willPerformOffscreenPass:(bool)arg2 renderState:(id)arg3;
- (struct { int x1; unsigned long long x2; id x3; id x4; id x5; bool x6; })_pipelineForRenderTexture:(const struct { id x1; id x2; struct _NSRange { unsigned long long x_3_1_1; unsigned long long x_3_1_2; } x3; float x4; int x5; unsigned char x6; bool x7; }*)arg1 waitForCompilation:(bool)arg2;
- (void)_pipelinesLock_resizePipelinesStorageIfNeeded;
- (void)_populateEffectSprites:(id)arg1 spriteRenderDataStore:(id)arg2 presentationDataStore:(id)arg3 metadataStore:(id)arg4;
- (void)_preloadKernel:(id)arg1;
- (void)_preloadShader:(id)arg1;
- (void)_prepare;
- (void)_render:(id)arg1 withCompletionCompletion:(id /* block */)arg2;
- (void)_setupConstantBuffers;
- (void)_setupMetalIfNeeded;
- (void)_setupSquareGeometryBuffer;
- (void)_setupYCbCrMatrices;
- (struct { })camera;
- (struct PXGCameraConfiguration { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; struct { void*x_2_1_1[4]; } x2; })cameraConfiguration;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)destinationColorSpaceName;
- (void)effectComponent:(id)arg1 prepareForEffect:(id)arg2;
- (id)entityManager;
- (id)initWithRenderDestination:(id)arg1 layoutQueue:(id)arg2;
- (struct { long long x1; bool x2; bool x3; bool x4; unsigned long long x5; bool x6; bool x7; bool x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; })interactionState;
- (bool)isInvertColorsEnabled;
- (id)layoutQueue;
- (bool)lowMemoryMode;
- (void)metalTextureConverter:(id)arg1 didCreateTexture:(id)arg2 options:(struct { unsigned int x1; bool x2; })arg3;
- (double)offscreenEffectScale;
- (unsigned char)presentationType;
- (void)releaseResources;
- (id)renderDestination;
- (void)renderDestination:(id)arg1 renderSizeWillChange:(struct CGSize { double x1; double x2; })arg2;
- (void)renderDestinationDeviceDidChange:(id)arg1;
- (void)renderDestinationRequestRender:(id)arg1;
- (void)renderImmediately;
- (void)renderSpritesWithTextures:(id)arg1 dataStore:(id)arg2 presentationDataStore:(id)arg3 presentationMetadataStore:(id)arg4 layout:(id)arg5;
- (void)setCameraConfiguration:(struct PXGCameraConfiguration { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; struct { void*x_2_1_1[4]; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setEntityManager:(id)arg1;
- (void)setInteractionState:(struct { long long x1; bool x2; bool x3; bool x4; unsigned long long x5; bool x6; bool x7; bool x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; })arg1;
- (void)setIsInvertColorsEnabled:(bool)arg1;
- (void)setLowMemoryMode:(bool)arg1;
- (void)setNeedsRender;
- (void)setOffscreenEffectScale:(double)arg1;
- (void)setTest_renderSnapshotHandler:(id /* block */)arg1;
- (void)setTestingDelegate:(id)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)startRecordingToDirectoryURL:(id)arg1;
- (id /* block */)test_renderSnapshotHandler;
- (id)testingDelegate;
- (id)textureConverter;
- (void)updateWithChangeDetails:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRectInRenderCoordinates;
- (bool)wantsBGRATextures;
- (bool)wantsMipmaps;
- (bool)wantsToDriveRender;

@end
