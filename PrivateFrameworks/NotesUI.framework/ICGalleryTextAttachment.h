
@interface ICGalleryTextAttachment : ICTextAttachment

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (id)attachmentFileWrapper;
- (double)viewCornerRadius;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

- (struct CGSize { double x1; double x2; })attachmentSizeForTextContainer:(id)arg1;
- (Class)attachmentViewClassForTextContainer:(id)arg1;
- (id)supportedPresentationSizes;

@end
