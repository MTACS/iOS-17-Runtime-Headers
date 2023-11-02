
@interface BWStreamingFilterNode : BWNode <BWDetectedFacesFilterDelegate, BWRendererResourceProvider, BWSemanticStyleSceneObserver> {
    bool  _attachesInputPixelBufferAfterRendering;
    BWFigVideoCaptureDevice * _captureDevice;
    bool  _cinematicVideoEnabled;
    BWSemanticStyleColorCubeCache * _colorCubeCache;
    BWColorLookupCache * _colorLookupCache;
    BWRenderListAnimator * _currentAnimator;
    BWRenderList * _currentRenderList;
    FigCaptureSemanticStyleSet * _currentSemanticStyleSet;
    bool  _depthDataDeliveryEnabled;
    bool  _depthFromMonocularNetworkEnabled;
    BWFencedAnimationQueue * _fencedAnimationQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _filterChangeLock;
    NSArray * _filters;
    bool  _focusBlurMapDeliveryEnabled;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _fullScreenRectangle;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastRenderedPTS;
    struct opaqueCMSampleBuffer { } * _lastSampleBuffer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lastSampleBufferLock;
    bool  _maskVisualizationEnabled;
    bool  _metadataProcessingEnabled;
    <MTLCommandQueue> * _metalCommandQueue;
    BWMetalColorCubeRenderer * _metalFilterRenderer;
    bool  _mixColorCubesInGammaDomain;
    BWRenderList * _mostRecentRenderListRequested;
    bool  _multipleSemanticStylesEnabled;
    BWRenderListAnimator * _nextAnimator;
    BWRenderList * _nextRenderList;
    float  _pickerComparisonMaxCubeStrength;
    bool  _portraitAutoSuggestEnabled;
    float  _portraitLightingEffectStrength;
    bool  _portraitPreviewForegroundBlurEnabled;
    bool  _preparedToBecomeLive;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _primaryCaptureRect;
    unsigned int  _priority;
    NSObject<OS_dispatch_queue> * _processorPreparationQueue;
    bool  _receivedInitialFixedPointDisparityBuffer;
    bool  _receivedOccludedFixedPointDisparityBuffer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _renderListLock;
    BWRenderListProcessor * _renderListProcessor;
    bool  _renderingSemanticStyleSet;
    FigCaptureSemanticStyle * _semanticStyle;
    NSArray * _semanticStyleFiltersAndRegionArray;
    bool  _semanticStyleRenderingEnabled;
    bool  _semanticStyleRenderingSuspended;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _semanticStyleSceneLock;
    int  _semanticStyleSceneType;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _semanticStyleSetLock;
    float  _simulatedAperture;
    bool  _stageRenderingEnabled;
    BWStreamingCVAFilterRenderer * _streamingCVAFilterRenderer;
    BWStreamingRaytracingSDOFRenderer * _streamingRaytracingSDOFRenderer;
    bool  _streamingSegmentationFromInferenceEngine;
    bool  _studioAndContourRenderingEnabled;
}

@property (nonatomic) bool attachesInputPixelBufferAfterRendering;
@property (readonly) BWColorLookupCache *colorLookupCache;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDepthDataDeliveryEnabled, nonatomic) bool depthDataDeliveryEnabled;
@property (getter=isDepthFromMonocularNetworkEnabled, nonatomic) bool depthFromMonocularNetworkEnabled;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) NSArray *filters;
@property (getter=isFocusBlurMapDeliveryEnabled, nonatomic) bool focusBlurMapDeliveryEnabled;
@property (readonly) unsigned long long hash;
@property (getter=isMetadataProcessingEnabled, nonatomic) bool metadataProcessingEnabled;
@property (getter=isPortraitAutoSuggestEnabled, nonatomic) bool portraitAutoSuggestEnabled;
@property float portraitLightingEffectStrength;
@property (getter=isRenderingSemanticStyle, nonatomic, readonly) bool renderingSemanticStyle;
@property (getter=isRenderingSemanticStyleSet, nonatomic, readonly) bool renderingSemanticStyleSet;
@property (nonatomic, readonly, retain) FigCaptureSemanticStyle *semanticStyle;
@property (getter=isSemanticStyleRenderingEnabled, nonatomic, readonly) bool semanticStyleRenderingEnabled;
@property (getter=isSemanticStyleRenderingSuspended, nonatomic, readonly) bool semanticStyleRenderingSuspended;
@property (nonatomic, readonly) int semanticStyleSceneType;
@property float simulatedAperture;
@property (nonatomic) bool stageRenderingEnabled;
@property (getter=isStreamingSegmentationFromInferenceEngine, nonatomic) bool streamingSegmentationFromInferenceEngine;
@property (nonatomic) bool studioAndContourRenderingEnabled;
@property (readonly) Class superclass;

+ (void)initialize;

- (bool)attachesInputPixelBufferAfterRendering;
- (void)changeToFilters:(id)arg1 animated:(bool)arg2;
- (void)changeToFilters:(id)arg1 semanticStyle:(id)arg2 animated:(bool)arg3;
- (void)changeToSemanticStyle:(id)arg1 animated:(bool)arg2;
- (id)colorLookupCache;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (void)filterDetectedFacesInSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)filters;
- (id)initWithCaptureDevice:(id)arg1 maxLossyCompressionLevel:(int)arg2 semanticStyleRenderingEnabled:(bool)arg3 cinematicVideoEnabled:(bool)arg4 portraitPreviewForegroundBlurEnabled:(bool)arg5 metalCommandQueue:(id)arg6 priority:(unsigned int)arg7;
- (bool)isDepthDataDeliveryEnabled;
- (bool)isDepthFromMonocularNetworkEnabled;
- (bool)isFocusBlurMapDeliveryEnabled;
- (bool)isMetadataProcessingEnabled;
- (bool)isPortraitAutoSuggestEnabled;
- (bool)isRenderingSemanticStyle;
- (bool)isRenderingSemanticStyleSet;
- (bool)isSemanticStyleRenderingEnabled;
- (bool)isSemanticStyleRenderingSuspended;
- (bool)isStreamingSegmentationFromInferenceEngine;
- (id)nodeSubType;
- (id)nodeType;
- (float)portraitLightingEffectStrength;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)prepareForRenderingWithPreparedPixelBufferPool;
- (id)provideColorLookupCache;
- (id)provideCoreImageFilterRenderer;
- (id)provideMetalFilterRenderer;
- (id)provideStillImageCoreImageBlurMapRenderer;
- (id)provideStillImageMetalBlurMapRenderer;
- (id)provideStillImageMetalSDOFRenderer;
- (id)provideStreamingSDOFFilterRenderer;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)semanticStyle;
- (int)semanticStyleSceneType;
- (void)semanticStyleSceneTypeDidChange:(int)arg1;
- (void)setAttachesInputPixelBufferAfterRendering:(bool)arg1;
- (void)setDepthDataDeliveryEnabled:(bool)arg1;
- (void)setDepthFromMonocularNetworkEnabled:(bool)arg1;
- (void)setFocusBlurMapDeliveryEnabled:(bool)arg1;
- (void)setMetadataProcessingEnabled:(bool)arg1;
- (void)setPortraitAutoSuggestEnabled:(bool)arg1;
- (void)setPortraitLightingEffectStrength:(float)arg1;
- (void)setSemanticStyleRenderingSuspended:(bool)arg1 animated:(bool)arg2;
- (void)setSemanticStyleSet:(id)arg1 fencePortSendRight:(id)arg2;
- (void)setSimulatedAperture:(float)arg1;
- (void)setStageRenderingEnabled:(bool)arg1;
- (void)setStreamingSegmentationFromInferenceEngine:(bool)arg1;
- (void)setStudioAndContourRenderingEnabled:(bool)arg1;
- (float)simulatedAperture;
- (bool)stageRenderingEnabled;
- (bool)studioAndContourRenderingEnabled;

@end
