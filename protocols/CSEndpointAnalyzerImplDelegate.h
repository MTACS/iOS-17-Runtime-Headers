
@protocol CSEndpointAnalyzerImplDelegate <NSObject>

@required

- (void)endpointer:(id <CSEndpointAnalyzerImpl>)arg1 detectedTwoShotAtTime:(double)arg2;

@optional

- (void)endpointer:(id <CSEndpointAnalyzerImpl>)arg1 reportEndpointBufferHostTime:(unsigned long long)arg2 firstBufferHostTime:(unsigned long long)arg3;

@end
