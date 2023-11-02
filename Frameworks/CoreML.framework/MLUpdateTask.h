
@interface MLUpdateTask : MLTask <MLTaskStateTransitionDelegate> {
    MLUpdateProgressHandlers * _progressHandlers;
    <MLBatchProvider> * _trainingData;
    MLModel<MLUpdatable> * _updatableModel;
    NSURL * _updatableModelURL;
    bool  _updateHasStarted;
    NSObject<OS_dispatch_queue> * _updateQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MLUpdateProgressHandlers *progressHandlers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <MLBatchProvider> *trainingData;
@property (nonatomic, readonly) MLModel<MLUpdatable> *updatableModel;
@property (nonatomic, readonly) NSURL *updatableModelURL;
@property (nonatomic) bool updateHasStarted;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *updateQueue;

+ (bool)updateModelAtURL:(id)arg1 trainingData:(id)arg2 configuration:(id)arg3 writeToURL:(id)arg4 error:(id*)arg5;
+ (id)updateTaskForModelAtURL:(id)arg1 trainingData:(id)arg2 completionHandler:(id /* block */)arg3 error:(id*)arg4;
+ (id)updateTaskForModelAtURL:(id)arg1 trainingData:(id)arg2 configuration:(id)arg3 completionHandler:(id /* block */)arg4 error:(id*)arg5;
+ (id)updateTaskForModelAtURL:(id)arg1 trainingData:(id)arg2 configuration:(id)arg3 progressHandlers:(id)arg4 error:(id*)arg5;
+ (id)updateTaskForModelAtURL:(id)arg1 trainingData:(id)arg2 progressHandlers:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id /* block */)_completionHandlerBlock;
- (void)_invokeProgressHandlerForContext:(id)arg1;
- (id /* block */)_progressHandlerBlock;
- (id)description;
- (id)initWithModelAtURL:(id)arg1 trainingData:(id)arg2 configuration:(id)arg3 progressHandlers:(id)arg4 error:(id*)arg5;
- (void)onCancellation;
- (void)onCompletionWithTaskContext:(id)arg1;
- (void)onFailureWithTaskContext:(id)arg1;
- (void)onResumptionWithTaskContext:(id)arg1;
- (void)onSuspensionWithTaskContext:(id)arg1;
- (id)progressHandlers;
- (void)resumeWithParameters:(id)arg1;
- (void)setUpdateHasStarted:(bool)arg1;
- (id)trainingData;
- (id)updatableModel;
- (id)updatableModelURL;
- (bool)updateHasStarted;
- (id)updateQueue;

@end
