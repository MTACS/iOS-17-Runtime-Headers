
@interface ICQSpinnerBezel : UIView {
    NSString * _bezelText;
    UIActivityIndicatorView * _spinner;
}

@property (nonatomic, retain) NSString *bezelText;

- (void).cxx_destruct;
- (id)bezelText;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBezelText:(id)arg1;

@end
