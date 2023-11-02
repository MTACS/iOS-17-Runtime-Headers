
@protocol PKTextAttachmentResizeViewDelegate <NSObject>

@required

- (void)resizeView:(PKTextAttachmentResizeView *)arg1 finishedWithOriginalDrawingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 originalViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)resizeView:(PKTextAttachmentResizeView *)arg1 setDrawingHeight:(double)arg2 originalHeight:(double)arg3 growFromTop:(bool)arg4;
- (void)resizeViewDidUpdate:(PKTextAttachmentResizeView *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })resizeViewDrawingBounds:(PKTextAttachmentResizeView *)arg1;
- (void)resizeViewLayoutAttachment:(PKTextAttachmentResizeView *)arg1;
- (void)resizeViewRemoveAttachment:(PKTextAttachmentResizeView *)arg1;
- (UITextView *)resizeViewTextView:(PKTextAttachmentResizeView *)arg1;

@end
