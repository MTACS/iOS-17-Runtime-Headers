
@interface WebThreadSafeUndoManager : NSUndoManager

- (bool)_alwaysShowEditAlertView;
- (void)redo;
- (void)undo;

@end
