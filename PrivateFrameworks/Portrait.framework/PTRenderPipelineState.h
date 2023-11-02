
@interface PTRenderPipelineState : NSObject <PTRenderState> {
    struct CGSize { 
        double width; 
        double height; 
    }  _colorInputSize;
    int  _colorOutputRotationDegrees;
    struct CGSize { 
        double width; 
        double height; 
    }  _colorOutputSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _colorOutputSizeCropped;
    PTTexture * _intermediateOutput;
    PTMetalContext * _metalContext;
    PTRenderPipelineDescriptor * _pipelineDescritor;
    int  _quality;
    PTRenderEffectManager * _renderEffects;
    <RenderingIntegration> * _renderIntegration;
    unsigned long long  _renderingVersion;
    PTUtil * _util;
    int  conversionGain;
    NSString * description;
    float  focalLenIn35mmFilm;
    int  hwModelID;
    float  networkBias;
    float  noiseScaleFactor;
    int  quality;
    int  rawSensorHeight;
    int  rawSensorWidth;
    int  readNoise_1x;
    int  readNoise_8x;
    int  sensorID;
    int  sourceColorBitDepth;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  totalSensorCrop;
    void visCropFactor;
}

@property (readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } cameraIntrinsicMatrix;
@property (nonatomic) int conversionGain;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float focalLenIn35mmFilm;
@property (readonly) unsigned long long hash;
@property (nonatomic) int hwModelID;
@property (nonatomic) float networkBias;
@property (nonatomic) float noiseScaleFactor;
@property (readonly) int quality;
@property (nonatomic) int rawSensorHeight;
@property (nonatomic) int rawSensorWidth;
@property (nonatomic) int readNoise_1x;
@property (nonatomic) int readNoise_8x;
@property (nonatomic) unsigned long long renderingVersion;
@property (nonatomic) int sensorID;
@property (nonatomic) int sourceColorBitDepth;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } totalSensorCrop;
@property (nonatomic) void visCropFactor;

+ (Class)classForVersion:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)addRenderEffect:(id)arg1;
- (void)adjustScissorRect:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })cameraIntrinsicMatrix;
- (int)conversionGain;
- (id)description;
- (int)encodeRenderTo:(id)arg1 withRenderRequest:(id)arg2;
- (float)focalLenIn35mmFilm;
- (int)hwModelID;
- (id)initWithPipelineDescriptor:(id)arg1 metalContext:(id)arg2 quality:(int)arg3;
- (float)networkBias;
- (float)noiseScaleFactor;
- (bool)prepareForRendering;
- (bool)prepareForRendering:(bool)arg1;
- (int)quality;
- (int)rawSensorHeight;
- (int)rawSensorWidth;
- (int)readNoise_1x;
- (int)readNoise_8x;
- (unsigned long long)renderingVersion;
- (int)sensorID;
- (void)setConversionGain:(int)arg1;
- (void)setFocalLenIn35mmFilm:(float)arg1;
- (void)setHwModelID:(int)arg1;
- (void)setNetworkBias:(float)arg1;
- (void)setNoiseScaleFactor:(float)arg1;
- (void)setRawSensorHeight:(int)arg1;
- (void)setRawSensorWidth:(int)arg1;
- (void)setReadNoise_1x:(int)arg1;
- (void)setReadNoise_8x:(int)arg1;
- (void)setRenderingVersion:(unsigned long long)arg1;
- (void)setSensorID:(int)arg1;
- (void)setSourceColorBitDepth:(int)arg1;
- (void)setTotalSensorCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVisCropFactor;
- (int)sourceColorBitDepth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })totalSensorCrop;
- (void)visCropFactor;

@end
