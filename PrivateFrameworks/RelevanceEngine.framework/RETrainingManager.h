
@interface RETrainingManager : RERelevanceEngineSubsystem <RERemoteTrainingClientListenerDelegate, RETrainingManagerProperties> {
    RELiveElementCoordinator * _coordinator;
    RETrainingContext * _currentTrainingContext;
    NSMutableArray * _interactionTypes;
    REMLModelManager * _modelManager;
    NSObject<OS_dispatch_queue> * _queue;
    RERemoteTrainingClientListener * _remoteTrainingListener;
    NSMutableArray * _trainingContents;
    NSMutableSet * _trainingContexts;
    NSMutableArray * _trainingEvents;
    NSMutableArray * _trainingFeatureMaps;
    RETrainingScheduler * _trainingScheduler;
}

@property (retain) RETrainingContext *currentTrainingContext;
@property (nonatomic, readonly) NSMutableArray *trainingEvents;
@property (nonatomic, readonly) RETrainingScheduler *trainingScheduler;

- (void).cxx_destruct;
- (void)_performTraining:(bool)arg1 completion:(id /* block */)arg2;
- (void)_performTrainingForPredictionElement:(id)arg1 isPositiveEvent:(bool)arg2 interaction:(id)arg3 context:(id)arg4;
- (void)_queue_trainElementWithIdentifier:(id)arg1 relevanceProviders:(id)arg2 featureMap:(id)arg3 isPositiveEvent:(bool)arg4 interaction:(id)arg5 context:(id)arg6;
- (void)addTrainingContext:(id)arg1;
- (id)currentTrainingContext;
- (void)dealloc;
- (void)flushTraining;
- (id)initWithRelevanceEngine:(id)arg1;
- (void)makeContextCurrent:(id)arg1;
- (void)manuallyPerformTrainingWithCompletion:(id /* block */)arg1;
- (void)performTrainingForElement:(id)arg1 isPositiveEvent:(bool)arg2 interaction:(id)arg3;
- (void)performTrainingForElement:(id)arg1 isPositiveEvent:(bool)arg2 interaction:(id)arg3 context:(id)arg4;
- (void)performTrainingForElementWithIdentifier:(id)arg1 isPositiveEvent:(bool)arg2 interaction:(id)arg3;
- (void)performTrainingForElementWithIdentifier:(id)arg1 isPositiveEvent:(bool)arg2 interaction:(id)arg3 context:(id)arg4;
- (void)remoteTrainingClientListenerDidConnectContext:(id)arg1;
- (void)remoteTrainingClientListenerDidDisconnectContext:(id)arg1;
- (void)removeTrainingContext:(id)arg1;
- (void)setCurrentTrainingContext:(id)arg1;
- (id)trainingEvents;
- (id)trainingScheduler;

@end
