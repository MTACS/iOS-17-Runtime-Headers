
@interface _OSBatteryLowSOCPredictorOutput : NSObject <NSSecureCoding> {
    double  _confidence;
    double  _confidenceThreshold;
    bool  _lowSOCPredicted;
    NSString * _modelName;
    NSString * _modelVersion;
}

@property (nonatomic) double confidence;
@property (nonatomic) double confidenceThreshold;
@property (nonatomic) bool lowSOCPredicted;
@property (nonatomic, retain) NSString *modelName;
@property (nonatomic, retain) NSString *modelVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)confidence;
- (double)confidenceThreshold;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)lowSOCPredicted;
- (id)modelName;
- (id)modelVersion;
- (void)setConfidence:(double)arg1;
- (void)setConfidenceThreshold:(double)arg1;
- (void)setLowSOCPredicted:(bool)arg1;
- (void)setModelName:(id)arg1;
- (void)setModelVersion:(id)arg1;

@end
