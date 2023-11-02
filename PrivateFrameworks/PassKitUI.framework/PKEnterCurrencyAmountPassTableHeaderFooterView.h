
@interface PKEnterCurrencyAmountPassTableHeaderFooterView : UITableViewHeaderFooterView {
    PKEnterCurrencyAmountPassView * _amountPassView;
    <PKEnterCurrencyAmountPassViewDelegate> * _delegate;
}

@property (nonatomic, readonly) PKEnterCurrencyAmountPassView *amountPassView;
@property (nonatomic) <PKEnterCurrencyAmountPassViewDelegate> *delegate;

- (void).cxx_destruct;
- (double)_bottomPadding;
- (id)amountPassView;
- (id)delegate;
- (id)initWithCurrenyAmount:(id)arg1 pass:(id)arg2;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
