
@interface _OSInactivityPredictorMetadata : NSObject <NSSecureCoding, _OSInactivityPredictorMetadataProtocol> {
    double  confidenceThresholdRelaxed;
    double  confidenceThresholdStrict;
    double  longThreshold;
    NSString * modelVersion;
    NSString * predictorType;
    NSString * queryingMechanism;
    double  recommendedWaitTime;
    bool  requireEnoughHistory;
}

@property (nonatomic) double confidenceThresholdRelaxed;
@property (nonatomic) double confidenceThresholdStrict;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double longThreshold;
@property (nonatomic, copy) NSString *modelVersion;
@property (nonatomic, copy) NSString *predictorType;
@property (nonatomic, copy) NSString *queryingMechanism;
@property (nonatomic) double recommendedWaitTime;
@property (nonatomic) bool requireEnoughHistory;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)confidenceThresholdRelaxed;
- (double)confidenceThresholdStrict;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtocolConformer:(id)arg1;
- (double)longThreshold;
- (id)modelVersion;
- (id)predictorType;
- (id)queryingMechanism;
- (double)recommendedWaitTime;
- (bool)requireEnoughHistory;
- (void)setConfidenceThresholdRelaxed:(double)arg1;
- (void)setConfidenceThresholdStrict:(double)arg1;
- (void)setLongThreshold:(double)arg1;
- (void)setModelVersion:(id)arg1;
- (void)setPredictorType:(id)arg1;
- (void)setQueryingMechanism:(id)arg1;
- (void)setRecommendedWaitTime:(double)arg1;
- (void)setRequireEnoughHistory:(bool)arg1;

@end
