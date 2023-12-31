
@interface SL_OOPASpinnerTitle : UIView {
    UIActivityIndicatorView * _spinner;
    UILabel * _titleView;
}

@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startAnimating;
- (void)stopAnimating;
- (id)title;

@end
