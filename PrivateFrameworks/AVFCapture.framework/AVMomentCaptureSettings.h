
@interface AVMomentCaptureSettings : NSObject <NSCopying> {
    long long  _HDRMode;
    bool  _autoDeferredPhotoDeliveryEnabled;
    bool  _autoOriginalPhotoDeliveryEnabled;
    bool  _autoRedEyeReductionEnabled;
    bool  _autoSpatialOverCaptureEnabled;
    NSString * _bravoCameraSelectionBehaviorForRecording;
    bool  _depthDataDeliveryEnabled;
    long long  _digitalFlashMode;
    long long  _flashMode;
    struct { 
        int width; 
        int height; 
    }  _maxPhotoDimensions;
    long long  _photoQualityPrioritization;
    AVCapturePhotoSettings * _photoSettings;
    unsigned int  _rawOutputFormat;
    long long  _torchMode;
    long long  _uniqueID;
    unsigned long long  _userInitiatedCaptureTime;
}

@property (nonatomic) long long HDRMode;
@property (getter=isAutoDeferredPhotoDeliveryEnabled, nonatomic) bool autoDeferredPhotoDeliveryEnabled;
@property (getter=isAutoDeferredProcessingEnabled, nonatomic) bool autoDeferredProcessingEnabled;
@property (getter=isAutoOriginalPhotoDeliveryEnabled, nonatomic) bool autoOriginalPhotoDeliveryEnabled;
@property (getter=isAutoRedEyeReductionEnabled, nonatomic) bool autoRedEyeReductionEnabled;
@property (getter=isAutoSpatialOverCaptureEnabled, nonatomic) bool autoSpatialOverCaptureEnabled;
@property (nonatomic, copy) NSString *bravoCameraSelectionBehaviorForRecording;
@property (getter=isDepthDataDeliveryEnabled, nonatomic) bool depthDataDeliveryEnabled;
@property (nonatomic) long long digitalFlashMode;
@property (nonatomic) long long flashMode;
@property (nonatomic) struct { int x1; int x2; } maxPhotoDimensions;
@property (nonatomic) long long photoQualityPrioritization;
@property (nonatomic, readonly) AVCapturePhotoSettings *photoSettings;
@property (nonatomic) unsigned int rawOutputFormat;
@property (nonatomic) long long torchMode;
@property (nonatomic, readonly) long long uniqueID;
@property (nonatomic, readonly) unsigned long long userInitiatedCaptureTime;

+ (id)settingsWithPhotoSettings:(id)arg1;
+ (id)settingsWithUserInitiatedCaptureTime:(unsigned long long)arg1;
+ (id)settingsWithUserInitiatedCaptureTime:(unsigned long long)arg1 uniqueID:(long long)arg2;

- (long long)HDRMode;
- (id)_initWithPhotoSettings:(id)arg1;
- (id)_initWithUserInitiatedCaptureTime:(unsigned long long)arg1 uniqueID:(long long)arg2;
- (id)bravoCameraSelectionBehaviorForRecording;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (long long)digitalFlashMode;
- (long long)flashMode;
- (bool)isAutoDeferredPhotoDeliveryEnabled;
- (bool)isAutoDeferredProcessingEnabled;
- (bool)isAutoOriginalPhotoDeliveryEnabled;
- (bool)isAutoRedEyeReductionEnabled;
- (bool)isAutoSpatialOverCaptureEnabled;
- (bool)isDepthDataDeliveryEnabled;
- (struct { int x1; int x2; })maxPhotoDimensions;
- (long long)photoQualityPrioritization;
- (id)photoSettings;
- (unsigned int)rawOutputFormat;
- (void)setAutoDeferredPhotoDeliveryEnabled:(bool)arg1;
- (void)setAutoDeferredProcessingEnabled:(bool)arg1;
- (void)setAutoOriginalPhotoDeliveryEnabled:(bool)arg1;
- (void)setAutoRedEyeReductionEnabled:(bool)arg1;
- (void)setAutoSpatialOverCaptureEnabled:(bool)arg1;
- (void)setBravoCameraSelectionBehaviorForRecording:(id)arg1;
- (void)setDepthDataDeliveryEnabled:(bool)arg1;
- (void)setDigitalFlashMode:(long long)arg1;
- (void)setFlashMode:(long long)arg1;
- (void)setHDRMode:(long long)arg1;
- (void)setMaxPhotoDimensions:(struct { int x1; int x2; })arg1;
- (void)setPhotoQualityPrioritization:(long long)arg1;
- (void)setRawOutputFormat:(unsigned int)arg1;
- (void)setTorchMode:(long long)arg1;
- (long long)torchMode;
- (long long)uniqueID;
- (unsigned long long)userInitiatedCaptureTime;

@end
