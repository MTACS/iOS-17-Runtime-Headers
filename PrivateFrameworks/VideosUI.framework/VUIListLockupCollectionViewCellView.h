
@interface VUIListLockupCollectionViewCellView : VUIBaseView {
    FocusableTextView * _descriptionTextView;
    long long  _imagePosition;
    UIView * _imageView;
    VUIButton * _primaryButton;
    VUIButton * _secondaryButton;
    VUISeparatorView * _separatorView;
    VUILabel * _subTitleLabel;
    VUILabel * _titleLabel;
}

@property (nonatomic, retain) FocusableTextView *descriptionTextView;
@property (nonatomic) long long imagePosition;
@property (nonatomic, retain) UIView *imageView;
@property (nonatomic, retain) VUIButton *primaryButton;
@property (nonatomic, retain) VUIButton *secondaryButton;
@property (nonatomic, retain) VUISeparatorView *separatorView;
@property (nonatomic, retain) VUILabel *subTitleLabel;
@property (nonatomic, retain) VUILabel *titleLabel;

- (void).cxx_destruct;
- (id)descriptionTextView;
- (long long)imagePosition;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)primaryButton;
- (id)secondaryButton;
- (id)separatorView;
- (void)setDescriptionTextView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImagePosition:(long long)arg1;
- (void)setImageView:(id)arg1;
- (void)setPrimaryButton:(id)arg1;
- (void)setSecondaryButton:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (id)titleLabel;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;
- (void)vui_prepareForReuse;
- (void)vui_setHighlighted:(bool)arg1;

@end
