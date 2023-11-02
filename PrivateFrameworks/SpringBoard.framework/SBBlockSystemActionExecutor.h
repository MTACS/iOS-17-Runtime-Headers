
@interface SBBlockSystemActionExecutor : SBAbstractSystemActionExecutor {
    bool  _executing;
    <SBSystemActionPreviewInvalidatable> * _previewAssertion;
}

@property (nonatomic, readonly) SBBlockSystemAction *systemAction;

- (void).cxx_destruct;
- (id)_beginInteractiveExecutionWithContext:(id)arg1 error:(out id*)arg2;
- (bool)_canBeExecuted;
- (void)_cancelPreviewing;
- (bool)_isExecuting;
- (id)_previewWithCoordinator:(id)arg1;
- (id)initWithSystemAction:(id)arg1;
- (id)systemAction;

@end
