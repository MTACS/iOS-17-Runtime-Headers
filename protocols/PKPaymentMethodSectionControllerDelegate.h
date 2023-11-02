
@protocol PKPaymentMethodSectionControllerDelegate <NSObject>

@required

- (void)deselectCells;
- (void)performedAddPaymentMethodWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)reloadDataAnimated:(bool)arg1;
- (void)requestOpenURL:(NSURL *)arg1;
- (void)selectedPass:(PKPaymentPass *)arg1;
- (void)toggledUseAppleCashBalance:(bool)arg1;

@end
