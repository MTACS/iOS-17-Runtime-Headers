
@interface SBAlertItemWindow : SBSecureWindow {
    SBAlertLayoutPresentationVerifier * _alertLayoutPresentationVerifier;
}

@property (nonatomic) SBAlertLayoutPresentationVerifier *alertLayoutPresentationVerifier;

- (void).cxx_destruct;
- (bool)_canBecomeKeyWindow;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)alertLayoutPresentationVerifier;
- (id)initWithWindowScene:(id)arg1 role:(id)arg2 debugName:(id)arg3 alertLayoutPresentationVerifier:(id)arg4;
- (void)setAlertLayoutPresentationVerifier:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;

@end
