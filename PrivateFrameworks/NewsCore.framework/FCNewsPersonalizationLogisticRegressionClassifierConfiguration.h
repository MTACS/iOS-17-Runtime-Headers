
@interface FCNewsPersonalizationLogisticRegressionClassifierConfiguration : NSObject {
    NSNumber * _convergenceThreshold;
    NSNumber * _l1Penalty;
    NSNumber * _l2Penalty;
    NSNumber * _maximumIterations;
    NSNumber * _stepSize;
}

@property (nonatomic, retain) NSNumber *convergenceThreshold;
@property (nonatomic, retain) NSNumber *l1Penalty;
@property (nonatomic, retain) NSNumber *l2Penalty;
@property (nonatomic, retain) NSNumber *maximumIterations;
@property (nonatomic, retain) NSNumber *stepSize;

- (void).cxx_destruct;
- (id)convergenceThreshold;
- (id)description;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)l1Penalty;
- (id)l2Penalty;
- (id)maximumIterations;
- (void)setConvergenceThreshold:(id)arg1;
- (void)setL1Penalty:(id)arg1;
- (void)setL2Penalty:(id)arg1;
- (void)setMaximumIterations:(id)arg1;
- (void)setStepSize:(id)arg1;
- (id)stepSize;

@end
