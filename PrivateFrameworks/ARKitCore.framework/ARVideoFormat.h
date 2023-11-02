
@interface ARVideoFormat : NSObject <ARDaemonSecureCoding, NSCopying> {
    long long  _captureDevicePosition;
    NSString * _captureDeviceType;
    AVCaptureDeviceFormat * _depthDataFormat;
    AVCaptureDevice * _device;
    AVCaptureDeviceFormat * _deviceFormat;
    NSArray * _frameRatesByPowerUsage;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageResolution;
    unsigned int  _pixelFormat;
}

@property (nonatomic, readonly) long long captureDevicePosition;
@property (nonatomic, readonly) NSString *captureDeviceType;
@property (nonatomic, readonly) AVCaptureDeviceFormat *depthDataFormat;
@property (nonatomic, readonly) AVCaptureDevice *device;
@property (nonatomic, readonly) AVCaptureDeviceFormat *deviceFormat;
@property (nonatomic, retain) NSArray *frameRatesByPowerUsage;
@property (nonatomic, readonly) long long framesPerSecond;
@property (nonatomic, readonly) bool has4KVideoResolution;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageResolution;
@property (nonatomic, readonly) bool isRecommendedForHighResolutionFrameCapturing;
@property (nonatomic, readonly) bool isX420PixelFormat;
@property (nonatomic, readonly) NSString *pixelFormat;
@property (getter=isVideoHDRSupported, nonatomic, readonly) bool videoHDRSupported;

+ (id)_querySupportedVideoFormatsForDevicePosition:(long long)arg1 deviceType:(id)arg2 videoBinned:(bool)arg3 frameRate:(double)arg4;
+ (id)bestDepthFormatForDeviceFormat:(id)arg1;
+ (id)bestTimeOfFlightFormatForDevicePosition:(long long)arg1 depthSensorNumberOfPointsMode:(long long)arg2 frameRates:(id)arg3;
+ (id)bestTimeOfFlightFormatForDevicePosition:(long long)arg1 frameRates:(id)arg2;
+ (id)bestVideoFormatForDevicePosition:(long long)arg1 deviceType:(id)arg2 resolution:(struct { int x1; int x2; })arg3 frameRate:(double)arg4 videoBinned:(bool)arg5;
+ (id)bestVideoFormatForDevicePosition:(long long)arg1 deviceType:(id)arg2 resolution:(struct { int x1; int x2; })arg3 frameRate:(double)arg4 videoBinned:(bool)arg5 needsHDRSupport:(bool)arg6;
+ (id)bestVideoFormatForDevicePosition:(long long)arg1 deviceType:(id)arg2 resolution:(struct { int x1; int x2; })arg3 frameRate:(double)arg4 videoBinned:(bool)arg5 needsHDRSupport:(bool)arg6 pixelFormat:(unsigned int)arg7;
+ (id)bestVideoFormatForDevicePosition:(long long)arg1 deviceType:(id)arg2 resolution:(struct { int x1; int x2; })arg3 frameRates:(id)arg4 videoBinned:(bool)arg5;
+ (id)bestVideoFormatForDevicePosition:(long long)arg1 deviceType:(id)arg2 resolution:(struct { int x1; int x2; })arg3 frameRates:(id)arg4 videoBinned:(bool)arg5 needsHDRSupport:(bool)arg6 pixelFormat:(unsigned int)arg7;
+ (struct CGSize { double x1; double x2; })hiResVideoDimensions;
+ (id)supportedVideoFormatsForDevicePosition:(long long)arg1 deviceType:(id)arg2;
+ (id)supportedVideoFormatsForDevicePosition:(long long)arg1 deviceType:(id)arg2 frameRate:(double)arg3;
+ (id)supportedVideoFormatsForDevicePosition:(long long)arg1 deviceType:(id)arg2 videoBinned:(bool)arg3;
+ (id)supportedVideoFormatsForDevicePosition:(long long)arg1 deviceType:(id)arg2 videoBinned:(bool)arg3 frameRate:(double)arg4;
+ (id)supportedVideoFormatsForHiResOrX420;
+ (id)supportedVideoFormatsForStillImageCapture;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)captureDevicePosition;
- (id)captureDeviceType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)depthDataFormat;
- (id)description;
- (id)device;
- (id)deviceFormat;
- (void)encodeWithCoder:(id)arg1;
- (id)frameRatesByPowerUsage;
- (long long)framesPerSecond;
- (bool)has4KVideoResolution;
- (unsigned long long)hash;
- (struct CGSize { double x1; double x2; })imageResolution;
- (id)initWithCaptureDevice:(id)arg1 format:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageResolution:(struct CGSize { double x1; double x2; })arg1 captureDevicePosition:(long long)arg2 captureDeviceType:(id)arg3;
- (id)initWithImageResolution:(struct CGSize { double x1; double x2; })arg1 captureDevicePosition:(long long)arg2 captureDeviceType:(id)arg3 frameRatesByPowerUsage:(id)arg4;
- (id)initWithImageResolution:(struct CGSize { double x1; double x2; })arg1 captureDevicePosition:(long long)arg2 captureDeviceType:(id)arg3 frameRatesByPowerUsage:(id)arg4 pixelFormat:(unsigned int)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isRecommendedForHighResolutionFrameCapturing;
- (bool)isVideoHDRSupported;
- (bool)isX420PixelFormat;
- (id)pixelFormat;
- (void)setDepthDataFormat:(id)arg1;
- (void)setFrameRatesByPowerUsage:(id)arg1;
- (id)videoFormatWithDepthDataFormat:(id)arg1;
- (id)videoFormatWithUnthrottledLowPowerUsageFramerate;

@end
