
@interface VNImageAnalyzerMultiDetectorSceneClassificationConfiguration : VNImageAnalyzerMultiDetectorAnalysisConfiguration {
    VNClassificationCustomHierarchy * _customHierarchy;
    VNDisallowedList * _disallowedList;
    unsigned long long  _maximumHierarchicalLabels;
    unsigned long long  _maximumLeafLabels;
    float  _minimumConfidence;
}

@property (nonatomic, retain) VNClassificationCustomHierarchy *customHierarchy;
@property (nonatomic, copy) VNDisallowedList *disallowedList;
@property (nonatomic) unsigned long long maximumHierarchicalLabels;
@property (nonatomic) unsigned long long maximumLeafLabels;
@property (nonatomic) float minimumConfidence;

- (void).cxx_destruct;
- (unsigned int)analysisTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customHierarchy;
- (id)disallowedList;
- (id)initWithObservationsRecipient:(id)arg1;
- (unsigned int)labelsListType;
- (unsigned long long)maximumHierarchicalLabels;
- (unsigned long long)maximumLeafLabels;
- (float)minimumConfidence;
- (void)setCustomHierarchy:(id)arg1;
- (void)setDisallowedList:(id)arg1;
- (void)setMaximumHierarchicalLabels:(unsigned long long)arg1;
- (void)setMaximumLeafLabels:(unsigned long long)arg1;
- (void)setMinimumConfidence:(float)arg1;

@end
