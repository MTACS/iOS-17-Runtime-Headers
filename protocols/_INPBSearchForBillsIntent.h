
@protocol _INPBSearchForBillsIntent <NSObject>

@required

- (int)StringAsBillType:(NSString *)arg1;
- (int)StringAsStatus:(NSString *)arg1;
- (_INPBBillPayeeValue *)billPayee;
- (int)billType;
- (NSString *)billTypeAsString:(int)arg1;
- (_INPBDateTimeRange *)dueDateRange;
- (bool)hasBillPayee;
- (bool)hasBillType;
- (bool)hasDueDateRange;
- (bool)hasIntentMetadata;
- (bool)hasPaymentDateRange;
- (bool)hasStatus;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBDateTimeRange *)paymentDateRange;
- (void)setBillPayee:(_INPBBillPayeeValue *)arg1;
- (void)setBillType:(int)arg1;
- (void)setDueDateRange:(_INPBDateTimeRange *)arg1;
- (void)setHasBillType:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setPaymentDateRange:(_INPBDateTimeRange *)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (NSString *)statusAsString:(int)arg1;

@end
