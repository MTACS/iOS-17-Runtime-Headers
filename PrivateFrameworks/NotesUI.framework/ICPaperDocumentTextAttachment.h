
@interface ICPaperDocumentTextAttachment : ICSystemPaperTextAttachment {
    ICPDFEncryptionStateChecker * _encryptionStateChecker;
    bool  _viewportShouldSnapToAttachmentView;
}

@property (nonatomic, copy) ICPDFEncryptionStateChecker *encryptionStateChecker;
@property (nonatomic, readonly) bool isLegacyMediaType;
@property (nonatomic, readonly) NSURL *pdfURL;
@property (nonatomic) bool viewportShouldSnapToAttachmentView;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (void)initialize;
+ (bool)isEnabled;

- (void).cxx_destruct;
- (id)_paperBundleURL;
- (id)attachmentAsNSTextAttachment;
- (void)attachmentView:(id)arg1 didMoveToWindow:(id)arg2;
- (void)attachmentView:(id)arg1 willMoveToWindow:(id)arg2;
- (bool)canDragWithoutSelecting;
- (short)effectiveAttachmentViewSizeForTextContainer:(id)arg1;
- (id)encryptionStateChecker;
- (id)fileType;
- (id)initWithData:(id)arg1 ofType:(id)arg2;
- (id)inlineViews;
- (bool)isLegacyMediaType;
- (void)paperDidChange;
- (id)pdfURL;
- (id)printableTextContentForAppearanceType:(unsigned long long)arg1 textContainer:(id)arg2;
- (void)setEncryptionStateChecker:(id)arg1;
- (void)setViewportShouldSnapToAttachmentView:(bool)arg1;
- (id)supportedPresentationSizes;
- (bool)viewportShouldSnapToAttachmentView;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

- (id)imageForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 attributes:(id)arg2 location:(id)arg3 textContainer:(id)arg4;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
- (double)viewCornerRadius;
- (id)viewProviderForParentView:(id)arg1 location:(id)arg2 textContainer:(id)arg3;

@end
