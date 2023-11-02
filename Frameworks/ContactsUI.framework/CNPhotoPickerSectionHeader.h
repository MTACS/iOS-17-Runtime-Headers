
@interface CNPhotoPickerSectionHeader : UICollectionReusableView {
    id /* block */  _actionBlock;
    UIButton * _actionButton;
    UIStackView * _stackView;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) id /* block */ actionBlock;
@property (nonatomic, readonly) UIButton *actionButton;
@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic, readonly) UILabel *titleLabel;

+ (id)actionButtonFont;
+ (double)heightNeededForAccessibilityLayoutIncludingActionButton:(bool)arg1;
+ (id)reusableIdentifier;
+ (id)titleLabelFont;

- (void).cxx_destruct;
- (id /* block */)actionBlock;
- (id)actionButton;
- (void)actionButtonPressed:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setActionBlock:(id /* block */)arg1;
- (void)setStackView:(id)arg1;
- (void)setupConstraints;
- (id)stackView;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateDynamicStackViewProperties;
- (void)updateStyle:(id)arg1;

@end
