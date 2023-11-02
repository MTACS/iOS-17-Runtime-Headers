
@interface PKEnterCurrencyAmountPassView : UIView {
    PKEnterValueNewBalanceView * _balanceView;
    <PKEnterCurrencyAmountPassViewDelegate> * _delegate;
    PKEnterCurrencyAmountView * _enterCurrencyAmountView;
    bool  _loadingSnapshot;
    PKPass * _pass;
    UIImageView * _passView;
}

@property (nonatomic, readonly) PKEnterValueNewBalanceView *balanceView;
@property (nonatomic) <PKEnterCurrencyAmountPassViewDelegate> *delegate;
@property (nonatomic, readonly) PKEnterCurrencyAmountView *enterCurrencyAmountView;
@property (nonatomic, retain) PKPass *pass;

- (void).cxx_destruct;
- (struct { double x1; double x2; double x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; })_amountPassViewSizeInfoForSize:(struct CGSize { double x1; double x2; })arg1;
- (double)_newBalanceHorizontalPadding;
- (struct CGSize { double x1; double x2; })_passViewSize;
- (id)balanceView;
- (id)delegate;
- (id)enterCurrencyAmountView;
- (id)initWithCurrenyAmount:(id)arg1 pass:(id)arg2 withdrawal:(bool)arg3;
- (void)layoutSubviews;
- (id)pass;
- (void)setDelegate:(id)arg1;
- (void)setPass:(id)arg1;
- (void)shakePassView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
