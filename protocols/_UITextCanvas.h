
@protocol _UITextCanvas <NSObject>

@required

- (<_UITextCanvasContext> *)context;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContext:(id <_UITextCanvasContext>)arg1;
- (void)updateContentSizeIfNeeded;
- (void)viewportBoundsDidChange;

@end
