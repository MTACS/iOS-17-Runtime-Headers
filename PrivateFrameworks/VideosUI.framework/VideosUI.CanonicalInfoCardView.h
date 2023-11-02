
@interface VideosUI.CanonicalInfoCardView : VUIBaseView {
    void descriptionLabel;
    void imageView;
    void layout;
    void subtitleLabel;
    void tableView;
    void titleLabel;
}

@property (nonatomic, readonly) FocusableTextView *accessibilityDescriptionLabel;
@property (nonatomic, readonly) VUIImageView *accessibilityImageView;
@property (nonatomic, readonly) VUILabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) _TtC8VideosUI20TomatometerTableView *accessibilityTableView;
@property (nonatomic, readonly) VUILabel *accessibilityTitleLabel;

- (void).cxx_destruct;
- (id)accessibilityDescriptionLabel;
- (id)accessibilityImageView;
- (id)accessibilitySubtitleLabel;
- (id)accessibilityTableView;
- (id)accessibilityTitleLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;
- (void)vui_prepareForReuse;

@end
