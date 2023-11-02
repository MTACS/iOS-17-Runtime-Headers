
@interface PKPaymentPayLaterFinancingDataItem : PKPaymentDataItem

@property (nonatomic, readonly) PKPayLaterProductAssessmentCollection *assessmentCollection;
@property (nonatomic, readonly) PKPayLaterFinancingOption *previouslySelectedFinancingOption;
@property (nonatomic, readonly) PKPayLaterFinancingOption *selectedFinancingOption;

+ (long long)dataType;

- (id)assessmentCollection;
- (id)billingAddress;
- (long long)context;
- (id)errors;
- (bool)isValidWithError:(id*)arg1;
- (bool)isValidWithError:(id*)arg1 errorStatus:(long long*)arg2;
- (id)paymentContactFormatErrors;
- (id)previouslySelectedFinancingOption;
- (bool)requiresBillingAddress;
- (id)selectedFinancingOption;

@end
