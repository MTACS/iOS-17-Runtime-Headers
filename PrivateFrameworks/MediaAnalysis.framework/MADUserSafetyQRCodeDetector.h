
@interface MADUserSafetyQRCodeDetector : NSObject {
    NSNumber * _sensitivity;
}

@property (retain) NSNumber *sensitivity;

+ (bool)enabled;
+ (id)sensitiveURLString;

- (void).cxx_destruct;
- (id)init;
- (void)processPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(unsigned int)arg2 signpostPayload:(id)arg3;
- (id)sensitivity;
- (void)setSensitivity:(id)arg1;

@end
