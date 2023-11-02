
@interface CUIKRevertOperation : CUIKUserOperation {
    EKChangeTracker * _originalChangeTracker;
}

@property (retain) EKChangeTracker *originalChangeTracker;

+ (id)operationForContext:(id)arg1;

- (void).cxx_destruct;
- (id)_actionName;
- (bool)_executeWithUndoDelegate:(id)arg1 error:(id*)arg2;
- (id)_inverseOperation;
- (Class)_inverseOperationClass;
- (id)originalChangeTracker;
- (void)setOriginalChangeTracker:(id)arg1;

@end
