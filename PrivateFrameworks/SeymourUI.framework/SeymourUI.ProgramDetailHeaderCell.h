
@interface SeymourUI.ProgramDetailHeaderCell : UICollectionViewCell {
    void artworkView;
    void contentLayoutGuide;
    void contentLayoutGuideLeftConstraint;
    void contentLayoutGuideTopConstraint;
    void contentLayoutGuideWidthConstraint;
    void currentContainerSize;
    void currentLayout;
    void delegate;
    void isMinFontPreferred;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  itemInfo;
    void layout;
    void oldWidth;
    void previewButton;
    void previewButtonPlatter;
    void previewButtonRightConstraint;
    void previewButtonWidthConstraint;
    void subtitleLabel;
    void textContainer;
    void titleLabel;
    void vibrantShadowView;
}

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)playButtonTapped:(id)arg1;
- (void)prepareForReuse;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)traitCollectionDidChange:(id)arg1;

@end
