
@interface PKAccountBillPaymentCheckmarkRingView : UIView {
    LAUICheckmarkLayer * _checkmarkLayer;
    UIView * _ringView;
}

@property (nonatomic, retain) LAUICheckmarkLayer *checkmarkLayer;
@property (nonatomic, retain) UIView *ringView;

- (void).cxx_destruct;
- (id)checkmarkLayer;
- (id)initWithRingView:(id)arg1;
- (void)layoutSubviews;
- (id)ringView;
- (void)setCheckmarkLayer:(id)arg1;
- (void)setRingView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
