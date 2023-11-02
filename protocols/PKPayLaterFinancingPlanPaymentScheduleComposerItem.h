
@protocol PKPayLaterFinancingPlanPaymentScheduleComposerItem <NSObject>

@required

- (NSDate *)date;
- (NSString *)installmentIdentifier;
- (NSString *)paymentIdentifier;
- (void)populateRow:(PKPayLaterProgressRow *)arg1;
- (unsigned long long)type;

@end
