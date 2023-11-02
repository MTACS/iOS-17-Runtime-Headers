
@interface PaperKit.CanvasElementResizeView : UIView <UIContextMenuInteractionDelegate, UIDragInteractionDelegate_Private, UIGestureRecognizerDelegate> {
    void borderView;
    void canvas;
    void contextMenuInteraction;
    void controlHandles;
    void currentActiveHandle;
    void doubleTapGestureRecognizer;
    void dragConstainedAxis;
    void dragGestureRecognizer;
    void dragLocation;
    void draggedImage;
    void editingCanvasElements;
    void hasContextMenuInteractionVisible;
    void hasDraggingCanvasElement;
    void isResizing;
    void moreButton;
    void nudgeDelta;
    void nudgeTimer;
    void originalControlPointLocation;
    void resizeHandles;
    void resizeOriginalCoordinateSpace;
    void resizeOriginalCoordinateSpaceScaled;
    void resizeOriginalFrame;
    void rotationGestureRecognizer;
    void selection;
    void tapGestureRecognizer;
}

- (void).cxx_destruct;
- (long long)_dragInteraction:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint { double x1; double x2; })arg3;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (void)controlHandleMoved:(id)arg1;
- (void)didMoveToWindow;
- (void)doubleTapped:(id)arg1;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragMoved:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)resizeHandleMoved:(id)arg1;
- (void)rotate:(id)arg1;
- (void)rotateFromResizeHandle:(id)arg1;
- (void)tapped:(id)arg1;

@end
