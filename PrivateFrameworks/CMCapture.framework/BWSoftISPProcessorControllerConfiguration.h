
@interface BWSoftISPProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration {
    bool  _cmiResourceEnabled;
    bool  _deepFusionEnabled;
    bool  _gdcEnabled;
    struct { 
        int width; 
        int height; 
    }  _inputDimensions;
    bool  _learnedNREnabled;
    bool  _linearRGBForDisparityEnabled;
    int  _lossyCompressionLevel;
    bool  _ltmHDRCurvesEnabled;
    struct { 
        int width; 
        int height; 
    }  _outputDimensions;
    int  _qBinProcessingMode;
    bool  _quadraProcessingEnabled;
    bool  _rawNightModeEnabled;
    unsigned int  _sensorRawPixelFormat;
    bool  _sfhrSupportEnabled;
    bool  _standardYUVProcessingEnabled;
    struct { 
        int width; 
        int height; 
    }  _ultraHighResolutionInputDimensions;
    struct { 
        int width; 
        int height; 
    }  _ultraHighResolutionOutputDimensions;
}

@property (nonatomic) bool cmiResourceEnabled;
@property (nonatomic) bool deepFusionEnabled;
@property (nonatomic) bool gdcEnabled;
@property (nonatomic) struct { int x1; int x2; } inputDimensions;
@property (nonatomic) bool learnedNREnabled;
@property (nonatomic) bool linearRGBForDisparityEnabled;
@property (nonatomic) int lossyCompressionLevel;
@property (nonatomic) bool ltmHDRCurvesEnabled;
@property (nonatomic) struct { int x1; int x2; } outputDimensions;
@property (nonatomic) int qBinProcessingMode;
@property (nonatomic) bool quadraProcessingEnabled;
@property (nonatomic) bool rawNightModeEnabled;
@property (nonatomic) unsigned int sensorRawPixelFormat;
@property (nonatomic) bool sfhrSupportEnabled;
@property (nonatomic) bool standardYUVProcessingEnabled;
@property (nonatomic) struct { int x1; int x2; } ultraHighResolutionInputDimensions;
@property (nonatomic) struct { int x1; int x2; } ultraHighResolutionOutputDimensions;

- (bool)cmiResourceEnabled;
- (bool)deepFusionEnabled;
- (bool)gdcEnabled;
- (struct { int x1; int x2; })inputDimensions;
- (bool)learnedNREnabled;
- (bool)linearRGBForDisparityEnabled;
- (int)lossyCompressionLevel;
- (bool)ltmHDRCurvesEnabled;
- (struct { int x1; int x2; })outputDimensions;
- (int)qBinProcessingMode;
- (bool)quadraProcessingEnabled;
- (bool)rawNightModeEnabled;
- (unsigned int)sensorRawPixelFormat;
- (void)setCmiResourceEnabled:(bool)arg1;
- (void)setDeepFusionEnabled:(bool)arg1;
- (void)setGdcEnabled:(bool)arg1;
- (void)setInputDimensions:(struct { int x1; int x2; })arg1;
- (void)setLearnedNREnabled:(bool)arg1;
- (void)setLinearRGBForDisparityEnabled:(bool)arg1;
- (void)setLossyCompressionLevel:(int)arg1;
- (void)setLtmHDRCurvesEnabled:(bool)arg1;
- (void)setOutputDimensions:(struct { int x1; int x2; })arg1;
- (void)setQBinProcessingMode:(int)arg1;
- (void)setQuadraProcessingEnabled:(bool)arg1;
- (void)setRawNightModeEnabled:(bool)arg1;
- (void)setSensorRawPixelFormat:(unsigned int)arg1;
- (void)setSfhrSupportEnabled:(bool)arg1;
- (void)setStandardYUVProcessingEnabled:(bool)arg1;
- (void)setUltraHighResolutionInputDimensions:(struct { int x1; int x2; })arg1;
- (void)setUltraHighResolutionOutputDimensions:(struct { int x1; int x2; })arg1;
- (bool)sfhrSupportEnabled;
- (bool)standardYUVProcessingEnabled;
- (struct { int x1; int x2; })ultraHighResolutionInputDimensions;
- (struct { int x1; int x2; })ultraHighResolutionOutputDimensions;

@end
