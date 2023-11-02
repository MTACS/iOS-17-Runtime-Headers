
@interface PaperKit.InlineDrawingTiledTextView : PKTiledTextView <PKSelectionInteractionDelegate> {
    void inlineDrawingCanvasElementController;
}

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)initInScrollView:(id)arg1 sixChannelBlending:(bool)arg2 defaultDrawingClass:(Class)arg3 readOnly:(bool)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)selectionInteraction:(id)arg1 canPerformAction:(SEL)arg2 withSender:(id)arg3 inAttachment:(id)arg4;
- (void)selectionInteractionDidPaste:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 inAttachment:(id)arg3;

@end
