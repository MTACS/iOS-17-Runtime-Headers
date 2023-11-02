
@protocol UITextDragSupporting <UITextDraggable>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundingRectForRange:(UITextRange *)arg1;
- (<_UITextPreviewRenderer> *)_previewRendererForRange:(UITextRange *)arg1 unifyRects:(bool)arg2;
- (bool)allowsDraggingAttachments;
- (bool)allowsEditingTextAttributes;
- (void)draggingFinished:(id <UITextDragFinishState>)arg1;
- (void)draggingStarted;

@optional

- (NSArray *)_customDraggableObjectsForRange:(UITextRange *)arg1;
- (UITextRange *)_rangeOfCustomDraggableObjectsInRange:(UITextRange *)arg1;
- (bool)_shouldObscureInput;
- (<UITextDraggableGeometry> *)_textGeometry;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_visibleRangeWithLayout:(bool)arg1;
- (void)didGenerateCancelPreview:(id)arg1;
- (void)performCancelAnimations;
- (id)willGenerateCancelPreview;

@end
