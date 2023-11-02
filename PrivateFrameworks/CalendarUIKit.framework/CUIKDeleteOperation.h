
@interface CUIKDeleteOperation : CUIKUserOperation {
    NSArray * _precomputedInverseObjects;
}

@property (nonatomic, retain) NSArray *precomputedInverseObjects;

- (void).cxx_destruct;
- (id)_actionName;
- (bool)_canBeUndone;
- (bool)_executeWithUndoDelegate:(id)arg1 error:(id*)arg2;
- (Class)_inverseOperationClass;
- (id)_objectsForInverse;
- (id)precomputedInverseObjects;
- (void)setPrecomputedInverseObjects:(id)arg1;

@end
