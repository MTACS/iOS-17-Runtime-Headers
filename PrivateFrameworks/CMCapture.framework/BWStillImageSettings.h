
@interface BWStillImageSettings : NSObject <NSSecureCoding> {
    BWStillImageCaptureSettings * _captureSettings;
    BWStillImageProcessingSettings * _processingSettings;
    FigCaptureStillImageSettings * _requestedSettings;
}

@property (nonatomic, readonly) BWStillImageCaptureSettings *captureSettings;
@property (nonatomic, readonly) BWStillImageProcessingSettings *processingSettings;
@property (nonatomic, readonly) FigCaptureStillImageSettings *requestedSettings;
@property (nonatomic, readonly) long long settingsID;

+ (bool)supportsSecureCoding;

- (id)captureSettings;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestedSettings:(id)arg1 captureSettings:(id)arg2 processingSettings:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)processingSettings;
- (id)requestedSettings;
- (long long)settingsID;

@end
