
@protocol PKTextAttachment <NSObject>

@optional

- (void)drawingDataDidChange:(PKDrawing *)arg1 view:(UIView<PKTextAttachmentView> *)arg2;
- (void)resetZoom;

@end
