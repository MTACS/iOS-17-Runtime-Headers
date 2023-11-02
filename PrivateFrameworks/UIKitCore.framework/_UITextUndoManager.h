
@interface _UITextUndoManager : NSUndoManager {
    UITextInputController * _inputController;
}

@property (nonatomic) UITextInputController *inputController;

- (void).cxx_destruct;
- (bool)canRedo;
- (bool)canUndo;
- (id)inputController;
- (void)redo;
- (void)removeAllActions;
- (void)setInputController:(id)arg1;
- (void)undo;

@end
