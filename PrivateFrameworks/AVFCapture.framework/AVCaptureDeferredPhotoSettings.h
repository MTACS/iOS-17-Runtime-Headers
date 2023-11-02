
@interface AVCaptureDeferredPhotoSettings : NSObject <NSSecureCoding> {
    FigCaptureStillImageSettings * _captureSettings;
    NSData * _serializedProcessingSettings;
}

@property (nonatomic, readonly) FigCaptureStillImageSettings *captureSettings;
@property (nonatomic, readonly, copy) NSData *serializedProcessingSettings;

+ (bool)supportsSecureCoding;

- (id)_initWithCaptureSettings:(id)arg1 serializedProcessingSettings:(id)arg2;
- (id)captureSettings;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serializedProcessingSettings;

@end
