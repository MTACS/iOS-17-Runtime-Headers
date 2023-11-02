
@interface StepByStepController : AssistantCallbackController <AutoGuessSetup, StepByStepUIDelegateResult> {
    id  _delegate;
    NSDictionary * _restoreRecommendation;
    struct StepByStepContext { } * _stepByStepContext;
}

@property <StepByStepUIDelegate> *delegate;
@property (retain) NSDictionary *restoreRecommendation;

+ (id)stepByStepController;

- (int)cancelStepByStep;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)restoreRecommendation;
- (int)resume;
- (void)setDelegate:(id)arg1;
- (void)setRestoreRecommendation:(id)arg1;
- (int)setupFromAutoguessRecommendation:(id)arg1 withOptions:(id)arg2;
- (void)stepByStepNextStepResult:(int)arg1 withOptions:(id)arg2;
- (int)subclassAssistantCallback:(struct AssistantCallbackContext { unsigned int x1; struct AssistantContext {} *x2; int x3; struct __CFDictionary {} *x4; int x5; id x6; id x7; struct _opaque_pthread_mutex_t { long long x_8_1_1; BOOL x_8_1_2[56]; } x8; void *x9; long long x10; }*)arg1;

@end
