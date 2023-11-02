
@interface ICPDFTextAttachment : ICTextAttachment {
    ICPDFEncryptionStateChecker * _encryptionStateChecker;
}

@property (nonatomic, copy) ICPDFEncryptionStateChecker *encryptionStateChecker;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (void).cxx_destruct;
- (short)effectiveAttachmentViewSizeForTextContainer:(id)arg1;
- (id)encryptionStateChecker;
- (void)setEncryptionStateChecker:(id)arg1;
- (id)supportedPresentationSizes;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

- (struct CGSize { double x1; double x2; })attachmentSizeForTextContainer:(id)arg1;
- (Class)attachmentViewClassForTextContainer:(id)arg1;

@end
