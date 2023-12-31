
@interface CertInfoCertificateListCellContentView : UIView {
    UILabel * _expirationLabel;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

- (void).cxx_destruct;
- (void)_setText:(id)arg1 forLabel:(id)arg2 withRedColor:(bool)arg3;
- (void)_setupLabel:(id)arg1 isSubtitle:(bool)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setExpiration:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;

@end
