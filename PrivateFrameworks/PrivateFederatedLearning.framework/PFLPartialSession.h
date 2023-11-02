
@interface PFLPartialSession : NSObject <PFLResumable, PFLTaskStateProvider> {
    id /* block */  _completionHandler;
    PFLUpdateConfiguration * _configuration;
    <PFLTaskState> * _currentState;
    NSURL * _modelURL;
    <MLBatchProvider> * _trainingData;
}

@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) PFLUpdateConfiguration *configuration;
@property (nonatomic, retain) <PFLTaskState> *currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *modelURL;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <MLBatchProvider> *trainingData;

- (void).cxx_destruct;
- (id)compiledModelURL;
- (id /* block */)completionHandler;
- (id)configuration;
- (id)currentState;
- (id)dataProvider;
- (id)initWithModelAtURL:(id)arg1 trainingData:(id)arg2 configuration:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)layerNames;
- (id)modelConfiguration;
- (id)modelURL;
- (unsigned long long)privatizationNormBinCount;
- (double)privatizationNormMax;
- (void)resume;
- (void)resumeWithState:(id)arg1;
- (void)setCurrentState:(id)arg1;
- (void)suspend;
- (id)trainingData;
- (double)validationSplit;

@end
