
@interface SBSystemActionControl : NSObject <SBSystemActionDataSourceObserver> {
    NSHashTable * _actionValidators;
    SBSystemActionCoachingController * _coachingController;
    <SBSystemActionDataSource> * _dataSource;
    <BSInvalidatable> * _feedbackActivationAssertion;
    NSHashTable * _observers;
    <SBSystemActionPreviewCoordinating> * _previewCoordinator;
    <SBSystemActionExecuting> * _previewingExecutor;
    NSMutableArray * _runningExecutors;
    SBSoundController * _soundController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)systemActionDataSource:(id)arg1 didUpdateSelectedAction:(id)arg2;

@end
