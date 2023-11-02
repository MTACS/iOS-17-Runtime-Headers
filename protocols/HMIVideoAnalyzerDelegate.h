
@protocol HMIVideoAnalyzerDelegate <NSObject>

@optional

- (void)analyzer:(HMIVideoAnalyzer *)arg1 didAnalyzeFragmentWithResult:(HMIVideoAnalyzerFragmentResult *)arg2;
- (void)analyzer:(HMIVideoAnalyzer *)arg1 didAnalyzeFrameWithResult:(HMIVideoAnalyzerFrameResult *)arg2;
- (void)analyzer:(HMIVideoAnalyzer *)arg1 didCreateTimelapseFragment:(HMIVideoFragment *)arg2;
- (void)analyzer:(HMIVideoAnalyzer *)arg1 didFailWithError:(NSError *)arg2;
- (void)analyzer:(HMIVideoAnalyzer *)arg1 didProduceAnalysisStateUpdate:(HMIAnalysisStateUpdate *)arg2;

@end
