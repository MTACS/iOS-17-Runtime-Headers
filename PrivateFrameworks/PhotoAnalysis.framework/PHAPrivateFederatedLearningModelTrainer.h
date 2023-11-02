
@interface PHAPrivateFederatedLearningModelTrainer : NSObject {
    NSURL * _espressoFileURL;
    NSString * _inputName;
    NSString * _labelName;
    NSArray * _layersToTrain;
    ETLossDefinition * _lossDefinition;
    NSString * _lossName;
    NSString * _modelInferenceOutputName;
    NSString * _modelOutputName;
    ETOptimizerDefinition * _optimizerDefinition;
    NSString * _optimizerName;
    <ETDataProvider> * _trainingData;
}

@property (nonatomic, readonly) NSURL *espressoFileURL;
@property (nonatomic, retain) NSString *inputName;
@property (nonatomic, retain) NSString *labelName;
@property (nonatomic, readonly) NSArray *layersToTrain;
@property (nonatomic, retain) ETLossDefinition *lossDefinition;
@property (nonatomic, retain) NSString *lossName;
@property (nonatomic, retain) NSString *modelInferenceOutputName;
@property (nonatomic, retain) NSString *modelOutputName;
@property (nonatomic, retain) ETOptimizerDefinition *optimizerDefinition;
@property (nonatomic, retain) NSString *optimizerName;
@property (nonatomic, readonly) <ETDataProvider> *trainingData;

+ (bool)_generateError:(id*)arg1 errorCode:(long long)arg2 message:(id)arg3 underlyingError:(id)arg4;

- (void).cxx_destruct;
- (int)_argmax:(float*)arg1 size:(int)arg2;
- (id)_averageLossAndAccuracyForBatchResults:(id)arg1 error:(id*)arg2;
- (id)_getParamsFromTask:(id)arg1 forLayers:(id)arg2 error:(id*)arg3;
- (bool)_trueLabelTensor:(id)arg1 isEqualToPredictionTensor:(id)arg2;
- (id)espressoFileURL;
- (id)initWithTrainingData:(id)arg1 espressoFileURL:(id)arg2 learningRate:(id)arg3 modelInputName:(id)arg4 modelOutputName:(id)arg5 lossName:(id)arg6 optimizerName:(id)arg7 error:(id*)arg8;
- (id)inputName;
- (id)labelName;
- (id)layersToTrain;
- (id)lossDefinition;
- (id)lossName;
- (id)modelInferenceOutputName;
- (id)modelOutputName;
- (id)optimizerDefinition;
- (id)optimizerName;
- (void)setInputName:(id)arg1;
- (void)setLabelName:(id)arg1;
- (void)setLossDefinition:(id)arg1;
- (void)setLossName:(id)arg1;
- (void)setModelInferenceOutputName:(id)arg1;
- (void)setModelOutputName:(id)arg1;
- (void)setOptimizerDefinition:(id)arg1;
- (void)setOptimizerName:(id)arg1;
- (id)trainForNumberOfEpochs:(unsigned long long)arg1 layersToTrain:(id)arg2 verbose:(bool)arg3 error:(id*)arg4;
- (id)trainingData;

@end
