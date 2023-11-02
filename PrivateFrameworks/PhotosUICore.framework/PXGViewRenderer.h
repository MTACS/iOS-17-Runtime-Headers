
@interface PXGViewRenderer : NSObject <PXGRenderer, PXScrollViewControllerObserver> {
    struct PXGCameraConfiguration { 
        struct { 
            /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
        } viewMatrix; 
        struct { 
            void*columns[4]; 
        } billboardMatrix; 
    }  _cameraConfiguration;
    <PXGRendererDelegate> * _delegate;
    PXGEntityManager * _entityManager;
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
    PXGSpriteDataStore * _lastPresentationDataStore;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _loadInsets;
    bool  _lowMemoryMode;
    struct CGPoint { 
        double x; 
        double y; 
    }  _renderedVisibleOrigin;
    NSMutableDictionary * _reusableViewInfoBySpriteIndex;
    NSMutableDictionary * _reusableViewsByClass;
    PXScrollViewController * _scrollViewController;
    bool  _shouldSeparateViewLayers;
    long long  _spriteBufferCapacity;
    unsigned int * _spriteIndexes;
    id /* block */  _test_renderSnapshotHandler;
    <PXGTextureConverter> * _textureConverter;
    struct { float x1; } * _textureInfos;
    NSMutableDictionary * _trackingContainerViewInfoBySpriteIndex;
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
}

@property (nonatomic) struct PXGCameraConfiguration { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; struct { void*x_2_1_1[4]; } x2; } cameraConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGRendererDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long destinationColorSpaceName;
@property (nonatomic, retain) PXGEntityManager *entityManager;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct { long long x1; bool x2; bool x3; bool x4; unsigned long long x5; bool x6; bool x7; bool x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; } interactionState;
@property (nonatomic) bool lowMemoryMode;
@property (nonatomic, readonly) unsigned char presentationType;
@property (nonatomic, retain) PXScrollViewController *scrollViewController;
@property (nonatomic) bool shouldSeparateViewLayers;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ test_renderSnapshotHandler;
@property (nonatomic, readonly) <PXGTextureConverter> *textureConverter;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;
@property (nonatomic, readonly) bool wantsBGRATextures;
@property (nonatomic, readonly) bool wantsMipmaps;
@property (nonatomic, readonly) bool wantsToDriveRender;

- (void).cxx_destruct;
- (void)_configureTrackingContainerView:(id)arg1 spriteIndex:(unsigned int)arg2 sprites:(struct { unsigned int x1; struct { /* ? */ } *x2; struct { /* ? */ } *x3; struct { /* ? */ } *x4; struct { /* ? */ } *x5; })arg3 screenScale:(double)arg4;
- (id)_dequeueViewWithClass:(Class)arg1;
- (void)_makeViewInfoReusable:(id)arg1;
- (void)_resizeBuffersForSpriteCount:(long long)arg1;
- (double)_screenScale;
- (void)_shiftViewsToCompensateForDeferredVisibleOrigin;
- (struct PXGCameraConfiguration { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; struct { void*x_2_1_1[4]; } x2; })cameraConfiguration;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)destinationColorSpaceName;
- (id)entityManager;
- (id)init;
- (struct { long long x1; bool x2; bool x3; bool x4; unsigned long long x5; bool x6; bool x7; bool x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; })interactionState;
- (bool)lowMemoryMode;
- (unsigned char)presentationType;
- (void)releaseResources;
- (void)renderImmediately;
- (void)renderSpritesWithTextures:(id)arg1 dataStore:(id)arg2 presentationDataStore:(id)arg3 presentationMetadataStore:(id)arg4 layout:(id)arg5;
- (id)scrollViewController;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)setCameraConfiguration:(struct PXGCameraConfiguration { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; struct { void*x_2_1_1[4]; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setEntityManager:(id)arg1;
- (void)setInteractionState:(struct { long long x1; bool x2; bool x3; bool x4; unsigned long long x5; bool x6; bool x7; bool x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; })arg1;
- (void)setLowMemoryMode:(bool)arg1;
- (void)setNeedsRender;
- (void)setScrollViewController:(id)arg1;
- (void)setShouldSeparateViewLayers:(bool)arg1;
- (void)setTest_renderSnapshotHandler:(id /* block */)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldSeparateViewLayers;
- (id)startRecordingToDirectoryURL:(id)arg1;
- (id /* block */)test_renderSnapshotHandler;
- (id)textureConverter;
- (id)trackingContainerViewForSpriteIndex:(unsigned int)arg1;
- (void)updateWithChangeDetails:(id)arg1;
- (id)viewForSpriteIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (bool)wantsBGRATextures;
- (bool)wantsMipmaps;
- (bool)wantsToDriveRender;

@end
