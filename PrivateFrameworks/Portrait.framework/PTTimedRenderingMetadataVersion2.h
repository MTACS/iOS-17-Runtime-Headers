
@interface PTTimedRenderingMetadataVersion2 : PTTimedRenderingMetadata {
    unsigned int  _AGC;
    float  _alphaLowLight;
    unsigned int  _conversionGain;
    float  _fNumber;
    float  _focalLenIn35mmFilm;
    float  _focusDisparity;
    unsigned int  _frameId;
    unsigned int  _readNoise_1x;
    unsigned int  _readNoise_8x;
    bool  _readSuccessAll;
    struct CGSize { 
        double width; 
        double height; 
    }  _totalSensorCropRectSize;
    void _visCropFactor;
}

@property (nonatomic) unsigned int AGC;
@property (nonatomic) float alphaLowLight;
@property (nonatomic) unsigned int conversionGain;
@property (nonatomic) float fNumber;
@property (nonatomic) float focalLenIn35mmFilm;
@property (nonatomic) float focusDisparity;
@property (nonatomic) unsigned int frameId;
@property (nonatomic) unsigned int readNoise_1x;
@property (nonatomic) unsigned int readNoise_8x;
@property (nonatomic) struct CGSize { double x1; double x2; } totalSensorCropRectSize;
@property (nonatomic) void visCropFactor;

- (unsigned int)AGC;
- (float)alphaLowLight;
- (void)applyToRenderRequest:(id)arg1;
- (unsigned int)conversionGain;
- (float)fNumber;
- (float)focalLenIn35mmFilm;
- (float)focusDisparity;
- (unsigned int)frameId;
- (id)initWithData:(id)arg1 minorVersion:(unsigned int)arg2;
- (id)initWithMinorVersion:(unsigned int)arg1;
- (unsigned int)readNoise_1x;
- (unsigned int)readNoise_8x;
- (void)setAGC:(unsigned int)arg1;
- (void)setAlphaLowLight:(float)arg1;
- (void)setConversionGain:(unsigned int)arg1;
- (void)setFNumber:(float)arg1;
- (void)setFocalLenIn35mmFilm:(float)arg1;
- (void)setFocusDisparity:(float)arg1;
- (void)setFrameId:(unsigned int)arg1;
- (void)setReadNoise_1x:(unsigned int)arg1;
- (void)setReadNoise_8x:(unsigned int)arg1;
- (void)setTotalSensorCropRectSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setVisCropFactor;
- (unsigned int)sizeOfSerializedObjectWithOptions:(id)arg1;
- (struct CGSize { double x1; double x2; })totalSensorCropRectSize;
- (void)visCropFactor;
- (bool)writeToData:(id)arg1 withOptions:(id)arg2;

@end
