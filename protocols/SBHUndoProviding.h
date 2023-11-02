
@protocol SBHUndoProviding

@required

- (<SBHUndoPreparation> *)prepareForUndo;
- (void)removeAllUndoRegistrationsInUndoManager:(NSUndoManager *)arg1;

@end
