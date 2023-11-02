
@interface CAMSetVideoZoomFactorCommand : CAMCaptureCommand {
    CAMCaptureGraphConfiguration * __graphConfiguration;
    double  __videoZoomFactor;
}

@property (nonatomic, readonly) CAMCaptureGraphConfiguration *_graphConfiguration;
@property (nonatomic, readonly) double _videoZoomFactor;

- (void).cxx_destruct;
- (id)_graphConfiguration;
- (double)_videoZoomFactor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithVideoZoomFactor:(double)arg1 graphConfiguration:(id)arg2;

@end
