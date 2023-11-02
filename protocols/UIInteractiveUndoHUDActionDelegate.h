
@protocol UIInteractiveUndoHUDActionDelegate <NSObject>

@required

- (bool)canCopy;
- (bool)canCut;
- (bool)canPaste;
- (bool)canRedo;
- (bool)canUndo;
- (void)copyOperation;
- (void)cutOperation;
- (void)pasteOperation;
- (void)redo:(bool)arg1;
- (void)undo:(bool)arg1;

@end
