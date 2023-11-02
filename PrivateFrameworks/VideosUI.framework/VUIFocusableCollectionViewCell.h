
@interface VUIFocusableCollectionViewCell : UICollectionViewCell {
    bool  _allowsFocus;
}

@property (nonatomic) bool allowsFocus;

- (void)_updateBackgroundAndHighlightColor;
- (bool)allowsFocus;
- (bool)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setAllowsFocus:(bool)arg1;
- (void)setHighlighted:(bool)arg1;

@end
