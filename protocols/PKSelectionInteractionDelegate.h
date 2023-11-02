
@protocol PKSelectionInteractionDelegate <NSObject>

@optional

- (bool)selectionInteraction:(PKSelectionInteraction *)arg1 canPerformAction:(SEL)arg2 withSender:(id)arg3 inAttachment:(PKAttachmentView *)arg4;
- (UIContextMenuConfiguration *)selectionInteraction:(PKSelectionInteraction *)arg1 contextMenuInteraction:(UIContextMenuInteraction *)arg2 configurationForElement:(id)arg3 inAttachment:(PKAttachmentView *)arg4;
- (UITargetedPreview *)selectionInteraction:(PKSelectionInteraction *)arg1 contextMenuInteraction:(UIContextMenuInteraction *)arg2 previewForHighlightingMenuWithConfiguration:(UIContextMenuConfiguration *)arg3 forElement:(id)arg4 inAttachment:(PKAttachmentView *)arg5;
- (void)selectionInteraction:(PKSelectionInteraction *)arg1 contextMenuInteraction:(UIContextMenuInteraction *)arg2 willDisplayMenuForConfiguration:(UIContextMenuConfiguration *)arg3 animator:(id <UIContextMenuInteractionAnimating>)arg4 forElement:(id)arg5 inAttachment:(PKAttachmentView *)arg6;
- (void)selectionInteraction:(PKSelectionInteraction *)arg1 contextMenuInteraction:(UIContextMenuInteraction *)arg2 willEndForConfiguration:(UIContextMenuConfiguration *)arg3 animator:(id <UIContextMenuInteractionAnimating>)arg4 forElement:(id)arg5 inAttachment:(PKAttachmentView *)arg6;
- (void)selectionInteraction:(PKSelectionInteraction *)arg1 didClearSelectionForElements:(NSArray *)arg2 inAttachment:(PKAttachmentView *)arg3;
- (void)selectionInteraction:(PKSelectionInteraction *)arg1 didDeleteElements:(NSArray *)arg2 inAttachment:(PKAttachmentView *)arg3;
- (void)selectionInteraction:(PKSelectionInteraction *)arg1 didDragElements:(NSArray *)arg2 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 inAttachment:(PKAttachmentView *)arg4;
- (void)selectionInteraction:(void *)arg1 didDropItemProvider:(void *)arg2 inAttachment:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 9: PKSelectionInteraction *, NSItemProvider *, PKAttachmentView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (NSArray *)selectionInteraction:(PKSelectionInteraction *)arg1 didDuplicateElements:(NSArray *)arg2 inAttachment:(PKAttachmentView *)arg3;
- (void)selectionInteraction:(PKSelectionInteraction *)arg1 didEndDraggingElements:(NSArray *)arg2 inAttachment:(PKAttachmentView *)arg3;
- (void)selectionInteraction:(PKSelectionInteraction *)arg1 didEndInsertSpaceInAttachment:(PKAttachmentView *)arg2;
- (bool)selectionInteraction:(PKSelectionInteraction *)arg1 didLongPressElement:(id)arg2 withGesture:(UIGestureRecognizer *)arg3 inAttachment:(PKAttachmentView *)arg4;
- (void)selectionInteraction:(PKSelectionInteraction *)arg1 didSelectElements:(NSArray *)arg2 inAttachment:(PKAttachmentView *)arg3;
- (void)selectionInteraction:(PKSelectionInteraction *)arg1 didTapElement:(id)arg2 withGesture:(UIGestureRecognizer *)arg3 inAttachment:(PKAttachmentView *)arg4;
- (void)selectionInteraction:(PKSelectionInteraction *)arg1 dragInteractionWillBeginForElements:(NSArray *)arg2 inAttachment:(PKAttachmentView *)arg3;
- (void)selectionInteraction:(PKSelectionInteraction *)arg1 dragInteractionWillEndForElements:(NSArray *)arg2 withOperation:(unsigned long long)arg3 inAttachment:(PKAttachmentView *)arg4;
- (NSArray *)selectionInteraction:(PKSelectionInteraction *)arg1 elementsForSpaceInsertedAtPoint:(struct CGPoint { double x1; double x2; })arg2 inAttachment:(PKAttachmentView *)arg3;
- (NSArray *)selectionInteraction:(PKSelectionInteraction *)arg1 elementsInAttachment:(PKAttachmentView *)arg2;
- (bool)selectionInteraction:(PKSelectionInteraction *)arg1 handleDoubleTapOnCanvasAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)selectionInteraction:(PKSelectionInteraction *)arg1 insertSpaceDidMove:(double)arg2 inAttachment:(PKAttachmentView *)arg3;
- (NSArray *)selectionInteraction:(PKSelectionInteraction *)arg1 pasteboardRepresentationsForElements:(NSArray *)arg2 strokes:(NSSet *)arg3 inAttachment:(PKAttachmentView *)arg4;
- (struct CGPath { }*)selectionInteraction:(PKSelectionInteraction *)arg1 pathForElement:(id)arg2 inAttachment:(PKAttachmentView *)arg3;
- (void)selectionInteraction:(void *)arg1 renderPreviewForElements:(void *)arg2 inContext:(void *)arg3 withConfig:(void *)arg4 inAttachment:(void *)arg5 withCompletion:(void *)arg6; // needs 6 arg types, found 10: PKSelectionInteraction *, NSArray *, struct CGContext { }*, PKStrokeSelectionImageConfig *, PKAttachmentView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSArray *)selectionInteraction:(PKSelectionInteraction *)arg1 requestElementsInPath:(UIBezierPath *)arg2 inAttachment:(PKAttachmentView *)arg3;
- (NSArray *)selectionInteraction:(PKSelectionInteraction *)arg1 requestElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inAttachment:(PKAttachmentView *)arg3;
- (NSArray *)selectionInteraction:(PKSelectionInteraction *)arg1 selectedElementsInAttachment:(PKAttachmentView *)arg2;
- (bool)selectionInteraction:(PKSelectionInteraction *)arg1 selectionContainsPoint:(struct CGPoint { double x1; double x2; })arg2 inAttachment:(PKAttachmentView *)arg3;
- (void)selectionInteraction:(PKSelectionInteraction *)arg1 willBeginInsertSpaceInAttachment:(PKAttachmentView *)arg2;
- (void)selectionInteractionDidPaste:(PKSelectionInteraction *)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 inAttachment:(PKAttachmentView *)arg3;
- (bool)selectionInteractionShouldBegin:(PKSelectionInteraction *)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 forEvent:(UIEvent *)arg3 orGestureRecognizer:(UIGestureRecognizer *)arg4;
- (bool)selectionInteractionShouldForwardToElements:(PKSelectionInteraction *)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 forEvent:(UIEvent *)arg3;

@end
