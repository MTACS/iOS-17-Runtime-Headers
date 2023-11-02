
@interface PaperKit.CanvasElementDrawingView : PKAttachmentView {
    void canvasElementView;
    void liveErasingDrawing;
    void liveStreamingDisplayLink;
    void liveStreamingStartTimeInterval;
}

@property (nonatomic, readonly) UIView *attachmentContainerView;
@property (nonatomic, readonly) bool canBecomeFirstResponder;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } drawingTransform;
@property (nonatomic, readonly) bool isAtEndOfDocument;
@property (nonatomic, readonly) PKTiledView *tiledView;
@property (nonatomic, readonly) bool updateHeightAfterDrawing;

- (void).cxx_destruct;
- (id)attachmentContainerView;
- (bool)becomeFirstResponder;
- (void)beganStroke:(id)arg1;
- (bool)canBecomeFirstResponder;
- (void)cancelledStroke:(id)arg1;
- (void)didBeginDrawing;
- (void)didMoveToWindow;
- (void)displayLinkUpdateLiveDrawing;
- (void)drawingDidChangeVisibleStrokes:(bool)arg1;
- (void)drawingDidEraseStrokes:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })drawingTransform;
- (void)endedStroke:(id)arg1;
- (double)heightFromDrawing:(id)arg1 delta:(double)arg2;
- (bool)hitByTouchLocation:(struct CGPoint { double x1; double x2; })arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)hitChrome:(struct CGPoint { double x1; double x2; })arg1 isStylus:(bool)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 drawing:(id)arg2;
- (bool)isAtEndOfDocument;
- (bool)resignFirstResponder;
- (void)selectionDidChange;
- (void)setAttachmentChromeVisible:(bool)arg1 animated:(bool)arg2 highlightBackground:(bool)arg3;
- (id)tiledView;
- (void)updateDrawingHeight:(double)arg1;
- (void)updateFrameForTextContainer;
- (bool)updateHeightAfterDrawing;

@end
