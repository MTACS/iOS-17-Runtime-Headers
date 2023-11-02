
@interface CVAPortraitVideoPipeline_Impl : NSObject <CVADisparityPostprocessingVideoPipeline, CVAMattingVideoPipeline, CVAPortraitVideoPipeline> {
    struct __CVPixelBufferPool { } * _canonicalDisparityPixelBufferPool;
    int  _debugGPUCaptureFrameNumber;
    bool  _debugLogTransition;
    bool  _debugLogTransitionPrintTrivial01;
    struct unique_ptr<DisparityAutofocus, std::default_delete<DisparityAutofocus>> { 
        struct __compressed_pair<DisparityAutofocus *, std::default_delete<DisparityAutofocus>> { 
            struct DisparityAutofocus {} *__value_; 
        } __ptr_; 
    }  _disparityAutofocus;
    struct unique_ptr<DisparityConversion, std::default_delete<DisparityConversion>> { 
        struct __compressed_pair<DisparityConversion *, std::default_delete<DisparityConversion>> { 
            struct DisparityConversion {} *__value_; 
        } __ptr_; 
    }  _disparityConversion;
    struct unique_ptr<GeometricTransformation, std::default_delete<GeometricTransformation>> { 
        struct __compressed_pair<GeometricTransformation *, std::default_delete<GeometricTransformation>> { 
            struct GeometricTransformation {} *__value_; 
        } __ptr_; 
    }  _disparityGeometricTransformation;
    float  _disparityOffset;
    struct unique_ptr<DisparityStatistics, std::default_delete<DisparityStatistics>> { 
        struct __compressed_pair<DisparityStatistics *, std::default_delete<DisparityStatistics>> { 
            struct DisparityStatistics {} *__value_; 
        } __ptr_; 
    }  _disparityStatistics;
    NSDictionary * _faceKitProcessOutput;
    CVAFilterAlphaBlend * _filterAlphaBlend;
    struct unique_ptr<cva::FocusStateMachine, std::default_delete<cva::FocusStateMachine>> { 
        struct __compressed_pair<cva::FocusStateMachine *, std::default_delete<cva::FocusStateMachine>> { 
            struct FocusStateMachine {} *__value_; 
        } __ptr_; 
    }  _focusStateMachine;
    struct unique_ptr<FocusStatsPostprocessing, std::default_delete<FocusStatsPostprocessing>> { 
        struct __compressed_pair<FocusStatsPostprocessing *, std::default_delete<FocusStatsPostprocessing>> { 
            struct FocusStatsPostprocessing {} *__value_; 
        } __ptr_; 
    }  _focusStatsPostprocessing;
    struct RetainPtr<__CVBuffer *> { 
        void *m_ptr; 
    }  _intermediateRelightSourceBuffer;
    struct RetainPtr<__CVBuffer *> { 
        void *m_ptr; 
    }  _intermediateTransitionBufferFrom;
    struct RetainPtr<__CVBuffer *> { 
        void *m_ptr; 
    }  _intermediateTransitionBufferTo;
    NSDictionary * _metadata;
    struct CVAPhotoMetalContext { 
        <MTLDeviceSPI> *device; 
        <MTLCommandQueue> *commandQueue; 
        <MTLLibrary> *library; 
        <MTLPipelineLibrarySPI> *pipelineLibrary; 
        <MTLCaptureScope> *captureScope; 
        struct unique_ptr<CVAPerfEndTimeProfilerSet, std::default_delete<CVAPerfEndTimeProfilerSet>> { 
            struct __compressed_pair<CVAPerfEndTimeProfilerSet *, std::default_delete<CVAPerfEndTimeProfilerSet>> { 
                struct CVAPerfEndTimeProfilerSet {} *__value_; 
            } __ptr_; 
        } profiler; 
        bool _alreadyInCaptureScope; 
    }  _metalContext;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    float  _portraitStyleStrength;
    struct Preferences { 
        bool drawFocusMachineState; 
        int overlayShiftOnRendering; 
        int displayFrameTime; 
        int noiseBits; 
        int fNumber_tenths; 
        bool bypassGPUProcessing; 
        bool bypassCPUProcessing; 
    }  _preferences;
    float  _priorDisparity;
    <CVAVideoPipelinePropertiesSPI> * _properties;
    float  _referenceLensPosition_um;
    bool  _renderForegroundBlur;
    struct unique_ptr<SdofStateMachine, std::default_delete<SdofStateMachine>> { 
        struct __compressed_pair<SdofStateMachine *, std::default_delete<SdofStateMachine>> { 
            struct SdofStateMachine {} *__value_; 
        } __ptr_; 
    }  _sdofIntensityStateMachine;
    struct unique_ptr<StageLightStateMachine, std::default_delete<StageLightStateMachine>> { 
        struct __compressed_pair<StageLightStateMachine *, std::default_delete<StageLightStateMachine>> { 
            struct StageLightStateMachine {} *__value_; 
        } __ptr_; 
    }  _stageLightStateMachine;
    struct TransitionData { 
        bool _inTransition; 
    }  _transitionData;
    bool  _treatFixedPointDisparityAsDense;
    struct __CVBuffer { } * _untransformedCanonicalDisparityPixelBuffer;
    bool  _useSixteenBitPrecisionForDenseStereoDisparityConversion;
    VideoMattingMetal * _vmAccelerator;
    struct DynamicMetaParams { 
        float mattingCoeffUpdateRate; 
        float mattingCoeffUpdateRateFast; 
        float mattingCoeffColorStd; 
        float mattingCoeffColorStdFast; 
    }  _vmDynamicMetaParams;
    struct VideoMattingDynamicParams { 
        float updateRate; 
        float sdofDeltaCanonicalDisparity; 
        float alphaCoeffFilterColorStd; 
        float alphaGammaExponent; 
        float focusCanonicalDisparity; 
        float backgroundCanonicalDisparity; 
        float thresholdHardness; 
        struct array<float, 3UL> { 
            float __elems_[3]; 
        } gravity; 
        float alphaMatteDeltaCanonicalDisparity; 
        bool doDisparityHoleFilling; 
    }  _vmDynamicParams;
    struct VideoPostprocessingParams { 
        bool useFaceAsFocus; 
        float faceSizeRatioInFocus; 
        bool fillLargeHolesWithBackground; 
        float disparityIntervalInHoleSearch; 
        float backgroundFillMarginFromValidDisparity_px; 
        bool useTemporalRejection; 
    }  _vmPostprocessingParams;
    struct VideoMattingStaticParams { 
        bool supportsForegroundBlur; 
        unsigned int colorWidth; 
        unsigned int colorHeight; 
        unsigned int shiftWidth; 
        unsigned int shiftHeight; 
        unsigned int alphaWidth; 
        unsigned int alphaHeight; 
        int guidedFilterWidth; 
        int guidedFilterHeight; 
        unsigned int kernelSize; 
        float referenceShift; 
        float guidedFilterUnconfidentWeight; 
        float guidedFilterMinDistToDeweight; 
        float alphaMaxLaplacian; 
        float alphaContrastExponent; 
        float shiftFilterColorStd; 
        float shiftFilterUpdateRate; 
        float minimumConfidenceToKeepDisparity; 
        float maximumSimilarityToKeepDisparity; 
        float maxShiftFillingInconsistency; 
        float maxShiftFillingDistFromFg; 
        unsigned int maxDistToPushShiftEdgesFwd; 
        unsigned int maxDistToPushShiftEdgesRev; 
        int shiftPushingBgToFgShiftDifference; 
        float foregroundMaskDilationRadius; 
        float infConvolutionDownsampling; 
        float laplacianLimitingDownsampling; 
        float laplacianLimitingBlurSize; 
    }  _vmStaticParams;
    VideoRelightingMetal * _vrAccelerator;
    <MTLTexture> * _yuvSourceDownsampledAlias;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) <CVAVideoPipelineProperties> *videoPipelineProperties;

+ (void)drawDisparity:(const struct __CVBuffer { }*)arg1 onColor:(struct __CVBuffer { }*)arg2 canonical:(bool)arg3 rawShiftInvalidThreshold:(int)arg4 focusMachineState:(int)arg5 offsetX:(unsigned long long)arg6 offsetY:(unsigned long long)arg7;
+ (int)pixelBufferPoolCreateWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned int)arg3 pool:(struct __CVPixelBufferPool {}**)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (int)extractMatteWithRequest:(id)arg1;
- (int)extractMatteWithRequest:(id)arg1 disparityPostprocessingCompletionHandler:(id /* block */)arg2 mattingCompletionHandler:(id /* block */)arg3;
- (id)initWithProperties:(id)arg1 commandQueue:(id)arg2 notificationQueue:(id)arg3 error:(id*)arg4;
- (id)initWithProperties:(id)arg1 error:(id*)arg2;
- (id)internal_extractMatteWithRequest:(id)arg1 disparityPostprocessingResult:(id)arg2 usePostprocessedDisparity:(bool)arg3 dilateForegroundMask:(bool)arg4 gravity:(struct CVAVector { double x1; double x2; double x3; })arg5 transitionData:(const struct TransitionData { bool x1; }*)arg6 isMattingNeeded:(bool)arg7 mattingCompletionHandler:(id /* block */)arg8 isFinalStage:(bool)arg9 status:(int*)arg10;
- (id)internal_extractMatteWithRequest:(id)arg1 disparityPostprocessingResult:(id)arg2 usePostprocessedDisparity:(bool)arg3 dilateForegroundMask:(bool)arg4 gravity:(struct CVAVector { double x1; double x2; double x3; })arg5 transitionData:(const struct TransitionData { bool x1; }*)arg6 mattingCompletionHandler:(id /* block */)arg7 isFinalStage:(bool)arg8 status:(int*)arg9;
- (int)internal_fixFocusPositionWithDisparityPostprocessingRequest:(id)arg1;
- (id)internal_postprocessDisparityWithRequest:(id)arg1 disparityPostprocessingCompletionHandler:(id /* block */)arg2 isFinalStage:(bool)arg3 status:(int*)arg4;
- (void)internal_relightWithRequest:(id)arg1 intermediateSourceBuffer:(struct __CVBuffer { }*)arg2 faceKitProcessOutput:(id)arg3 portraitStyleStrength:(float)arg4 mattingResult:(id)arg5 singleCubeData:(id)arg6 portraitCompletionHandler:(id /* block */)arg7 timestamp:(long long)arg8 status:(int*)arg9;
- (void)internal_renderStageLightWithRequest:(id)arg1 mattingResult:(id)arg2 portraitCompletionHandler:(id /* block */)arg3 status:(int*)arg4;
- (void)internal_renderWithRequest:(id)arg1 dstBuffer:(struct __CVBuffer { }*)arg2 mattingResult:(id)arg3 portraitCompletionHandler:(id /* block */)arg4 status:(int*)arg5 timestamp:(long long)arg6;
- (int)makeMetalContextWithOptionalCommandQueue:(id)arg1 error:(id*)arg2;
- (int)postprocessDisparityWithRequest:(id)arg1;
- (int)postprocessDisparityWithRequest:(id)arg1 disparityPostprocessingCompletionHandler:(id /* block */)arg2;
- (int)renderSingleEffectWithRequest:(id)arg1 destinationColorPixelBuffer:(struct __CVBuffer { }*)arg2 error:(id*)arg3 disparityPostprocessingCompletionHandler:(id /* block */)arg4 mattingCompletionHandler:(id /* block */)arg5 portraitCompletionHandler:(id /* block */)arg6 requestFrom:(id)arg7 requestTo:(id)arg8;
- (int)renderWithRequest:(id)arg1;
- (int)renderWithRequest:(id)arg1 disparityPostprocessingCompletionHandler:(id /* block */)arg2 mattingCompletionHandler:(id /* block */)arg3 portraitCompletionHandler:(id /* block */)arg4;
- (int)renderWithRequest:(id)arg1 requestTo:(id)arg2 mixValue:(float)arg3 destinationColorPixelBuffer:(struct __CVBuffer { }*)arg4 error:(id*)arg5 disparityPostprocessingCompletionHandler:(id /* block */)arg6 mattingCompletionHandler:(id /* block */)arg7 portraitCompletionHandler:(id /* block */)arg8;
- (void)setVideoPipelineProperties:(id)arg1;
- (bool)validateDisparityPostprocessingRequest:(id)arg1 error:(id*)arg2;
- (bool)validateMattingRequest:(id)arg1 error:(id*)arg2;
- (bool)validatePortraitRequest:(id)arg1 error:(id*)arg2;
- (bool)validateSegmentationPixelBuffer:(struct __CVBuffer { }*)arg1 matchFormat:(id)arg2 error:(id*)arg3;
- (id)videoPipelineProperties;

@end
