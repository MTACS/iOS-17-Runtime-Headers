
@interface AXMCameraFrameContext : NSObject <NSSecureCoding> {
    CMAttitude * _deviceAttitude;
    double  _presentationTimestamp;
    float  _videoFieldOfView;
    long long  _videoSourceHeight;
    long long  _videoSourceWidth;
    float  _videoZoomFactor;
}

@property (nonatomic, readonly) CMAttitude *deviceAttitude;
@property (nonatomic, readonly) double presentationTimestamp;
@property (nonatomic, readonly) float videoFieldOfView;
@property (nonatomic, readonly) long long videoSourceHeight;
@property (nonatomic, readonly) long long videoSourceWidth;
@property (nonatomic, readonly) float videoZoomFactor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)deviceAttitude;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoFieldOfView:(float)arg1 zoomFactor:(float)arg2 sourceWidth:(long long)arg3 sourceHeight:(long long)arg4 presentationTimestamp:(double)arg5 attitude:(id)arg6;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })motionCorrectedNormalizedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 targetAttitude:(id)arg2 targetZoomFactor:(float)arg3 interfaceOrientation:(long long)arg4 mirrored:(bool)arg5;
- (double)presentationTimestamp;
- (float)videoFieldOfView;
- (long long)videoSourceHeight;
- (long long)videoSourceWidth;
- (float)videoZoomFactor;

@end
