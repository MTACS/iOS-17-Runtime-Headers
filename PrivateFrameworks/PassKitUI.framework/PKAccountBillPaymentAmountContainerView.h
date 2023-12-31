
@interface PKAccountBillPaymentAmountContainerView : UIView {
    PKEnterCurrencyAmountView * _enterCurrencyAmountView;
    bool  _showAmount;
}

@property (nonatomic, retain) PKEnterCurrencyAmountView *enterCurrencyAmountView;
@property (nonatomic) bool showAmount;

- (void).cxx_destruct;
- (double)_amountLabelFontSize;
- (id)enterCurrencyAmountView;
- (id)initWithCurrencyCode:(id)arg1 minimumAmount:(id)arg2;
- (void)layoutSubviews;
- (void)setEnterCurrencyAmountView:(id)arg1;
- (void)setShowAmount:(bool)arg1;
- (bool)showAmount;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
