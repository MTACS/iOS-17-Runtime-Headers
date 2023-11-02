
@protocol ICAttachmentInsertionDelegate <NSObject>

@optional

- (void)attachmentInsertionController:(ICAttachmentInsertionController *)arg1 didAddAttachment:(ICAttachment *)arg2 atRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)attachmentInsertionController:(ICAttachmentInsertionController *)arg1 didAddInlineAttachment:(ICInlineAttachment *)arg2 atRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 textStorage:(ICTTTextStorage *)arg4;
- (void)attachmentInsertionController:(ICAttachmentInsertionController *)arg1 willAddAttachment:(ICAttachment *)arg2 atRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)attachmentInsertionController:(ICAttachmentInsertionController *)arg1 willAddInlineAttachment:(ICInlineAttachment *)arg2 atRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 textStorage:(ICTTTextStorage *)arg4;

@end
