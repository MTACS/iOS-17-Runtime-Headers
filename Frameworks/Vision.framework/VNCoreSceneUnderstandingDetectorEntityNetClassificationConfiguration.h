
@interface VNCoreSceneUnderstandingDetectorEntityNetClassificationConfiguration : VNCoreSceneUnderstandingDetectorFeatureConfiguration {
    VNDisallowedList * _disallowedList;
    unsigned long long  _maximumClassifications;
    float  _minimumConfidence;
}

@property (retain) VNDisallowedList *disallowedList;
@property unsigned long long maximumClassifications;
@property float minimumConfidence;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)disallowedList;
- (id)initWithObservationsRecipient:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maximumClassifications;
- (float)minimumConfidence;
- (void)setDisallowedList:(id)arg1;
- (void)setMaximumClassifications:(unsigned long long)arg1;
- (void)setMinimumConfidence:(float)arg1;

@end
