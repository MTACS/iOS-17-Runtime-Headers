
@interface CPSAppMetadataView : UIButton {
    UIImageView * _appIconView;
    CPSVibrantLabel * _appNameVibrantLabel;
    CPSAppStoreButton * _appStoreButton;
    CPSContentRatingContainerView * _contentRatingContainerView;
    NSArray * _leadingAppStoreButtonConstraints;
    CPSVibrantLabel * _poweredByVibrantLabel;
    NSArray * _trailingAppStoreButtonConstraints;
}

@property (nonatomic, retain) UIImage *appIcon;

- (void).cxx_destruct;
- (void)_setUpSubviews;
- (void)_updateAppStoreButtonConstraints;
- (id)appIcon;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setAppIcon:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateWithMetadata:(id)arg1;

@end
