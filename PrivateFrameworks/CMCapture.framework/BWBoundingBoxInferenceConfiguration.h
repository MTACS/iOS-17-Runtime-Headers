
@interface BWBoundingBoxInferenceConfiguration : BWInferenceConfiguration {
    float  _angularOffsetExponentialSmoothing;
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
    }  _confidenceFilterSettings;
    float  _fontSizeStartReportingThreshold;
    float  _fontSizeStopReportingThreshold;
    bool  _inferenceInputUsesPortraitOrientation;
    bool  _interiorSuppression;
    float  _interiorSuppressionPadding;
    FigCaptureLogSmartCameraGating * _logger;
    float  _maxMatchCost;
    float  _trackingThreshold;
}

@property (nonatomic) float angularOffsetExponentialSmoothing;
@property (nonatomic) struct BWSmartCameraScene { bool x1; bool x2; float x3; float x4; float x5; float x6; short x7; short x8; short x9; bool x10; char *x11; } confidenceFilterSettings;
@property (nonatomic) float fontSizeStartReportingThreshold;
@property (nonatomic) float fontSizeStopReportingThreshold;
@property (nonatomic) bool inferenceInputUsesPortraitOrientation;
@property (nonatomic) bool interiorSuppression;
@property (nonatomic) float interiorSuppressionPadding;
@property (nonatomic, retain) FigCaptureLogSmartCameraGating *logger;
@property (nonatomic) float maxMatchCost;
@property (nonatomic) float trackingThreshold;

+ (void)initialize;

- (float)angularOffsetExponentialSmoothing;
- (struct BWSmartCameraScene { bool x1; bool x2; float x3; float x4; float x5; float x6; short x7; short x8; short x9; bool x10; char *x11; })confidenceFilterSettings;
- (void)dealloc;
- (float)fontSizeStartReportingThreshold;
- (float)fontSizeStopReportingThreshold;
- (bool)inferenceInputUsesPortraitOrientation;
- (bool)interiorSuppression;
- (float)interiorSuppressionPadding;
- (id)logger;
- (float)maxMatchCost;
- (void)setAngularOffsetExponentialSmoothing:(float)arg1;
- (void)setConfidenceFilterSettings:(struct BWSmartCameraScene { bool x1; bool x2; float x3; float x4; float x5; float x6; short x7; short x8; short x9; bool x10; char *x11; })arg1;
- (void)setFontSizeStartReportingThreshold:(float)arg1;
- (void)setFontSizeStopReportingThreshold:(float)arg1;
- (void)setInferenceInputUsesPortraitOrientation:(bool)arg1;
- (void)setInteriorSuppression:(bool)arg1;
- (void)setInteriorSuppressionPadding:(float)arg1;
- (void)setLogger:(id)arg1;
- (void)setMaxMatchCost:(float)arg1;
- (void)setTrackingThreshold:(float)arg1;
- (float)trackingThreshold;

@end
