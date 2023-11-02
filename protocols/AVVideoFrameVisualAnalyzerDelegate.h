
@protocol AVVideoFrameVisualAnalyzerDelegate <NSObject>

@required

- (void)videoFrameVisualAnalyzerDidFinishAnalyzingVideoFrame:(AVVideoFrameVisualAnalyzer *)arg1 withAnalysis:(VKCImageAnalysis *)arg2;
- (void)videoFrameVisualAnalyzerFailedAnalyzingVideoFrame:(AVVideoFrameVisualAnalyzer *)arg1 withError:(NSError *)arg2;

@end
