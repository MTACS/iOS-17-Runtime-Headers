
@interface BWEspressoInferenceBoundingBoxPropagator : NSObject <BWInferencePropagatable> {
    float  _angularOffsetExponentialSmoothing;
    BWInferenceDataRequirement * _angularOffsetRequirement;
    BWInferenceDataRequirement * _boxRequirement;
    struct BWSmartCameraScene { 
        bool enabled; 
        bool confident; 
        float confidenceFilterRatio; 
        float filteredConfidence; 
        float confidenceThreshold; 
        float confidenceHysteresisValueLag; 
        short confidenceHysteresisTemporalLagBeforeConfident; 
        short confidenceHysteresisTemporalLagBeforeNotConfident; 
        short currentTemporalHysteresis; 
        bool resetTemporalHysteresisAndFilteringOnNextUpdate; 
        char *name; 
    }  _filterTemplate;
    BWInferenceDataRequirement * _fontSizeRequirement;
    float  _fontSizeStartReportingThreshold;
    float  _fontSizeStopReportingThreshold;
    bool  _inferenceInputUsesPortraitOrientation;
    NSString * _inferenceResultKey;
    float  _interiorPadding;
    unsigned long long  _lastRegionCount;
    struct { long long x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; bool x3; float x4; float x5; float x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; float x8; struct BWSmartCameraScene { bool x_9_1_1; bool x_9_1_2; float x_9_1_3; float x_9_1_4; float x_9_1_5; float x_9_1_6; short x_9_1_7; short x_9_1_8; short x_9_1_9; bool x_9_1_10; char *x_9_1_11; } x9; } * _lastRegions;
    FigCaptureLogSmartCameraGating * _logger;
    FTBipartiteMatcher * _matcher;
    float  _maxMatchCost;
    long long  _maxRegionID;
    BWInferenceDataRequirement * _scoreRequirement;
    bool  _suppressInterior;
    float  _trackingThreshold;
}

@property (nonatomic, readonly) bool allowsAsyncPropagation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (bool)allowsAsyncPropagation;
- (void)dealloc;
- (id)initWithBoxRequirement:(id)arg1 scoreRequirement:(id)arg2 angularOffsetRequirement:(id)arg3 fontSizeRequirement:(id)arg4 configuration:(id)arg5 toInferenceResultKey:(id)arg6;
- (void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 propagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg4;

@end
