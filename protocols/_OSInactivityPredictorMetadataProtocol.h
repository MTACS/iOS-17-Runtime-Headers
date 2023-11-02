
@protocol _OSInactivityPredictorMetadataProtocol <NSObject>

@required

- (double)confidenceThresholdRelaxed;
- (double)confidenceThresholdStrict;
- (double)longThreshold;
- (NSString *)modelVersion;
- (NSString *)predictorType;
- (NSString *)queryingMechanism;
- (double)recommendedWaitTime;
- (bool)requireEnoughHistory;
- (void)setConfidenceThresholdRelaxed:(double)arg1;
- (void)setConfidenceThresholdStrict:(double)arg1;
- (void)setLongThreshold:(double)arg1;
- (void)setModelVersion:(NSString *)arg1;
- (void)setPredictorType:(NSString *)arg1;
- (void)setQueryingMechanism:(NSString *)arg1;
- (void)setRecommendedWaitTime:(double)arg1;
- (void)setRequireEnoughHistory:(bool)arg1;

@end
