
@interface AXMBarcodeNode : AXMEvaluationNode <NSSecureCoding> {
    AVCaptureMetadataOutput * _captureOutput;
}

@property (nonatomic, retain) AVCaptureMetadataOutput *captureOutput;

+ (bool)isSupported;
+ (bool)supportsSecureCoding;
+ (id)title;

- (void).cxx_destruct;
- (id)captureOutput;
- (void)setCaptureOutput:(id)arg1;

@end
