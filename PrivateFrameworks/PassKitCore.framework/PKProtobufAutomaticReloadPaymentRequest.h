
@interface PKProtobufAutomaticReloadPaymentRequest : PBRequest <NSCopying> {
    PKProtobufPaymentSummaryItem * _automaticPaymentBilling;
    NSString * _billingAgreement;
    NSString * _managementURL;
    NSString * _paymentDescription;
    NSString * _tokenNotificationURL;
}

@property (nonatomic, retain) PKProtobufPaymentSummaryItem *automaticPaymentBilling;
@property (nonatomic, retain) NSString *billingAgreement;
@property (nonatomic, readonly) bool hasAutomaticPaymentBilling;
@property (nonatomic, readonly) bool hasBillingAgreement;
@property (nonatomic, readonly) bool hasManagementURL;
@property (nonatomic, readonly) bool hasPaymentDescription;
@property (nonatomic, readonly) bool hasTokenNotificationURL;
@property (nonatomic, retain) NSString *managementURL;
@property (nonatomic, retain) NSString *paymentDescription;
@property (nonatomic, retain) NSString *tokenNotificationURL;

- (void).cxx_destruct;
- (id)automaticPaymentBilling;
- (id)billingAgreement;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAutomaticPaymentBilling;
- (bool)hasBillingAgreement;
- (bool)hasManagementURL;
- (bool)hasPaymentDescription;
- (bool)hasTokenNotificationURL;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)managementURL;
- (void)mergeFrom:(id)arg1;
- (id)paymentDescription;
- (bool)readFrom:(id)arg1;
- (void)setAutomaticPaymentBilling:(id)arg1;
- (void)setBillingAgreement:(id)arg1;
- (void)setManagementURL:(id)arg1;
- (void)setPaymentDescription:(id)arg1;
- (void)setTokenNotificationURL:(id)arg1;
- (id)tokenNotificationURL;
- (void)writeTo:(id)arg1;

@end
