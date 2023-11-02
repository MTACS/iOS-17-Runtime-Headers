
@protocol WFTextAttachmentInteractionDelegate <NSObject>

@required

- (void)textAttachmentInteraction:(WFTextAttachmentInteraction *)arg1 didTapTextAttachment:(NSTextAttachment *)arg2 inCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

@optional

- (bool)textAttachmentInteraction:(WFTextAttachmentInteraction *)arg1 shouldRecognizeTapOnTextAttachment:(NSTextAttachment *)arg2 inCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

@end
