
@interface PodcastsUI.EpisodeUpsellBannerView : UIControl {
    void $__lazy_storage_$_config;
    void $__lazy_storage_$_dismissButton;
    void $__lazy_storage_$_subtitleBottomConstraint;
    void $__lazy_storage_$_subtitleLabel;
    void $__lazy_storage_$_subtitleTopAnchorConstraint;
    void $__lazy_storage_$_tapBannerGestureRecognizer;
    void $__lazy_storage_$_textLayout;
    void $__lazy_storage_$_titleLabelCenterYConstraint;
    void $__lazy_storage_$_titleTopConstraint;
    void artworkContainerView;
    void bannerType;
    void contentView;
    void hoverRecognizer;
    void isHovering;
    void tapBannerBlock;
    void tapCloseButtonBlock;
    void titleLabel;
}

- (void).cxx_destruct;
- (id)accessibilitySubtitleLabel;
- (void)cellTapped;
- (void)closeButtonTapped;
- (void)didHover:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;

@end
