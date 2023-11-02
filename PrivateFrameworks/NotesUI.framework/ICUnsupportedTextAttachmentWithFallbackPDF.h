
@interface ICUnsupportedTextAttachmentWithFallbackPDF : ICPDFTextAttachment

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (id)attachmentAsNSTextAttachment;
- (bool)supportsMultipleThumbnailsOnSameLine;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

- (struct CGSize { double x1; double x2; })attachmentSizeForTextContainer:(id)arg1;
- (Class)attachmentViewClassForTextContainer:(id)arg1;
- (short)effectiveAttachmentViewSizeForTextContainer:(id)arg1;

@end
