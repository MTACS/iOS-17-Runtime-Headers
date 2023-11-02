
@interface BWDeferredPipelineParameters : NSObject <NSCopying, NSSecureCoding> {
    bool  _canProcessEnhancedResolution;
    bool  _continuousZoomWithDepthSupported;
    bool  _dcProcessingWithDepthSupported;
    int  _deepZoomMode;
    int  _deepZoomVersion;
    int  _distortionCorrectionVersion;
    bool  _generateInferencesForSemanticProcessingIfNeeded;
    bool  _geometricDistortionCorrectionEnabled;
    bool  _intelligentDistortionCorrectionEnabled;
    int  _noiseReductionAndFusionScheme;
    int  _nrfVersion;
    int  _pearlModuleType;
    bool  _quadraProcessingSupportEnabled;
    int  _semanticRenderingVersion;
}

@property (nonatomic) bool canProcessEnhancedResolution;
@property (nonatomic) bool continuousZoomWithDepthSupported;
@property (nonatomic) bool dcProcessingWithDepthSupported;
@property (nonatomic) int deepZoomMode;
@property (nonatomic) int deepZoomVersion;
@property (nonatomic) int distortionCorrectionVersion;
@property (nonatomic) bool generateInferencesForSemanticProcessingIfNeeded;
@property (nonatomic) bool geometricDistortionCorrectionEnabled;
@property (nonatomic) bool intelligentDistortionCorrectionEnabled;
@property (nonatomic) int noiseReductionAndFusionScheme;
@property (nonatomic) int nrfVersion;
@property (nonatomic) int pearlModuleType;
@property (nonatomic) bool quadraProcessingSupportEnabled;
@property (nonatomic) int semanticRenderingVersion;

+ (bool)supportsSecureCoding;

- (bool)canProcessEnhancedResolution;
- (bool)continuousZoomWithDepthSupported;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)dcProcessingWithDepthSupported;
- (int)deepZoomMode;
- (int)deepZoomVersion;
- (id)description;
- (int)distortionCorrectionVersion;
- (void)encodeWithCoder:(id)arg1;
- (bool)generateInferencesForSemanticProcessingIfNeeded;
- (bool)geometricDistortionCorrectionEnabled;
- (id)initWithCoder:(id)arg1;
- (bool)intelligentDistortionCorrectionEnabled;
- (bool)isEqual:(id)arg1;
- (int)noiseReductionAndFusionScheme;
- (int)nrfVersion;
- (int)pearlModuleType;
- (bool)quadraProcessingSupportEnabled;
- (int)semanticRenderingVersion;
- (void)setCanProcessEnhancedResolution:(bool)arg1;
- (void)setContinuousZoomWithDepthSupported:(bool)arg1;
- (void)setDcProcessingWithDepthSupported:(bool)arg1;
- (void)setDeepZoomMode:(int)arg1;
- (void)setDeepZoomVersion:(int)arg1;
- (void)setDistortionCorrectionVersion:(int)arg1;
- (void)setGenerateInferencesForSemanticProcessingIfNeeded:(bool)arg1;
- (void)setGeometricDistortionCorrectionEnabled:(bool)arg1;
- (void)setIntelligentDistortionCorrectionEnabled:(bool)arg1;
- (void)setNoiseReductionAndFusionScheme:(int)arg1;
- (void)setNrfVersion:(int)arg1;
- (void)setPearlModuleType:(int)arg1;
- (void)setQuadraProcessingSupportEnabled:(bool)arg1;
- (void)setSemanticRenderingVersion:(int)arg1;

@end
