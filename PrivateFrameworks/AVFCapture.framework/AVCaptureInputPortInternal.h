
@interface AVCaptureInputPortInternal : NSObject {
    int  changeSeed;
    struct OpaqueCMClock { } * clock;
    bool  enabled;
    struct opaqueCMFormatDescription { } * formatDescription;
    AVCaptureInput * input;
    NSString * mediaType;
    long long  sourceDevicePosition;
    NSString * sourceDeviceType;
    NSString * sourceID;
}

- (void)dealloc;
- (id)init;

@end
