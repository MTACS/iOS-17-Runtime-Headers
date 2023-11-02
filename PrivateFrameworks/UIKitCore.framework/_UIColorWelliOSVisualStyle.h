
@interface _UIColorWelliOSVisualStyle : _UIColorWellVisualStyle {
    UIView * _borderView;
    UIButton * _button;
    UIView * _gradientView;
    bool  _isSelected;
}

- (void).cxx_destruct;
- (void)_invokeColorPicker:(id)arg1;
- (double)_widthForTraitCollection:(id)arg1;
- (id)dragPreviewParameters;
- (id)initWithColorWell:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (void)setSelectedColor:(id)arg1;
- (void)touchDown:(id)arg1;
- (void)touchUp:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
