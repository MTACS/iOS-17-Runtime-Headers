
@protocol ICAttachmentViewDelegate

@required

- (void)attachmentView:(UIView *)arg1 shouldPresentAttachment:(ICAttachment *)arg2;
- (void)attachmentView:(UIView *)arg1 shouldPresentNote:(ICNote *)arg2;
- (bool)attachmentView:(UIView *)arg1 shouldRespondToPanGestureTouch:(UITouch *)arg2 forAttachment:(ICAttachment *)arg3;
- (void)attachmentView:(UIView *)arg1 shouldShareAttachment:(ICAttachment *)arg2;

@end
