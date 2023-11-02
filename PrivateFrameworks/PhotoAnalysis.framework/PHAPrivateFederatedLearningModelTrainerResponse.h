
@interface PHAPrivateFederatedLearningModelTrainerResponse : NSObject {
    unsigned long long  _numberOfTrainingSamples;
    NSArray * _parameterDeltas;
    NSArray * _trainingAccuraciesPerEpoch;
    unsigned long long  _trainingEpochs;
    NSArray * _trainingLossesPerEpoch;
}

@property (nonatomic) unsigned long long numberOfTrainingSamples;
@property (nonatomic, retain) NSArray *parameterDeltas;
@property (nonatomic, retain) NSArray *trainingAccuraciesPerEpoch;
@property (nonatomic) unsigned long long trainingEpochs;
@property (nonatomic, retain) NSArray *trainingLossesPerEpoch;

- (void).cxx_destruct;
- (id)initWithParameterDeltas:(id)arg1 trainingLossesPerEpoch:(id)arg2 trainingAccuraciesPerEpoch:(id)arg3 trainingEpochs:(unsigned long long)arg4 numberOfTrainingSamples:(unsigned long long)arg5;
- (unsigned long long)numberOfTrainingSamples;
- (id)parameterDeltas;
- (void)setNumberOfTrainingSamples:(unsigned long long)arg1;
- (void)setParameterDeltas:(id)arg1;
- (void)setTrainingAccuraciesPerEpoch:(id)arg1;
- (void)setTrainingEpochs:(unsigned long long)arg1;
- (void)setTrainingLossesPerEpoch:(id)arg1;
- (id)trainingAccuraciesPerEpoch;
- (unsigned long long)trainingEpochs;
- (id)trainingLossesPerEpoch;

@end
