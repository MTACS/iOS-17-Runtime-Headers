
@interface PKPaletteToolPickerEdgeView : UIView {
    long long  _axis;
    bool  _flipHorizontally;
    bool  _flipVertically;
    CAGradientLayer * _gradientLayer;
    CAGradientLayer * _maskLayer;
}

- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;

@end
