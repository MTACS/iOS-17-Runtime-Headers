
@interface TILanguageModelOfflineLearningAgent : NSObject {
    TILanguageModelOfflineLearningTask * _currentLearningTask;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
}

@property (nonatomic, retain) TILanguageModelOfflineLearningTask *currentLearningTask;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (id)contactRecordsForRecipients:(id)arg1;
+ (void)didFinishLearningWithAgent:(id)arg1 task:(id)arg2;
+ (id)sharedLearningAgent;

- (void).cxx_destruct;
- (bool)continueLearningTaskWithStrategy:(id)arg1;
- (id)currentLearningTask;
- (id)dispatchQueue;
- (void)handleRemovalOfLearnedModels;
- (id)init;
- (void)performLearningIfNecessaryWithStrategy:(id)arg1 lastAdaptationTime:(double)arg2;
- (void)performTaskInBackground:(id /* block */)arg1;
- (void)setCurrentLearningTask:(id)arg1;

@end
