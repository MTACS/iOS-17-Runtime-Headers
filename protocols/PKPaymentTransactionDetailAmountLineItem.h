
@protocol PKPaymentTransactionDetailAmountLineItem <NSObject>

@required

- (bool)hasTrailingLineSeperator;
- (bool)isEmphasized;
- (NSString *)label;
- (unsigned long long)lineItemType;
- (NSString *)value;

@end
