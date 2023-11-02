
@protocol PKPaymentDashboardCellActionHandleable <NSObject>

@required

- (bool)enableDisclosure;
- (PKPaymentPass *)pass;
- (long long)viewType;

@optional

- (void)setActionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIView<PKPaymentDashboardCellActionHandleable> *, PKPaymentPassAction *, void*

@end
