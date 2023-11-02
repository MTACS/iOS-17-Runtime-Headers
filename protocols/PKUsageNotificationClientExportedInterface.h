
@protocol PKUsageNotificationClientExportedInterface

@required

- (void)usedPassFromSource:(long long)arg1 withTypeIdentifier:(NSString *)arg2 info:(NSDictionary *)arg3;
- (void)usedPaymentPassWithTransactionIdentifier:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)usedPaymentPassWithUniqueIdentifier:(NSString *)arg1 transactionIdentifier:(NSString *)arg2 info:(NSDictionary *)arg3;

@end
