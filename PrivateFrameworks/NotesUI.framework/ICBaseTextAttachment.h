
@interface ICBaseTextAttachment : ICAbstractTextAttachment

@property (nonatomic, retain) ICAttachment *attachment;

- (id)attachmentAttributesForAttributedString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForAttributes:(id)arg1 location:(id)arg2 textContainer:(id)arg3 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 position:(struct CGPoint { double x1; double x2; })arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 glyphPosition:(struct CGPoint { double x1; double x2; })arg3 characterIndex:(unsigned long long)arg4;
- (id)attachmentIdentifier;
- (id)attachmentInContext:(id)arg1;
- (id)attachmentUTI;
- (bool)canDragWithoutSelecting;
- (void)detachView:(id)arg1 fromParentView:(id)arg2;
- (short)effectiveAttachmentViewSizeForTextContainer:(id)arg1;
- (void)fixAttachmentForAttributedString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 forPlainText:(bool)arg3 forStandardizedText:(bool)arg4;
- (id)initWithAttachment:(id)arg1;
- (id)inlineAttachmentInContext:(id)arg1;
- (bool)isUnsupported;
- (id)printableTextContentForAppearanceType:(unsigned long long)arg1 textContainer:(id)arg2;
- (bool)supportsUserConfigurablePresentationSizeForTextContainer:(id)arg1;
- (double)viewCornerRadius;

@end
