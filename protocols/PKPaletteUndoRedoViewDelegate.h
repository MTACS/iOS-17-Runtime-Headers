
@protocol PKPaletteUndoRedoViewDelegate <NSObject>

@required

- (void)undoRedoViewDidTapRedo:(PKPaletteUndoRedoView *)arg1;
- (void)undoRedoViewDidTapUndo:(PKPaletteUndoRedoView *)arg1;

@end
