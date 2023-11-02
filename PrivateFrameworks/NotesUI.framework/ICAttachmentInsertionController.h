
@interface ICAttachmentInsertionController : NSObject {
    <ICAttachmentInsertionDelegate> * _attachmentDelegate;
    ICNote * _note;
}

@property (nonatomic) <ICAttachmentInsertionDelegate> *attachmentDelegate;
@property (nonatomic, readonly) ICNote *note;

- (void).cxx_destruct;
- (void)_addInlineAttachment:(id)arg1 inTextStorage:(id)arg2 atTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)addAttachment:(id)arg1;
- (void)addAttachment:(id)arg1 atTextLocation:(unsigned long long)arg2;
- (void)addAttachment:(id)arg1 atTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addInlineAttachment:(id)arg1;
- (void)addInlineAttachment:(id)arg1 atTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addInlineAttachment:(id)arg1 atTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 textView:(id)arg3;
- (id)attachmentDelegate;
- (id)init;
- (id)initWithNote:(id)arg1;
- (id)note;
- (void)setAttachmentDelegate:(id)arg1;

@end
