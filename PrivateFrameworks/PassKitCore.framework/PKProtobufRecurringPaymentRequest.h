
@interface PKProtobufRecurringPaymentRequest : PBRequest <NSCopying> {
    NSString * _billingAgreement;
    NSString * _managementURL;
    NSString * _paymentDescription;
    PKProtobufPaymentSummaryItem * _regularBilling;
    NSString * _tokenNotificationURL;
    PKProtobufPaymentSummaryItem * _trialBilling;
}

@property (nonatomic, retain) NSString *billingAgreement;
@property (nonatomic, readonly) bool hasBillingAgreement;
@property (nonatomic, readonly) bool hasManagementURL;
@property (nonatomic, readonly) bool hasPaymentDescription;
@property (nonatomic, readonly) bool hasRegularBilling;
@property (nonatomic, readonly) bool hasTokenNotificationURL;
@property (nonatomic, readonly) bool hasTrialBilling;
@property (nonatomic, retain) NSString *managementURL;
@property (nonatomic, retain) NSString *paymentDescription;
@property (nonatomic, retain) PKProtobufPaymentSummaryItem *regularBilling;
@property (nonatomic, retain) NSString *tokenNotificationURL;
@property (nonatomic, retain) PKProtobufPaymentSummaryItem *trialBilling;

- (void).cxx_destruct;
- (id)billingAgreement;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBillingAgreement;
- (bool)hasManagementURL;
- (bool)hasPaymentDescription;
- (bool)hasRegularBilling;
- (bool)hasTokenNotificationURL;
- (bool)hasTrialBilling;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)managementURL;
- (void)mergeFrom:(id)arg1;
- (id)paymentDescription;
- (bool)readFrom:(id)arg1;
- (id)regularBilling;
- (void)setBillingAgreement:(id)arg1;
- (void)setManagementURL:(id)arg1;
- (void)setPaymentDescription:(id)arg1;
- (void)setRegularBilling:(id)arg1;
- (void)setTokenNotificationURL:(id)arg1;
- (void)setTrialBilling:(id)arg1;
- (id)tokenNotificationURL;
- (id)trialBilling;
- (void)writeTo:(id)arg1;

@end
