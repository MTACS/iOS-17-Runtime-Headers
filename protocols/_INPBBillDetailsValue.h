
@protocol _INPBBillDetailsValue <NSObject>

@required

- (int)StringAsBillType:(NSString *)arg1;
- (int)StringAsStatus:(NSString *)arg1;
- (_INPBCurrencyAmountValue *)amountDue;
- (_INPBBillPayeeValue *)billPayee;
- (int)billType;
- (NSString *)billTypeAsString:(int)arg1;
- (_INPBDateTime *)dueDate;
- (bool)hasAmountDue;
- (bool)hasBillPayee;
- (bool)hasBillType;
- (bool)hasDueDate;
- (bool)hasLateFee;
- (bool)hasMinimumDue;
- (bool)hasPaymentDate;
- (bool)hasStatus;
- (bool)hasValueMetadata;
- (_INPBCurrencyAmountValue *)lateFee;
- (_INPBCurrencyAmountValue *)minimumDue;
- (_INPBDateTime *)paymentDate;
- (void)setAmountDue:(_INPBCurrencyAmountValue *)arg1;
- (void)setBillPayee:(_INPBBillPayeeValue *)arg1;
- (void)setBillType:(int)arg1;
- (void)setDueDate:(_INPBDateTime *)arg1;
- (void)setHasBillType:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setLateFee:(_INPBCurrencyAmountValue *)arg1;
- (void)setMinimumDue:(_INPBCurrencyAmountValue *)arg1;
- (void)setPaymentDate:(_INPBDateTime *)arg1;
- (void)setStatus:(int)arg1;
- (void)setValueMetadata:(_INPBValueMetadata *)arg1;
- (int)status;
- (NSString *)statusAsString:(int)arg1;
- (_INPBValueMetadata *)valueMetadata;

@end
