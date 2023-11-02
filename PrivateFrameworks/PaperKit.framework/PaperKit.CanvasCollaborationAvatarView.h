
@interface PaperKit.CanvasCollaborationAvatarView : UIView {
    void $__lazy_storage_$_imageView;
    void $__lazy_storage_$_imageViewBottomConstraint;
    void $__lazy_storage_$_imageViewLeadingConstraint;
    void $__lazy_storage_$_imageViewTopConstraint;
    void $__lazy_storage_$_imageViewWidthConstraint;
    void $__lazy_storage_$_label;
    void $__lazy_storage_$_labelHeightConstraint;
    void $__lazy_storage_$_labelWidthConstraint;
    void autocollapseTimer;
    void autohideTimer;
    void boundingSuperview;
    void color;
    void fetchImage;
    void frameAnchorIsInverted;
    void frameAnchorPoint;
    void hasDisplayedInWindow;
    void isExpanded;
    void isRemovingFromSuperview;
    void name;
}

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)handleHoverWithRecognizer:(id)arg1;
- (void)handleTap:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
