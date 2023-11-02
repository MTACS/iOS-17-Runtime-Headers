
@interface WFCameraCaptureCapabilities : NSObject {
    CAMCaptureCapabilities * _capabilities;
}

@property (nonatomic, readonly) CAMCaptureCapabilities *capabilities;

+ (id)capabilities;

- (void).cxx_destruct;
- (id)capabilities;
- (id)init;
- (bool)isSupportedMode:(long long)arg1 withDevice:(long long)arg2;

@end
