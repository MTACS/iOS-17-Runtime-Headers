
@protocol HMIVideoFrameAnalyzerDelegate

@required

- (void)frameAnalyzer:(HMIVideoFrameAnalyzer *)arg1 didAnalyzeFrame:(HMIVideoFrameAnalyzerResult *)arg2;
- (void)frameAnalyzer:(HMIVideoFrameAnalyzer *)arg1 didProduceAnalysisStateUpdate:(HMIAnalysisStateUpdate *)arg2;

@end
