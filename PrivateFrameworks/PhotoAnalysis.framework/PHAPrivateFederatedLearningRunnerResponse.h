
@interface PHAPrivateFederatedLearningRunnerResponse : NSObject {
    NSData * _dataPackage;
    NSDictionary * _trainingMetrics;
}

@property (nonatomic, retain) NSData *dataPackage;
@property (nonatomic, retain) NSDictionary *trainingMetrics;

- (void).cxx_destruct;
- (id)dataPackage;
- (id)initWithDataPackage:(id)arg1 layersToTrain:(id)arg2 trainingLossesPerEpoch:(id)arg3 trainingAccuraciesPerEpoch:(id)arg4;
- (void)setDataPackage:(id)arg1;
- (void)setTrainingMetrics:(id)arg1;
- (id)trainingMetrics;

@end
