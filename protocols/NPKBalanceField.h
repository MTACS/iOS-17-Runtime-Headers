
@protocol NPKBalanceField <NPKPassItemField>

@required

- (PKPaymentBalance *)balance;
- (NSString *)formattedValue;
- (bool)isPrimaryBalance;

@end
