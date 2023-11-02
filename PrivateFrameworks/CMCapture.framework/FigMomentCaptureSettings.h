
@interface FigMomentCaptureSettings : NSObject <NSCopying, NSSecureCoding> {
    int  _HDRMode;
    bool  _autoDeferredProcessingEnabled;
    bool  _autoOriginalPhotoDeliveryEnabled;
    bool  _autoRedEyeReductionEnabled;
    bool  _autoSpatialOverCaptureEnabled;
    NSString * _captureRequestIdentifier;
    int  _clientQualityPrioritization;
    bool  _depthDataDeliveryEnabled;
    int  _digitalFlashMode;
    int  _flashMode;
    unsigned int  _outputHeight;
    unsigned int  _outputWidth;
    int  _qualityPrioritization;
    unsigned int  _rawOutputFormat;
    long long  _settingsID;
    FigCaptureIrisStillImageSettings * _stillImageSettings;
    int  _torchMode;
    unsigned long long  _userInitiatedCaptureTime;
}

@property (nonatomic) int HDRMode;
@property (getter=isAutoDeferredProcessingEnabled, nonatomic) bool autoDeferredProcessingEnabled;
@property (getter=isAutoOriginalPhotoDeliveryEnabled, nonatomic) bool autoOriginalPhotoDeliveryEnabled;
@property (nonatomic) bool autoRedEyeReductionEnabled;
@property (getter=isAutoSpatialOverCaptureEnabled, nonatomic) bool autoSpatialOverCaptureEnabled;
@property (nonatomic, readonly) NSString *captureRequestIdentifier;
@property (nonatomic) int clientQualityPrioritization;
@property (nonatomic) bool depthDataDeliveryEnabled;
@property (nonatomic) int digitalFlashMode;
@property (nonatomic) int flashMode;
@property (nonatomic) unsigned int outputHeight;
@property (nonatomic) unsigned int outputWidth;
@property (nonatomic) int qualityPrioritization;
@property (nonatomic) unsigned int rawOutputFormat;
@property (nonatomic, readonly) long long settingsID;
@property (nonatomic, readonly) FigCaptureIrisStillImageSettings *stillImageSettings;
@property (nonatomic) int torchMode;
@property (nonatomic, readonly) unsigned long long userInitiatedCaptureTime;

+ (bool)supportsSecureCoding;

- (int)HDRMode;
- (bool)autoRedEyeReductionEnabled;
- (id)captureRequestIdentifier;
- (int)clientQualityPrioritization;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)depthDataDeliveryEnabled;
- (id)description;
- (int)digitalFlashMode;
- (void)encodeWithCoder:(id)arg1;
- (int)flashMode;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSettingsID:(long long)arg1 captureRequestIdentifier:(id)arg2 userInitiatedCaptureTime:(unsigned long long)arg3;
- (id)initWithStillImageSettings:(id)arg1;
- (bool)isAutoDeferredProcessingEnabled;
- (bool)isAutoOriginalPhotoDeliveryEnabled;
- (bool)isAutoSpatialOverCaptureEnabled;
- (bool)isEqual:(id)arg1;
- (unsigned int)outputHeight;
- (unsigned int)outputWidth;
- (int)qualityPrioritization;
- (unsigned int)rawOutputFormat;
- (void)setAutoDeferredProcessingEnabled:(bool)arg1;
- (void)setAutoOriginalPhotoDeliveryEnabled:(bool)arg1;
- (void)setAutoRedEyeReductionEnabled:(bool)arg1;
- (void)setAutoSpatialOverCaptureEnabled:(bool)arg1;
- (void)setClientQualityPrioritization:(int)arg1;
- (void)setDepthDataDeliveryEnabled:(bool)arg1;
- (void)setDigitalFlashMode:(int)arg1;
- (void)setFlashMode:(int)arg1;
- (void)setHDRMode:(int)arg1;
- (void)setOutputHeight:(unsigned int)arg1;
- (void)setOutputWidth:(unsigned int)arg1;
- (void)setQualityPrioritization:(int)arg1;
- (void)setRawOutputFormat:(unsigned int)arg1;
- (void)setTorchMode:(int)arg1;
- (long long)settingsID;
- (id)stillImageSettings;
- (int)torchMode;
- (unsigned long long)userInitiatedCaptureTime;

@end
