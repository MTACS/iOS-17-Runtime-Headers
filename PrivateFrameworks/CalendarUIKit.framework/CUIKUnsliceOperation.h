
@interface CUIKUnsliceOperation : CUIKSaveOperation

- (bool)_executeWithUndoDelegate:(id)arg1 error:(id*)arg2;
- (id)_inverseForUndoSliceOutcome:(id)arg1;
- (Class)_inverseOperationClass;
- (id)_objectsForInverse;
- (id)originalObjects;

@end
