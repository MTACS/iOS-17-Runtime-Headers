
@interface VNImageAnalyzerMultiDetectorEntityNetClassificationConfiguration : VNImageAnalyzerMultiDetectorAnalysisConfiguration {
    VNDisallowedList * _disallowedList;
    unsigned long long  _maximumLabels;
    float  _minimumConfidence;
}

@property (nonatomic, copy) VNDisallowedList *disallowedList;
@property (nonatomic) unsigned long long maximumLabels;
@property (nonatomic) float minimumConfidence;

- (void).cxx_destruct;
- (unsigned int)analysisTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)disallowedList;
- (id)initWithObservationsRecipient:(id)arg1;
- (unsigned int)labelsListType;
- (unsigned long long)maximumLabels;
- (float)minimumConfidence;
- (void)setDisallowedList:(id)arg1;
- (void)setMaximumLabels:(unsigned long long)arg1;
- (void)setMinimumConfidence:(float)arg1;

@end
