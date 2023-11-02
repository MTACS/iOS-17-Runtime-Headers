
@interface NTKKaleidoscopeQuad : CLKUIQuad {
    float  _alpha;
    void _aspect;
    float  _dialRadius;
    <MTLBuffer> * _geomBuffer;
    float  _lineThickness;
    NTKKaleidoscopeResourceManager * _loader;
    <MTLRenderPipelineState> * _mtlPipelineBlend;
    <MTLRenderPipelineState> * _mtlPipelineOpaque;
    CLKUITexture * _primaryChromaTexture;
    CLKUITexture * _primaryLumaTexture;
    float  _rotation;
    void _sampleCenter;
    void _sampleRadius;
    CLKUITexture * _secondaryTexture;
    unsigned long long  _shaderType;
}

@property (nonatomic) float alpha;
@property (nonatomic) float dialRadius;
@property (nonatomic) float lineThickness;
@property (nonatomic, retain) CLKUITexture *primaryChromaTexture;
@property (nonatomic, retain) CLKUITexture *primaryLumaTexture;
@property (nonatomic) float rotation;
@property (nonatomic) void sampleCenter;
@property (nonatomic) void sampleRadius;
@property (nonatomic, retain) CLKUITexture *secondaryTexture;
@property (nonatomic, readonly) unsigned long long shaderType;

+ (id)quadWithShaderType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (float)alpha;
- (void)dealloc;
- (float)dialRadius;
- (id)geomBuffer;
- (id)initWithShaderType:(unsigned long long)arg1;
- (float)lineThickness;
- (id)mtlPipelineBlend;
- (id)mtlPipelineOpaque;
- (bool)prepareForTime:(double)arg1;
- (id)primaryChromaTexture;
- (id)primaryLumaTexture;
- (void)purge;
- (void)renderForDisplayWithEncoder:(id)arg1;
- (float)rotation;
- (void)sampleCenter;
- (void)sampleRadius;
- (id)secondaryTexture;
- (void)setAlpha:(float)arg1;
- (void)setDialRadius:(float)arg1;
- (void)setLineThickness:(float)arg1;
- (void)setPrimaryChromaTexture:(id)arg1;
- (void)setPrimaryLumaTexture:(id)arg1;
- (void)setRotation:(float)arg1;
- (void)setSampleCenter;
- (void)setSampleRadius;
- (void)setSecondaryTexture:(id)arg1;
- (void)setupForQuadView:(id)arg1;
- (unsigned long long)shaderType;

@end
