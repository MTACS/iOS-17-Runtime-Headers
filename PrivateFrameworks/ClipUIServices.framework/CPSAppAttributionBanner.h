
@interface CPSAppAttributionBanner : UIView {
    CPSAppStoreButton * _appStoreButton;
    UIImageView * _iconView;
    CPSHighlightForwardingButton * _overlayButton;
    PLPlatterView * _platterView;
    CPSLabelWithPlaceholder * _subtitleLabel;
    UILabel * _supertitleLabel;
    id /* block */  _tapAction;
    CPSLabelWithPlaceholder * _titleLabel;
}

@property (nonatomic, retain) UIImage *icon;
@property (nonatomic) bool showsAppStoreButton;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *supertitle;
@property (nonatomic, copy) id /* block */ tapAction;
@property (nonatomic, copy) NSString *title;

+ (id)preferredImageDescriptor;

- (void).cxx_destruct;
- (void)_handleTap:(id)arg1;
- (void)commonInit;
- (id)icon;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIcon:(id)arg1;
- (void)setShowsAppStoreButton:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSupertitle:(id)arg1;
- (void)setTapAction:(id /* block */)arg1;
- (void)setTitle:(id)arg1;
- (bool)showsAppStoreButton;
- (id)subtitle;
- (id)supertitle;
- (id /* block */)tapAction;
- (id)title;

@end
