
@interface CUIKResliceOperation : CUIKSaveOperation

- (bool)_executeWithUndoDelegate:(id)arg1 error:(id*)arg2;
- (Class)_inverseOperationClass;
- (id)_objectsForInverse;

@end
