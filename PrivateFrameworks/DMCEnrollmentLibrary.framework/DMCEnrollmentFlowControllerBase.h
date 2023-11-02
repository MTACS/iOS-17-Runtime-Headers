
@interface DMCEnrollmentFlowControllerBase : NSObject {
    unsigned long long  _currentStep;
    unsigned long long  _nextStepIndex;
    NSMutableArray * _stepQueue;
    DMCHangDetectionQueue * _workerQueue;
}

@property (nonatomic) unsigned long long currentStep;
@property (nonatomic) unsigned long long nextStepIndex;
@property (nonatomic, retain) NSMutableArray *stepQueue;
@property (nonatomic, retain) DMCHangDetectionQueue *workerQueue;

- (void).cxx_destruct;
- (void)_appendSteps:(id)arg1;
- (void)_pollNextStep;
- (void)_resetToInitialSteps;
- (void)_workerQueue_flowCompleted;
- (void)_workerQueue_performFlowStep:(unsigned long long)arg1;
- (unsigned long long)currentStep;
- (id)init;
- (unsigned long long)nextStepIndex;
- (void)setCurrentStep:(unsigned long long)arg1;
- (void)setNextStepIndex:(unsigned long long)arg1;
- (void)setStepQueue:(id)arg1;
- (void)setWorkerQueue:(id)arg1;
- (id)stepQueue;
- (id)workerQueue;

@end
