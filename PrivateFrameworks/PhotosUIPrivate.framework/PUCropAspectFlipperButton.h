
@interface PUCropAspectFlipperButton : UIButton {
    long long  _orientation;
    CALayer * _pageLayer;
    CALayer * _selectionCheckboxLayer;
}

@property long long orientation;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (long long)orientation;
- (void)setEnabled:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setSelected:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
