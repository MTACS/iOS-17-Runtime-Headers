
@interface FigCaptureVideoPreviewSinkConfiguration : FigCaptureSinkConfiguration {
    bool  _depthDataDeliveryEnabled;
    bool  _filterRenderingEnabled;
    NSArray * _filters;
    bool  _portraitAutoSuggestEnabled;
    float  _portraitLightingEffectStrength;
    double  _primaryCaptureRectAspectRatio;
    struct CGPoint { 
        double x; 
        double y; 
    }  _primaryCaptureRectCenter;
    bool  _primaryCaptureRectModificationEnabled;
    long long  _primaryCaptureRectUniqueID;
    FigCaptureSemanticStyle * _semanticStyle;
    bool  _semanticStyleRenderingEnabled;
    float  _simulatedAperture;
    bool  _zoomPIPOverlayEnabled;
}

@property (nonatomic) bool depthDataDeliveryEnabled;
@property (nonatomic) bool filterRenderingEnabled;
@property (nonatomic, copy) NSArray *filters;
@property (nonatomic) bool portraitAutoSuggestEnabled;
@property (nonatomic) float portraitLightingEffectStrength;
@property (nonatomic) double primaryCaptureRectAspectRatio;
@property (nonatomic) struct CGPoint { double x1; double x2; } primaryCaptureRectCenter;
@property (nonatomic) bool primaryCaptureRectModificationEnabled;
@property (nonatomic) long long primaryCaptureRectUniqueID;
@property (nonatomic, retain) FigCaptureSemanticStyle *semanticStyle;
@property (nonatomic) bool semanticStyleRenderingEnabled;
@property (nonatomic) float simulatedAperture;
@property (nonatomic) bool zoomPIPOverlayEnabled;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (bool)depthDataDeliveryEnabled;
- (id)description;
- (bool)filterRenderingEnabled;
- (id)filters;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)portraitAutoSuggestEnabled;
- (float)portraitLightingEffectStrength;
- (double)primaryCaptureRectAspectRatio;
- (struct CGPoint { double x1; double x2; })primaryCaptureRectCenter;
- (bool)primaryCaptureRectModificationEnabled;
- (long long)primaryCaptureRectUniqueID;
- (id)semanticStyle;
- (bool)semanticStyleRenderingEnabled;
- (void)setDepthDataDeliveryEnabled:(bool)arg1;
- (void)setFilterRenderingEnabled:(bool)arg1;
- (void)setFilters:(id)arg1;
- (void)setPortraitAutoSuggestEnabled:(bool)arg1;
- (void)setPortraitLightingEffectStrength:(float)arg1;
- (void)setPrimaryCaptureRectAspectRatio:(double)arg1;
- (void)setPrimaryCaptureRectCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPrimaryCaptureRectModificationEnabled:(bool)arg1;
- (void)setPrimaryCaptureRectUniqueID:(long long)arg1;
- (void)setSemanticStyle:(id)arg1;
- (void)setSemanticStyleRenderingEnabled:(bool)arg1;
- (void)setSimulatedAperture:(float)arg1;
- (void)setZoomPIPOverlayEnabled:(bool)arg1;
- (float)simulatedAperture;
- (int)sinkType;
- (bool)zoomPIPOverlayEnabled;

@end
