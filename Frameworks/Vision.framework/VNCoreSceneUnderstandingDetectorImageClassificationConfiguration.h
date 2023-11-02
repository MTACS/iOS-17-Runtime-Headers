
@interface VNCoreSceneUnderstandingDetectorImageClassificationConfiguration : VNCoreSceneUnderstandingDetectorFeatureConfiguration {
    VNDisallowedList * _disallowedList;
    unsigned long long  _maximumHierarchicalClassifications;
    unsigned long long  _maximumLeafClassifications;
    float  _minimumConfidence;
}

@property (retain) VNDisallowedList *disallowedList;
@property unsigned long long maximumHierarchicalClassifications;
@property unsigned long long maximumLeafClassifications;
@property float minimumConfidence;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)disallowedList;
- (id)initWithObservationsRecipient:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maximumHierarchicalClassifications;
- (unsigned long long)maximumLeafClassifications;
- (float)minimumConfidence;
- (void)setDisallowedList:(id)arg1;
- (void)setMaximumHierarchicalClassifications:(unsigned long long)arg1;
- (void)setMaximumLeafClassifications:(unsigned long long)arg1;
- (void)setMinimumConfidence:(float)arg1;

@end
