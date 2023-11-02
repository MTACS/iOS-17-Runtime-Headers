
@interface PXFocusRing : UIView {
    CALayer * _focusLayer;
    CALayer * _innerLayer;
    CALayer * _outerLayer;
}

+ (void)updateView:(id)arg1 infoProviderBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_updateColors;
- (void)_updateWithInfo:(id)arg1;
- (void)_updateWithView:(id)arg1;
- (void)_updateWithView:(id)arg1 focusRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 cornerRadius:(double)arg3 innerBorderWidth:(double)arg4 outerBorderWidth:(double)arg5;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
