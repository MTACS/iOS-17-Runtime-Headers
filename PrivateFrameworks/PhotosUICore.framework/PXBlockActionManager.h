
@interface PXBlockActionManager : PXActionManager {
    NSMutableDictionary * _registeredActions;
}

@property (nonatomic, readonly) NSMutableDictionary *registeredActions;

- (void).cxx_destruct;
- (id)_defaultStandardActionForConfiguration:(id)arg1 handler:(id /* block */)arg2;
- (void)_executeActionType:(id)arg1 action:(id)arg2;
- (id)actionPerformerForActionType:(id)arg1;
- (bool)canPerformActionType:(id)arg1;
- (id)init;
- (void)registerActionForType:(id)arg1 handler:(id /* block */)arg2;
- (void)registerActionForType:(id)arg1 title:(id)arg2 image:(id)arg3 handler:(id /* block */)arg4;
- (void)registerActionWithConfiguration:(id)arg1 forType:(id)arg2;
- (id)registeredActions;
- (id)standardActionForActionType:(id)arg1;
- (bool)supportsActionType:(id)arg1;

@end
