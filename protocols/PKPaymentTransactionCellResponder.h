
@protocol PKPaymentTransactionCellResponder <NSObject>

@required

- (NSString *)identifier;
- (bool)isDeletable;
- (void)setDeletable:(bool)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (PKPaymentTransactionView *)transactionView;

@end
