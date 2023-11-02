
@protocol CSVTUIEndpointAnalyzerDelegate <NSObject>

@required

- (void)endpointer:(CSVTUIEndpointAnalyzer *)arg1 didDetectHardEndpointAtTime:(double)arg2;
- (void)endpointer:(CSVTUIEndpointAnalyzer *)arg1 didDetectStartpointAtTime:(double)arg2;

@end
