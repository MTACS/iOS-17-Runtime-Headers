
@protocol PKEnterCurrencyAmountViewDelegate <NSObject>

@required

- (bool)enterCurrencyAmountView:(PKEnterCurrencyAmountView *)arg1 shouldChangeAmountFrom:(NSDecimalNumber *)arg2 to:(NSDecimalNumber *)arg3;
- (void)enterCurrencyAmountViewDidChangeAmount:(PKEnterCurrencyAmountView *)arg1;

@optional

- (void)enterCurrencyAmountViewDidLayoutKeyboard:(PKEnterCurrencyAmountView *)arg1;

@end
