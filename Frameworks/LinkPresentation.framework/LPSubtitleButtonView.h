
@interface LPSubtitleButtonView : LPComponentView {
    UIButton * _button;
    LPCaptionButtonPresentationProperties * _buttonProperties;
    LPTextViewStyle * _style;
}

- (void).cxx_destruct;
- (void)_buildSubviewsIfNeeded;
- (struct CGSize { double x1; double x2; })_layoutButtonForSize:(struct CGSize { double x1; double x2; })arg1 applyingLayout:(bool)arg2;
- (void)buttonPressed:(id)arg1;
- (id)initWithHost:(id)arg1;
- (id)initWithHost:(id)arg1 buttonProperties:(id)arg2 style:(id)arg3;
- (void)layoutComponentView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFit;
- (id)viewForLastBaselineLayout;

@end
