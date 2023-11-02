
@interface CAMUserPreferenceOverrides : NSObject {
    NSNumber * _aspectRatioCrop;
    NSNumber * _captureDevice;
    NSNumber * _captureMode;
    NSNumber * _cinematicConfiguration;
    NSNumber * _flashMode;
    NSNumber * _slomoConfiguration;
    NSNumber * _torchMode;
    NSNumber * _videoConfiguration;
    NSNumber * _wantsQRCodes;
}

@property (nonatomic, retain) NSNumber *aspectRatioCrop;
@property (nonatomic, retain) NSNumber *captureDevice;
@property (nonatomic, retain) NSNumber *captureMode;
@property (nonatomic, retain) NSNumber *cinematicConfiguration;
@property (nonatomic, retain) NSNumber *flashMode;
@property (nonatomic, readonly) bool hasOverrides;
@property (nonatomic, retain) NSNumber *slomoConfiguration;
@property (nonatomic, retain) NSNumber *torchMode;
@property (nonatomic, retain) NSNumber *videoConfiguration;
@property (nonatomic, retain) NSNumber *wantsQRCodes;

- (void).cxx_destruct;
- (id)aspectRatioCrop;
- (id)captureDevice;
- (id)captureMode;
- (id)cinematicConfiguration;
- (id)flashMode;
- (bool)hasOverrides;
- (id)initWithConfigurationURL:(id)arg1;
- (id)initWithLaunchOptions:(id)arg1;
- (id)initWithOverrides:(id)arg1;
- (id)initWithShortcutItem:(id)arg1;
- (void)setAspectRatioCrop:(id)arg1;
- (void)setCaptureDevice:(id)arg1;
- (void)setCaptureMode:(id)arg1;
- (void)setCinematicConfiguration:(id)arg1;
- (void)setFlashMode:(id)arg1;
- (void)setSlomoConfiguration:(id)arg1;
- (void)setTorchMode:(id)arg1;
- (void)setVideoConfiguration:(id)arg1;
- (void)setWantsQRCodes:(id)arg1;
- (id)slomoConfiguration;
- (id)torchMode;
- (id)videoConfiguration;
- (id)wantsQRCodes;

@end
