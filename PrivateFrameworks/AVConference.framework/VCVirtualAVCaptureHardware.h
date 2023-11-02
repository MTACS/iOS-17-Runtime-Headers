
@interface VCVirtualAVCaptureHardware : NSObject {
    NSDictionary * _virtualHardware;
}

@property (nonatomic, readonly) NSDictionary *devices;

- (void)dealloc;
- (id)defaultFormatForDeviceID:(id)arg1;
- (id)devices;
- (struct { int x1; int x2; })highResolutionStillImageDimensionsWithFormatDict:(id)arg1;
- (id)initForDevice:(id)arg1;
- (id)newDeviceFormatsFromJsonList:(id)arg1;
- (struct opaqueCMFormatDescription { }*)newFormatDescription:(id)arg1;
- (id)newVirtualHardwareForDevice:(id)arg1;
- (id)supportedMaxPhotoDimensionsWithFormatDict:(id)arg1;
- (id)videoSupportedFrameRateRangesWithFormatDict:(id)arg1;

@end
