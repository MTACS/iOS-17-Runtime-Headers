
@interface CAMCaptureEngineDevice : NSObject {
    AVCaptureDeviceFormat * __cachedPanoramaDeviceFormat;
    AVCaptureDeviceFormat * __cachedPortraitDeviceFormat;
    CAMCaptureEngine * __captureEngine;
    CAMMemoizationCache * __videoDeviceFormatForVideoConfiguration;
    CAMMemoizationCache * __videoSessionPresetForVideoConfiguration;
    AVCaptureDevice * _captureDevice;
    AVCaptureDeviceInput * _captureDeviceInput;
}

@property (nonatomic, readonly) AVCaptureDeviceFormat *_cachedPanoramaDeviceFormat;
@property (nonatomic, readonly) AVCaptureDeviceFormat *_cachedPortraitDeviceFormat;
@property (nonatomic, readonly) CAMCaptureEngine *_captureEngine;
@property (nonatomic, readonly) CAMMemoizationCache *_videoDeviceFormatForVideoConfiguration;
@property (nonatomic, readonly) CAMMemoizationCache *_videoSessionPresetForVideoConfiguration;
@property (nonatomic, readonly) AVCaptureDevice *captureDevice;
@property (nonatomic, readonly) AVCaptureDeviceInput *captureDeviceInput;

- (void).cxx_destruct;
- (id)_cachedPanoramaDeviceFormat;
- (id)_cachedPortraitDeviceFormat;
- (id)_captureEngine;
- (id)_highestQualityDeviceFormatForVideoConfiguration:(long long)arg1 videoEncodingBehavior:(long long)arg2 colorSpace:(long long)arg3;
- (id)_highestQualitySessionPresetForVideoConfiguration:(long long)arg1 videoEncodingBehavior:(long long)arg2 colorSpace:(long long)arg3;
- (id)_keyForVideoConfiguration:(long long)arg1 videoEncodingBehavior:(long long)arg2 colorSpace:(long long)arg3;
- (id)_panoramaDeviceFormatForConfiguration:(id)arg1;
- (id)_portraitModeDeviceFormat;
- (id)_portraitModeSessionPreset;
- (id)_timelapseSessionPreset;
- (id)_videoDeviceFormatForVideoConfiguration;
- (id)_videoSessionPresetForVideoConfiguration;
- (id)captureDevice;
- (id)captureDeviceInput;
- (id)initWithEngine:(id)arg1 captureDevice:(id)arg2;
- (id)videoDeviceFormatForGraphConfiguration:(id)arg1;
- (id)videoDevicePresetForGraphConfiguration:(id)arg1;

@end
