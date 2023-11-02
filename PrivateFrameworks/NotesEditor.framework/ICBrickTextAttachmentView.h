
@interface ICBrickTextAttachmentView : ICAttachmentView {
    ICAttachmentBrickView * _attachmentBrickView;
}

@property (nonatomic, retain) ICAttachmentBrickView *attachmentBrickView;

- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (id)accessibilityUserInputLabels;
- (id)accessibilityValue;
- (id)attachmentBrickView;
- (struct CGSize { double x1; double x2; })attachmentSizeForTextContainer:(id)arg1;
- (void)dealloc;
- (void)didChangeAttachment;
- (void)didChangeAttachmentTitle;
- (id)imageForPrinting;
- (id)quickLookTransitionView;
- (void)requestAttachmentContentUpdate;
- (void)setAttachmentBrickView:(id)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setHighlightPatternRegexFinder:(id)arg1;
- (void)setupConstraints;
- (void)sharedInit:(bool)arg1;
- (void)updateCornerRadius;

@end
