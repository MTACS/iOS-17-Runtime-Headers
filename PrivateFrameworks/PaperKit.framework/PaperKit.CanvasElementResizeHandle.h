
@interface PaperKit.CanvasElementResizeHandle : UIView <UIPointerInteractionDelegate, UIScribbleInteractionDelegate> {
    void dragGestureRecognizer;
    void isControl;
    void type;
}

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (bool)scribbleInteraction:(id)arg1 shouldBeginAtLocation:(struct CGPoint { double x1; double x2; })arg2;

@end
