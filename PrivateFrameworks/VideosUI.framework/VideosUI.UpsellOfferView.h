
@interface VideosUI.UpsellOfferView : VUIBaseView {
    void backgroundImageModel;
    void backgroundImageView;
    void contentLogoView;
    void contentTextLabel;
    void contextImageView;
    void coverArtImageView;
    void currentIsAXEnabled;
    void currentPrefersUberLayout;
    void currentWidth;
    void debugUIOverlay;
    void descriptionLabel;
    void layout;
    void storedGradientLayer;
    void storedGradientView;
    void tagsView;
    void titleLabel;
    void upsellViewModel;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)handleGroupWatchActivityStateDidChange:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;
- (struct CGSize { double x1; double x2; })vui_sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
