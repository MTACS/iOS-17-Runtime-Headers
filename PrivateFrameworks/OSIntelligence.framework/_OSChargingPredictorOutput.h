
@interface _OSChargingPredictorOutput : NSObject <NSSecureCoding> {
    double  _chargingDuration;
    double  _confidence;
    bool  _meetsSystemConfidenceThreshold;
}

@property (nonatomic) double chargingDuration;
@property (nonatomic) double confidence;
@property (nonatomic) bool meetsSystemConfidenceThreshold;

+ (bool)supportsSecureCoding;

- (double)chargingDuration;
- (double)confidence;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)meetsSystemConfidenceThreshold;
- (void)setChargingDuration:(double)arg1;
- (void)setConfidence:(double)arg1;
- (void)setMeetsSystemConfidenceThreshold:(bool)arg1;

@end
