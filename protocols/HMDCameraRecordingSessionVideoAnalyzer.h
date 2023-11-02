
@protocol HMDCameraRecordingSessionVideoAnalyzer <NSObject>

@required

- (HMIAnalysisStateManager *)analysisStateManager;
- (void)analyzeFragment:(HMIVideoFragment *)arg1 configuration:(HMIVideoAnalyzerDynamicConfiguration *)arg2;
- (void)cancel;
- (<HMDCameraRecordingSessionVideoAnalyzerDelegate> *)delegate;
- (NSSet *)externalPersonManagers;
- (void)finishWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)flushAsync;
- (HMIHomePersonManager *)homePersonManager;
- (void)setAnalysisStateManager:(HMIAnalysisStateManager *)arg1;
- (void)setDelegate:(id <HMDCameraRecordingSessionVideoAnalyzerDelegate>)arg1;
- (void)setExternalPersonManagers:(NSSet *)arg1;
- (void)setHomePersonManager:(HMIHomePersonManager *)arg1;

@end
