
@interface MFComposeActionCardTitleView : _UINavigationBarTitleView {
    UIButton * _closeButton;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) UIButton *closeButton;
@property (nonatomic, readonly) UILabel *titleLabel;

+ (double)heightForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (void)_updateHeightForCurrentTraits;
- (id)closeButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
