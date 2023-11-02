
@interface HRContentStatusView : UIView {
    void spinnerView;
    void subtitle;
    void subtitleLabel;
    void title;
    void titleLabel;
}

@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2;
- (void)layoutSubviews;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)startAnimating;
- (void)stopAnimating;
- (id)subtitle;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;

@end
