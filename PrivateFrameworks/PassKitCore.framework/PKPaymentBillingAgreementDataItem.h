
@interface PKPaymentBillingAgreementDataItem : PKPaymentDataItem

@property (nonatomic, readonly, copy) NSString *billingAgreement;

+ (long long)dataType;

- (id)billingAgreement;
- (long long)context;
- (bool)isValidWithError:(id*)arg1;

@end
