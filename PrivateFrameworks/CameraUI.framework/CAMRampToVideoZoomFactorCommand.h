
@interface CAMRampToVideoZoomFactorCommand : CAMCaptureCommand {
    double  __duration;
    CAMCaptureGraphConfiguration * __graphConfiguration;
    float  __rate;
    double  __videoZoomFactor;
    long long  __videoZoomRampTuning;
}

@property (nonatomic, readonly) double _duration;
@property (nonatomic, readonly) CAMCaptureGraphConfiguration *_graphConfiguration;
@property (nonatomic, readonly) float _rate;
@property (nonatomic, readonly) double _videoZoomFactor;
@property (nonatomic, readonly) long long _videoZoomRampTuning;

- (void).cxx_destruct;
- (double)_duration;
- (id)_graphConfiguration;
- (float)_rate;
- (double)_videoZoomFactor;
- (long long)_videoZoomRampTuning;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithVideoZoomFactor:(double)arg1 duration:(double)arg2 zoomRampTuning:(long long)arg3 graphConfiguration:(id)arg4;
- (id)initWithVideoZoomFactor:(double)arg1 rate:(float)arg2 graphConfiguration:(id)arg3;

@end
