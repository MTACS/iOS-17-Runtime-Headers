
@interface VNImageAnalyzerMultiDetectorSceneprintConfiguration : VNImageAnalyzerMultiDetectorAnalysisConfiguration {
    bool  _includeLabelsAndConfidences;
}

@property (nonatomic) bool includeLabelsAndConfidences;

- (unsigned int)analysisTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)includeLabelsAndConfidences;
- (void)setIncludeLabelsAndConfidences:(bool)arg1;

@end
