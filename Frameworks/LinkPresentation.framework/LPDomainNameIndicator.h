
@interface LPDomainNameIndicator : LPComponentView {
    UIVisualEffectView * _blurView;
    UIImageView * _glyphView;
    UILabel * _label;
    UIVisualEffectView * _vibrancyView;
}

- (void).cxx_destruct;
- (id)initWithHost:(id)arg1;
- (id)initWithHost:(id)arg1 domainName:(id)arg2 theme:(id)arg3;
- (void)layoutComponentView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
