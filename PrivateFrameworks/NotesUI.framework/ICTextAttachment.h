
@interface ICTextAttachment : ICBaseTextAttachment

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (double)defaultAttachmentThumbnailViewHeight;
+ (Class)textAttachmentClassForAttachment:(id)arg1;
+ (bool)textAttachmentIsContent:(id)arg1;
+ (id)textAttachmentWithAttachment:(id)arg1;

- (id)attachmentAsNSTextAttachment;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForAttributes:(id)arg1 location:(id)arg2 textContainer:(id)arg3 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 position:(struct CGPoint { double x1; double x2; })arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 glyphPosition:(struct CGPoint { double x1; double x2; })arg3 characterIndex:(unsigned long long)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsIncludingMarginsFromAttachmentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { double x1; double x2; double x3; double x4; })attachmentBoundsMargins;
- (id)attachmentFileWrapper;
- (struct CGSize { double x1; double x2; })attachmentSizeForTextContainer:(id)arg1;
- (struct CGSize { double x1; double x2; })attachmentSizeForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)availableWidthForTextContainer:(id)arg1;
- (id)initWithData:(id)arg1 ofType:(id)arg2;
- (bool)isUnsupported;
- (bool)requiresSpaceAfterAttachmentForPrinting;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

- (struct CGSize { double x1; double x2; })attachmentSizeForImageInTextContainer:(id)arg1 intrinsicImageSize:(struct CGSize { double x1; double x2; })arg2;
- (double)attachmentThumbnailViewHeight;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 attributes:(id)arg2 location:(id)arg3 textContainer:(id)arg4;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
- (void)placeView:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inParentView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5;
- (id)viewForLayoutManager:(id)arg1;
- (id)viewProviderForParentView:(id)arg1 characterIndex:(unsigned long long)arg2 layoutManager:(id)arg3;
- (id)viewProviderForParentView:(id)arg1 location:(id)arg2 textContainer:(id)arg3;

@end
