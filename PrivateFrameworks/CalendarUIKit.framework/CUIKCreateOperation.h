
@interface CUIKCreateOperation : CUIKUserOperation {
    NSArray * _precomputedInverseObjects;
}

@property (nonatomic, retain) NSArray *precomputedInverseObjects;

- (void).cxx_destruct;
- (id)_actionName;
- (bool)_executeWithUndoDelegate:(id)arg1 error:(id*)arg2;
- (Class)_inverseOperationClass;
- (long long)_inverseOperationSpan;
- (id)_objectsForInverse;
- (void)_precomputeInverseObjects;
- (id)precomputedInverseObjects;
- (void)setPrecomputedInverseObjects:(id)arg1;

@end
