
@interface VideosUI.HintListCell : VUIBaseCollectionViewCell {
    void $__lazy_storage_$_accessoryImageView;
    void $__lazy_storage_$_bottomSeparatorView;
    void layout;
    void shouldShowBottomSeparator;
    void titleLabel;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;
- (void)vui_setHighlighted:(bool)arg1;
- (struct CGSize { double x1; double x2; })vui_sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
