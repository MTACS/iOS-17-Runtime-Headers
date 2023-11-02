
@protocol CSEndpointerXPCServiceDelegate

@required

- (void)didDetectHardEndpointAtTime:(double)arg1 withMetrics:(CSEndpointerMetrics *)arg2;
- (void)didDetectStartpointAtTime:(double)arg1;
- (void)didDetectTwoShotAtTime:(double)arg1;

@end
