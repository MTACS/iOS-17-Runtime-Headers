
@protocol PKPaymentPassTableCellDelegate <NSObject>

@required

- (void)addButtonPressedForPaymentPass:(PKPaymentPass *)arg1;
- (void)requestPresentationOfViewController:(UIViewController *)arg1 animated:(bool)arg2;

@end
