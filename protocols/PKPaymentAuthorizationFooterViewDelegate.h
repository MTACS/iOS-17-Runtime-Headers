
@protocol PKPaymentAuthorizationFooterViewDelegate <NSObject>

@required

- (void)authorizationFooterViewPasscodeButtonPressed:(PKPaymentAuthorizationFooterView *)arg1;

@optional

- (void)authorizationFooterViewDidChangeConstraints:(PKPaymentAuthorizationFooterView *)arg1;
- (void)authorizationFooterViewWillChangeConstraints:(PKPaymentAuthorizationFooterView *)arg1;

@end
