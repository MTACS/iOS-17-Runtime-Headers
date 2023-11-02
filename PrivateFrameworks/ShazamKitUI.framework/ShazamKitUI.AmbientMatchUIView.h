
@interface ShazamKitUI.AmbientMatchUIView : UIView {
    void $__lazy_storage_$_albumArtContainerViewHeightConstraint;
    void $__lazy_storage_$_albumArtImageViewCenterYConstraint;
    void $__lazy_storage_$_placeholderViewCenterYConstraint;
    void albumArtContainerView;
    void albumArtImageView;
    void appleMusicButton;
    void artistLabel;
    void placeholderArtworkView;
    void shazamCountLabel;
    void shazamCountStackView;
    void shazamLogoImageView;
    void titleLabel;
    void trackDetailsStackView;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;

@end
