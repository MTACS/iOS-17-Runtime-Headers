
@interface PKRecurringPaymentRequest : NSObject <NSCopying, NSSecureCoding> {
    NSString * _billingAgreement;
    NSURL * _managementURL;
    NSString * _paymentDescription;
    PKRecurringPaymentSummaryItem * _regularBilling;
    NSURL * _tokenNotificationURL;
    PKRecurringPaymentSummaryItem * _trialBilling;
}

@property (nonatomic, copy) NSString *billingAgreement;
@property (nonatomic, retain) NSURL *managementURL;
@property (nonatomic, copy) NSString *paymentDescription;
@property (nonatomic, retain) PKRecurringPaymentSummaryItem *regularBilling;
@property (nonatomic, retain) NSURL *tokenNotificationURL;
@property (nonatomic, retain) PKRecurringPaymentSummaryItem *trialBilling;

+ (id)recurringPaymentRequestWithProtobuf:(id)arg1;
+ (bool)supportsSecureCoding;
+ (long long)version;

- (void).cxx_destruct;
- (id)billingAgreement;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithPaymentDescription:(id)arg1 regularBilling:(id)arg2 managementURL:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRecurringPaymentRequest:(id)arg1;
- (id)managementURL;
- (id)paymentDescription;
- (id)protobuf;
- (id)regularBilling;
- (void)sanitize;
- (void)setBillingAgreement:(id)arg1;
- (void)setManagementURL:(id)arg1;
- (void)setPaymentDescription:(id)arg1;
- (void)setRegularBilling:(id)arg1;
- (void)setTokenNotificationURL:(id)arg1;
- (void)setTrialBilling:(id)arg1;
- (id)tokenNotificationURL;
- (id)trialBilling;

@end
