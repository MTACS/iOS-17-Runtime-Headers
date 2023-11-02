
@interface VCHardwareOperatingModeSettings : NSObject {
    int  _avcOperatingMode;
    NSString * _featureListStringFixedPositionH264;
    NSString * _featureListStringFixedPositionHEVC;
    NSString * _featureListStringH264;
    NSString * _featureListStringHEVC;
    bool  _supportVCPDecoderHEVC;
    bool  _supportVCPEncoderHEVC;
    unsigned int  _tilesPerVideoFrame;
    unsigned int  _usageMode;
    bool  _vcpInitializedForHEVC;
}

@property (nonatomic, readonly) NSString *featureListStringFixedPositionH264;
@property (nonatomic, readonly) NSString *featureListStringFixedPositionHEVC;
@property (nonatomic, readonly) NSString *featureListStringH264;
@property (nonatomic, readonly) NSString *featureListStringHEVC;
@property (nonatomic, readonly) bool supportVCPDecoderHEVC;
@property (nonatomic, readonly) bool supportVCPEncoderHEVC;
@property (nonatomic, readonly) unsigned int tilesPerVideoFrame;
@property (nonatomic, readonly) unsigned int usageMode;
@property (nonatomic, readonly) bool vcpInitializedForHEVC;

+ (unsigned int)encoderUsageTypeWithOperatingMode:(int)arg1;

- (void)dealloc;
- (id)featureListStringFixedPositionH264;
- (id)featureListStringFixedPositionHEVC;
- (id)featureListStringH264;
- (id)featureListStringHEVC;
- (void)initFeatureListString;
- (id)initWithMode:(int)arg1;
- (unsigned int)numTilesPerVideoFrameForHDRMode:(unsigned long long)arg1;
- (bool)supportVCPDecoderHEVC;
- (bool)supportVCPEncoderHEVC;
- (unsigned int)tilesPerVideoFrame;
- (unsigned int)usageMode;
- (void)vcpCodecGetPropertiesForID:(int)arg1 block:(id /* block */)arg2;
- (bool)vcpInitializedForHEVC;
- (bool)vcpSupportsHEVCDecoder;
- (bool)vcpSupportsHEVCEncoder;

@end
