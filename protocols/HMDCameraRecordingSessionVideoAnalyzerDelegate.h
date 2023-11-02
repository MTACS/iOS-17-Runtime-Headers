
@protocol HMDCameraRecordingSessionVideoAnalyzerDelegate <NSObject>

@required

- (void)analyzer:(id <HMDCameraRecordingSessionVideoAnalyzer>)arg1 didAnalyzeFragmentWithResult:(HMIVideoAnalyzerFragmentResult *)arg2;
- (void)analyzer:(id <HMDCameraRecordingSessionVideoAnalyzer>)arg1 didAnalyzeFrameWithResult:(HMIVideoAnalyzerFrameResult *)arg2;
- (void)analyzer:(id <HMDCameraRecordingSessionVideoAnalyzer>)arg1 didCreateTimelapseFragment:(HMIVideoFragment *)arg2;
- (void)analyzer:(id <HMDCameraRecordingSessionVideoAnalyzer>)arg1 didFailWithError:(NSError *)arg2;

@end
