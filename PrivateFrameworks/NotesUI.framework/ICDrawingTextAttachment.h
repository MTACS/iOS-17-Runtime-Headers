
@interface ICDrawingTextAttachment : ICTextAttachment

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (struct { double x1; double x2; double x3; double x4; })attachmentBoundsMargins;
- (id)attachmentFileWrapper;
- (id)printableTextAttachment;
- (bool)requiresSpaceAfterAttachmentForPrinting;
- (bool)supportsMultipleThumbnailsOnSameLine;
- (double)viewCornerRadius;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

- (struct CGSize { double x1; double x2; })attachmentSizeForTextContainer:(id)arg1;
- (Class)attachmentViewClassForTextContainer:(id)arg1;
- (double)availableWidthForTextContainer:(id)arg1;
- (id)newlyCreatedViewForManualRenderingInTextContainer:(id)arg1;
- (void)placeView:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inParentView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5;

@end
