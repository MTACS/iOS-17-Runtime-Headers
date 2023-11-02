
@interface VNCoreSceneUnderstandingDetectorRecognizeObjectsConfiguration : VNCoreSceneUnderstandingDetectorFeatureConfiguration {
    VNDisallowedList * _disallowedList;
    float  _minimumDetectionConfidence;
    float  _nonMaximumSuppressionThreshold;
}

@property (nonatomic, copy) VNDisallowedList *disallowedList;
@property (nonatomic) float minimumDetectionConfidence;
@property (nonatomic) float nonMaximumSuppressionThreshold;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)disallowedList;
- (id)initWithObservationsRecipient:(id)arg1;
- (bool)isEqual:(id)arg1;
- (float)minimumDetectionConfidence;
- (float)nonMaximumSuppressionThreshold;
- (void)setDisallowedList:(id)arg1;
- (void)setMinimumDetectionConfidence:(float)arg1;
- (void)setNonMaximumSuppressionThreshold:(float)arg1;

@end
