
@interface HMIVideoAnalyzerDelegateAdapter : HMFObject <HMIVideoAnalyzerDelegate> {
    id /* block */  _analyzerDidAnalyzeFragmentWithResult;
    id /* block */  _analyzerDidAnalyzeFrameWithResult;
    id /* block */  _analyzerDidCreateTimelapseFragment;
    id /* block */  _analyzerDidFailWithError;
    id /* block */  _analyzerDidProduceAnalysisStateUpdate;
}

@property (copy) id /* block */ analyzerDidAnalyzeFragmentWithResult;
@property (copy) id /* block */ analyzerDidAnalyzeFrameWithResult;
@property (copy) id /* block */ analyzerDidCreateTimelapseFragment;
@property (copy) id /* block */ analyzerDidFailWithError;
@property (copy) id /* block */ analyzerDidProduceAnalysisStateUpdate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)analyzer:(id)arg1 didAnalyzeFragmentWithResult:(id)arg2;
- (void)analyzer:(id)arg1 didAnalyzeFrameWithResult:(id)arg2;
- (void)analyzer:(id)arg1 didCreateTimelapseFragment:(id)arg2;
- (void)analyzer:(id)arg1 didFailWithError:(id)arg2;
- (void)analyzer:(id)arg1 didProduceAnalysisStateUpdate:(id)arg2;
- (id /* block */)analyzerDidAnalyzeFragmentWithResult;
- (id /* block */)analyzerDidAnalyzeFrameWithResult;
- (id /* block */)analyzerDidCreateTimelapseFragment;
- (id /* block */)analyzerDidFailWithError;
- (id /* block */)analyzerDidProduceAnalysisStateUpdate;
- (void)setAnalyzerDidAnalyzeFragmentWithResult:(id /* block */)arg1;
- (void)setAnalyzerDidAnalyzeFrameWithResult:(id /* block */)arg1;
- (void)setAnalyzerDidCreateTimelapseFragment:(id /* block */)arg1;
- (void)setAnalyzerDidFailWithError:(id /* block */)arg1;
- (void)setAnalyzerDidProduceAnalysisStateUpdate:(id /* block */)arg1;

@end
