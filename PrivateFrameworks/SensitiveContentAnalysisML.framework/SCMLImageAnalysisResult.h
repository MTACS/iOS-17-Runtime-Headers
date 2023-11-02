
@interface SCMLImageAnalysisResult : SCMLAnalysisResult {
    SCMLImageDetectionResult * _detectionResult;
}

@property (nonatomic, retain) SCMLImageDetectionResult *detectionResult;

- (void).cxx_destruct;
- (id)detectionResult;
- (void)setDetectionResult:(id)arg1;

@end
