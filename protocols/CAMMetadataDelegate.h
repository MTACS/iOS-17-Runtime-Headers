
@protocol CAMMetadataDelegate <NSObject>

@optional

- (void)metadataWasRecognized:(NSArray *)arg1 forMetadataObjectTypes:(NSSet *)arg2 deviceFormat:(AVCaptureDeviceFormat *)arg3;

@end
