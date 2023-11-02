
@interface VNGeneratePersonSegmentationRequestConfiguration : VNStatefulRequestConfiguration {
    bool  _keepRawOutputMask;
    float  _minimumConfidence;
    unsigned int  _outputPixelFormat;
    unsigned long long  _qualityLevel;
    bool  _useTiling;
}

@property (nonatomic) bool keepRawOutputMask;
@property (nonatomic) float minimumConfidence;
@property (nonatomic) unsigned int outputPixelFormat;
@property (nonatomic) unsigned long long qualityLevel;
@property (nonatomic) bool useTiling;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRequestClass:(Class)arg1;
- (bool)keepRawOutputMask;
- (float)minimumConfidence;
- (unsigned int)outputPixelFormat;
- (unsigned long long)qualityLevel;
- (void)setKeepRawOutputMask:(bool)arg1;
- (void)setMinimumConfidence:(float)arg1;
- (void)setOutputPixelFormat:(unsigned int)arg1;
- (void)setQualityLevel:(unsigned long long)arg1;
- (void)setUseTiling:(bool)arg1;
- (bool)useTiling;

@end
