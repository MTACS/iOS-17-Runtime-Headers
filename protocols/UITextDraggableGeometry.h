
@protocol UITextDraggableGeometry <NSObject>

@required

- (NSArray *)draggableObjectsForTextRange:(UITextRange *)arg1;
- (long long)geometryOptions;
- (UITargetedDragPreview *)previewForDroppingTextInRange:(UITextRange *)arg1 toPosition:(UITextPosition *)arg2 inContainerView:(UIView *)arg3;
- (void)setGeometryOptions:(long long)arg1;
- (id /* block */)targetedPreviewProviderForTextInRange:(void *)arg1 dismissing:(void *)arg2; // needs 2 arg types, found 8: id /* block */, UIView *, bool, void*, id, SEL, UITextRange *, bool
- (UITextRange *)textRangeForAttachmentInTextRange:(UITextRange *)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (NSArray *)textRangesForAttachmentsInTextRange:(UITextRange *)arg1;

@end
