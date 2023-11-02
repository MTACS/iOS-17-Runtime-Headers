
@interface NLModelTrainer : NSObject {
    NLModelConfiguration * _configuration;
    NLDataSet * _dataSet;
    <NLModelTrainerDelegate> * _delegate;
    bool  _delegateRespondsToLogMessage;
    bool  _delegateRespondsToShouldStop;
    NLModel * _model;
    NSDictionary * _options;
    NSError * _trainingError;
}

@property (readonly, copy) NLModelConfiguration *configuration;
@property (readonly) NLDataSet *dataSet;
@property (readonly) <NLModelTrainerDelegate> *delegate;
@property (readonly, copy) NSDictionary *options;
@property (readonly, copy) NSDictionary *testResults;
@property (readonly, copy) NLModel *trainedModel;
@property (readonly, copy) NSError *trainingError;

+ (id)modelTrainerWithConfiguration:(id)arg1 dataSet:(id)arg2 options:(id)arg3 delegate:(id)arg4;

- (void).cxx_destruct;
- (id)configuration;
- (id)dataSet;
- (id)delegate;
- (id)initWithConfiguration:(id)arg1 dataSet:(id)arg2 options:(id)arg3 delegate:(id)arg4;
- (void)logMessage:(id)arg1;
- (id)model;
- (Class)modelImplClass;
- (id)options;
- (void)setModel:(id)arg1;
- (void)setTrainingError:(id)arg1;
- (bool)shouldStop;
- (id)testResults;
- (void)trainModel;
- (id)trainedModel;
- (void)trainer:(id)arg1 logMessage:(id)arg2;
- (bool)trainerShouldStop:(id)arg1;
- (id)trainingError;

@end
