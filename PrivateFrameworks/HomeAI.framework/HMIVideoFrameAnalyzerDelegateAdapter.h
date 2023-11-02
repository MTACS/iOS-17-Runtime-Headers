
@interface HMIVideoFrameAnalyzerDelegateAdapter : HMFObject <HMIVideoFrameAnalyzerDelegate> {
    id /* block */  _frameAnalyzerDidAnalyzeFrame;
    id /* block */  _frameAnalyzerDidProduceAnalysisStateUpdate;
}

@property (copy) id /* block */ frameAnalyzerDidAnalyzeFrame;
@property (copy) id /* block */ frameAnalyzerDidProduceAnalysisStateUpdate;

- (void).cxx_destruct;
- (void)frameAnalyzer:(id)arg1 didAnalyzeFrame:(id)arg2;
- (void)frameAnalyzer:(id)arg1 didProduceAnalysisStateUpdate:(id)arg2;
- (id /* block */)frameAnalyzerDidAnalyzeFrame;
- (id /* block */)frameAnalyzerDidProduceAnalysisStateUpdate;
- (void)setFrameAnalyzerDidAnalyzeFrame:(id /* block */)arg1;
- (void)setFrameAnalyzerDidProduceAnalysisStateUpdate:(id /* block */)arg1;

@end
