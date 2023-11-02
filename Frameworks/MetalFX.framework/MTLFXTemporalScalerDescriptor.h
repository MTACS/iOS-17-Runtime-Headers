
@interface MTLFXTemporalScalerDescriptor : NSObject <NSCopying> {
    unsigned long long  _outputTextureFormat;
    bool  autoExposureEnabled;
    unsigned long long  colorTextureFormat;
    unsigned long long  depthTextureFormat;
    float  inputContentMaxScale;
    float  inputContentMinScale;
    bool  inputContentPropertiesEnabled;
    unsigned long long  inputHeight;
    unsigned long long  inputWidth;
    unsigned long long  motionTextureFormat;
    unsigned long long  outputHeight;
    unsigned long long  outputWidth;
    unsigned long long  version;
}

@property (getter=isAutoExposureEnabled, nonatomic) bool autoExposureEnabled;
@property (nonatomic) unsigned long long colorTextureFormat;
@property (nonatomic) unsigned long long depthTextureFormat;
@property (nonatomic) float inputContentMaxScale;
@property (nonatomic) float inputContentMinScale;
@property (getter=isInputContentPropertiesEnabled, nonatomic) bool inputContentPropertiesEnabled;
@property (nonatomic) unsigned long long inputHeight;
@property (nonatomic) unsigned long long inputWidth;
@property (nonatomic) unsigned long long motionTextureFormat;
@property (nonatomic) unsigned long long outputHeight;
@property (nonatomic) unsigned long long outputTextureFormat;
@property (nonatomic) unsigned long long outputWidth;
@property unsigned long long version;

+ (float)supportedInputContentMaxScaleForDevice:(id)arg1;
+ (float)supportedInputContentMinScaleForDevice:(id)arg1;
+ (bool)supportsDevice:(id)arg1;

- (unsigned long long)colorTextureFormat;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)depthTextureFormat;
- (bool)enableInputContentProperties;
- (float)inputContentMaxScale;
- (float)inputContentMinScale;
- (unsigned long long)inputHeight;
- (unsigned long long)inputWidth;
- (bool)isAutoExposureEnabled;
- (bool)isInputContentPropertiesEnabled;
- (unsigned long long)motionTextureFormat;
- (id)newTemporalScalerWithDevice:(id)arg1;
- (id)newTemporalScalerWithHistoryTexture:(id)arg1;
- (unsigned long long)outputHeight;
- (unsigned long long)outputTextureFormat;
- (unsigned long long)outputWidth;
- (void)setAutoExposureEnabled:(bool)arg1;
- (void)setColorTextureFormat:(unsigned long long)arg1;
- (void)setDepthTextureFormat:(unsigned long long)arg1;
- (void)setEnableInputContentProperties:(bool)arg1;
- (void)setInputContentMaxScale:(float)arg1;
- (void)setInputContentMinScale:(float)arg1;
- (void)setInputContentPropertiesEnabled:(bool)arg1;
- (void)setInputHeight:(unsigned long long)arg1;
- (void)setInputWidth:(unsigned long long)arg1;
- (void)setMotionTextureFormat:(unsigned long long)arg1;
- (void)setOutputHeight:(unsigned long long)arg1;
- (void)setOutputTextureFormat:(unsigned long long)arg1;
- (void)setOutputWidth:(unsigned long long)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned long long)version;

@end
