
@interface _UITextPlaceholderAttachment : NSTextAttachment {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _attachmentRange;
    NSDictionary * _typingAttributesBeforeInsertion;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } attachmentRange;
@property (nonatomic, copy) NSDictionary *typingAttributesBeforeInsertion;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })attachmentRange;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
- (void)setAttachmentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTypingAttributesBeforeInsertion:(id)arg1;
- (id)typingAttributesBeforeInsertion;

@end
