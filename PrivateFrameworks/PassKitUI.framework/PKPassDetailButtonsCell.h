
@interface PKPassDetailButtonsCell : PKTableViewCell {
    PKPaymentPassActionWidgetView * _widgetView;
}

- (void).cxx_destruct;
- (bool)hasEnabledWidgets;
- (id)initWithReuseIdentifier:(id)arg1 widgetViewStyle:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)setAccount:(id)arg1;
- (void)setCurrentUser:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPaymentPass:(id)arg1;
- (void)setPeerPaymentAccount:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
