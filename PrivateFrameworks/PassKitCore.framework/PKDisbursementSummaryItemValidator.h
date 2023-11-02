
@interface PKDisbursementSummaryItemValidator : PKPaymentSummaryItemValidator

+ (Class)validatedClass;
+ (id)validatorWithObject:(id)arg1;

- (id)initWithDisbursementSummaryItem:(id)arg1;
- (bool)isValidWithAPIType:(long long)arg1 withError:(id*)arg2;
- (bool)isValidWithError:(id*)arg1;

@end