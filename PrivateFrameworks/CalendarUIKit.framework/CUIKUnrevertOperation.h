
@interface CUIKUnrevertOperation : CUIKRevertOperation

- (bool)_executeWithUndoDelegate:(id)arg1 error:(id*)arg2;
- (Class)_inverseOperationClass;

@end
