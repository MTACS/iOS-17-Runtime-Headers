
@protocol SBHUndoPreparation

@required

- (void)registerWithUndoManager:(NSUndoManager *)arg1 actionName:(NSString *)arg2 observer:(id <SBHUndoObserving>)arg3;

@end
