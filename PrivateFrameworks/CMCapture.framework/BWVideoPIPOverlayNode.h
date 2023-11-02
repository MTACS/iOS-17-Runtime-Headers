
@interface BWVideoPIPOverlayNode : BWNode {
    NSDictionary * _baseZoomFactorsByPortType;
    struct CGContext { } * _bitmapContext;
    CIContext * _ciContext;
    CIColor * _ciReticleColor;
    <BWVideoPIPOverlayDelegate> * _delegate;
    CIFilter<CIRoundedRectangleStrokeGenerator> * _drawRectangleFilter;
    float  _dropShadowAlpha;
    float  _dropShadowBlurSigma;
    float  _dropShadowWidth;
    float  _fadeInDurationSeconds;
    float  _fadeOutDurationSeconds;
    BWRamp * _fadeRamp;
    struct opaqueCMSampleBuffer { } * _fadeReferenceSampleBuffer;
    float  _frameRate;
    bool  _gpuPathInitialized;
    bool  _highQualitySamplingEnabled;
    bool  _isDeviceBravoVariant;
    float  _lastTeleMaxScale;
    float  _lastTeleMaxScaleZoomFactor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedOutputRect;
    float  _overCaptureTargetInterpolationScale;
    float  _overCaptureTargetRatio;
    float  _overCaptureTargetRatioInterpolationStart;
    bool  _overCaptureTargetRatioSmoothingEnabled;
    struct opaqueCMSampleBuffer { } * _previousAttachedSampleBuffer;
    float  _reticleLineThickness;
    BWScalingSession * _scalingSession;
    bool  _secondaryCameraStreamingEnabled;
    CIBlendKernel * _sourceOverBlendKernel;
    bool  _useGPUForDrawing;
    int  _zoomPIPWidth;
}

+ (void)initialize;

- (int)_drawOverlayRects:(id)arg1 toPixelBuffer:(struct __CVBuffer { }*)arg2 withinRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_drawPIPUsingCPUAndMSRToOutputPixelBuffer:(struct __CVBuffer { }*)arg1 attachedPixelBuffer:(struct __CVBuffer { }*)arg2 outputRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 inputRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 normalizedReticleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 primaryCaptureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 uprightExifOrientation:(int)arg7;
- (void)_drawPIPUsingGPUToOutputPixelBuffer:(struct __CVBuffer { }*)arg1 attachedPixelBuffer:(struct __CVBuffer { }*)arg2 filters:(id)arg3 outputRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 inputRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 normalizedReticleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 uprightExifOrientation:(int)arg7 pipOpacity:(float)arg8;
- (void)_ensureGPUResources;
- (void)_releaseResources;
- (void)_renderAttachedPixelBuffersFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 toPixelBuffer:(struct __CVBuffer { }*)arg2;
- (id)_reticleCIColorForPixelBuffer:(struct __CVBuffer { }*)arg1 opacity:(float)arg2;
- (id)_strokedRectangleImageWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 thickness:(float)arg2 c:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)initWithDelegate:(id)arg1 secondaryCameraStreamingEnabled:(bool)arg2 secondaryCameraFrameRate:(float)arg3 maxLossyCompressionLevel:(int)arg4 isDeviceBravoVariant:(bool)arg5 baseZoomFactorsByPortType:(id)arg6;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
