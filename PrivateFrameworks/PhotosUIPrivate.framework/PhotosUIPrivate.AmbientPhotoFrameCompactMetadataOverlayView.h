
@interface PhotosUIPrivate.AmbientPhotoFrameCompactMetadataOverlayView : UIView {
    void $__lazy_storage_$_titleFontDescriptor;
    void $__lazy_storage_$_titleMaximumFont;
    void $__lazy_storage_$_titleMinimumFont;
    void $__lazy_storage_$_titleMultilineParagraphAttributes;
    void maximumTitleFontSize;
    void minimumTitleFontSize;
    void subtitleLabel;
    void subtitleLabelBottomConstraint;
    void titleAlignment;
    void titleAlignmentConstraints;
    void titleLabel;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)safeAreaInsetsDidChange;

@end
