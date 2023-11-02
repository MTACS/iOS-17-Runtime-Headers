
@interface PaperKit.CanvasViewSelectionInteractionDelegate : NSObject <PKSelectionInteractionDelegate> {
    void containerView;
}

- (void).cxx_destruct;
- (id)init;
- (bool)selectionInteraction:(id)arg1 canPerformAction:(SEL)arg2 withSender:(id)arg3 inAttachment:(id)arg4;
- (id)selectionInteraction:(id)arg1 contextMenuInteraction:(id)arg2 configurationForElement:(id)arg3 inAttachment:(id)arg4;
- (id)selectionInteraction:(id)arg1 contextMenuInteraction:(id)arg2 previewForHighlightingMenuWithConfiguration:(id)arg3 forElement:(id)arg4 inAttachment:(id)arg5;
- (void)selectionInteraction:(id)arg1 contextMenuInteraction:(id)arg2 willDisplayMenuForConfiguration:(id)arg3 animator:(id)arg4 forElement:(id)arg5 inAttachment:(id)arg6;
- (void)selectionInteraction:(id)arg1 contextMenuInteraction:(id)arg2 willEndForConfiguration:(id)arg3 animator:(id)arg4 forElement:(id)arg5 inAttachment:(id)arg6;
- (void)selectionInteraction:(id)arg1 didClearSelectionForElements:(id)arg2 inAttachment:(id)arg3;
- (void)selectionInteraction:(id)arg1 didDeleteElements:(id)arg2 inAttachment:(id)arg3;
- (void)selectionInteraction:(id)arg1 didDragElements:(id)arg2 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 inAttachment:(id)arg4;
- (void)selectionInteraction:(id)arg1 didDropItemProvider:(id)arg2 inAttachment:(id)arg3 withCompletion:(id /* block */)arg4;
- (id)selectionInteraction:(id)arg1 didDuplicateElements:(id)arg2 inAttachment:(id)arg3;
- (void)selectionInteraction:(id)arg1 didEndDraggingElements:(id)arg2 inAttachment:(id)arg3;
- (void)selectionInteraction:(id)arg1 didEndInsertSpaceInAttachment:(id)arg2;
- (bool)selectionInteraction:(id)arg1 didLongPressElement:(id)arg2 withGesture:(id)arg3 inAttachment:(id)arg4;
- (void)selectionInteraction:(id)arg1 didSelectElements:(id)arg2 inAttachment:(id)arg3;
- (void)selectionInteraction:(id)arg1 didTapElement:(id)arg2 withGesture:(id)arg3 inAttachment:(id)arg4;
- (void)selectionInteraction:(id)arg1 dragInteractionWillBeginForElements:(id)arg2 inAttachment:(id)arg3;
- (void)selectionInteraction:(id)arg1 dragInteractionWillEndForElements:(id)arg2 withOperation:(unsigned long long)arg3 inAttachment:(id)arg4;
- (id)selectionInteraction:(id)arg1 elementsForSpaceInsertedAtPoint:(struct CGPoint { double x1; double x2; })arg2 inAttachment:(id)arg3;
- (id)selectionInteraction:(id)arg1 elementsInAttachment:(id)arg2;
- (bool)selectionInteraction:(id)arg1 handleDoubleTapOnCanvasAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)selectionInteraction:(id)arg1 insertSpaceDidMove:(double)arg2 inAttachment:(id)arg3;
- (id)selectionInteraction:(id)arg1 pasteboardRepresentationsForElements:(id)arg2 strokes:(id)arg3 inAttachment:(id)arg4;
- (const struct CGPath { }*)selectionInteraction:(id)arg1 pathForElement:(id)arg2 inAttachment:(id)arg3;
- (void)selectionInteraction:(id)arg1 renderPreviewForElements:(id)arg2 inContext:(struct CGContext { }*)arg3 withConfig:(id)arg4 inAttachment:(id)arg5 withCompletion:(id /* block */)arg6;
- (id)selectionInteraction:(id)arg1 requestElementsInPath:(id)arg2 inAttachment:(id)arg3;
- (id)selectionInteraction:(id)arg1 requestElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inAttachment:(id)arg3;
- (id)selectionInteraction:(id)arg1 selectedElementsInAttachment:(id)arg2;
- (bool)selectionInteraction:(id)arg1 selectionContainsPoint:(struct CGPoint { double x1; double x2; })arg2 inAttachment:(id)arg3;
- (void)selectionInteraction:(id)arg1 willBeginInsertSpaceInAttachment:(id)arg2;
- (void)selectionInteractionDidPaste:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 inAttachment:(id)arg3;
- (bool)selectionInteractionShouldBegin:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 forEvent:(id)arg3 orGestureRecognizer:(id)arg4;
- (bool)selectionInteractionShouldForwardToElements:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 forEvent:(id)arg3;

@end
