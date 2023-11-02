
@interface SBUISystemApertureCAPackageButton : UIButton {
    SBUISystemApertureCAPackageContentProvider * _packageProvider;
    NSString * _state;
}

- (void).cxx_destruct;
- (bool)_updateStateAnimated:(bool)arg1;
- (id)initWithPackageProvider:(id)arg1 state:(id)arg2 primaryAction:(id)arg3;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setHighlighted:(bool)arg1;
- (bool)setState:(id)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
