
@protocol _UITextCanvasContext <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_clipRectForFadedEdges;
- (void)didAddTextAttachmentViews:(NSSet *)arg1;
- (void)didLayoutTextAttachmentView:(UIView *)arg1 inFragmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)didRemoveTextAttachmentViews:(NSSet *)arg1;
- (bool)drawTextInRectIfNeeded:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })drawingScale;
- (UIScrollView *)enclosingScrollView;
- (bool)isEditable;
- (UIColor *)textColor;
- (NSTextContainer *)textContainer;
- (struct CGPoint { double x1; double x2; })textContainerOrigin;
- (void)textContainerUsageDidChangeToSize:(struct CGSize { double x1; double x2; })arg1;
- (_UITextLayoutControllerBase<_UITextLayoutController> *)textLayoutController;

@end
