
@interface PTGlobalRenderingMetadataVersion1 : PTGlobalRenderingMetadata {
    unsigned int  _conversionGain;
    float  _defaultAperture;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _extrinsicsMatrix;
    float  _focalLength35mm;
    float  _highlightBoostFactor;
    float  _highlightChromaFactor;
    unsigned int  _hwModelID;
    float  _maxAperture;
    float  _minAperture;
    float  _networkBias;
    float  _noiseScaleFactor;
    struct { 
        int width; 
        int height; 
    }  _rawSensorSize;
    unsigned int  _readNoise1x;
    unsigned int  _readNoise8x;
    bool  _readSuccessAll;
    unsigned int  _renderingVersion;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sensorCropRect;
    unsigned int  _sensorID;
    unsigned int  _sourceColorBitDepth;
    void _visCropFactor;
}

@property (nonatomic) unsigned int conversionGain;
@property (nonatomic) float defaultAperture;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } extrinsicsMatrix;
@property (nonatomic) float focalLength35mm;
@property (nonatomic) float highlightBoostFactor;
@property (nonatomic) float highlightChromaFactor;
@property (nonatomic) unsigned int hwModelID;
@property (nonatomic) float maxAperture;
@property (nonatomic) float minAperture;
@property (nonatomic) float networkBias;
@property (nonatomic) float noiseScaleFactor;
@property (nonatomic) struct { int x1; int x2; } rawSensorSize;
@property (nonatomic) unsigned int readNoise1x;
@property (nonatomic) unsigned int readNoise8x;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sensorCropRect;
@property (nonatomic) unsigned int sensorID;
@property (nonatomic) unsigned int sourceColorBitDepth;
@property (nonatomic) void visCropFactor;

- (void)applyToRenderRequest:(id)arg1;
- (void)applyToRenderState:(id)arg1;
- (bool)applyToRenderState:(id)arg1 error:(id*)arg2;
- (unsigned int)conversionGain;
- (float)defaultAperture;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })extrinsicsMatrix;
- (float)focalLength35mm;
- (float)highlightBoostFactor;
- (float)highlightChromaFactor;
- (unsigned int)hwModelID;
- (id)initWithData:(id)arg1;
- (id)initWithMinorVersion:(unsigned int)arg1;
- (bool)matchesRenderState:(id)arg1;
- (float)maxAperture;
- (float)minAperture;
- (bool)nanAwareEqual:(float)arg1 with:(float)arg2;
- (float)networkBias;
- (float)noiseScaleFactor;
- (struct { int x1; int x2; })rawSensorSize;
- (unsigned int)readNoise1x;
- (unsigned int)readNoise8x;
- (unsigned int)renderingVersion;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sensorCropRect;
- (unsigned int)sensorID;
- (void)setConversionGain:(unsigned int)arg1;
- (void)setDefaultAperture:(float)arg1;
- (void)setExtrinsicsMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setFocalLength35mm:(float)arg1;
- (void)setHighlightBoostFactor:(float)arg1;
- (void)setHighlightChromaFactor:(float)arg1;
- (void)setHwModelID:(unsigned int)arg1;
- (void)setMaxAperture:(float)arg1;
- (void)setMinAperture:(float)arg1;
- (void)setNetworkBias:(float)arg1;
- (void)setNoiseScaleFactor:(float)arg1;
- (void)setRawSensorSize:(struct { int x1; int x2; })arg1;
- (void)setReadNoise1x:(unsigned int)arg1;
- (void)setReadNoise8x:(unsigned int)arg1;
- (void)setRenderingVersion:(unsigned int)arg1;
- (void)setSensorCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSensorID:(unsigned int)arg1;
- (void)setSourceColorBitDepth:(unsigned int)arg1;
- (void)setVisCropFactor;
- (unsigned int)sizeOfSerializedObjectWithOptions:(id)arg1;
- (unsigned int)sourceColorBitDepth;
- (void)visCropFactor;
- (bool)writeToData:(id)arg1 withOptions:(id)arg2;

@end
