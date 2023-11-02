
@interface PKProtobufDeferredPaymentRequest : PBRequest <NSCopying> {
    NSString * _billingAgreement;
    PKProtobufPaymentSummaryItem * _deferredBilling;
    double  _freeCancellationDate;
    NSString * _freeCancellationDateTimeZone;
    struct { 
        unsigned int freeCancellationDate : 1; 
    }  _has;
    NSString * _managementURL;
    NSString * _paymentDescription;
    NSString * _tokenNotificationURL;
}

@property (nonatomic, retain) NSString *billingAgreement;
@property (nonatomic, retain) PKProtobufPaymentSummaryItem *deferredBilling;
@property (nonatomic) double freeCancellationDate;
@property (nonatomic, retain) NSString *freeCancellationDateTimeZone;
@property (nonatomic, readonly) bool hasBillingAgreement;
@property (nonatomic, readonly) bool hasDeferredBilling;
@property (nonatomic) bool hasFreeCancellationDate;
@property (nonatomic, readonly) bool hasFreeCancellationDateTimeZone;
@property (nonatomic, readonly) bool hasManagementURL;
@property (nonatomic, readonly) bool hasPaymentDescription;
@property (nonatomic, readonly) bool hasTokenNotificationURL;
@property (nonatomic, retain) NSString *managementURL;
@property (nonatomic, retain) NSString *paymentDescription;
@property (nonatomic, retain) NSString *tokenNotificationURL;

- (void).cxx_destruct;
- (id)billingAgreement;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deferredBilling;
- (id)description;
- (id)dictionaryRepresentation;
- (double)freeCancellationDate;
- (id)freeCancellationDateTimeZone;
- (bool)hasBillingAgreement;
- (bool)hasDeferredBilling;
- (bool)hasFreeCancellationDate;
- (bool)hasFreeCancellationDateTimeZone;
- (bool)hasManagementURL;
- (bool)hasPaymentDescription;
- (bool)hasTokenNotificationURL;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)managementURL;
- (void)mergeFrom:(id)arg1;
- (id)paymentDescription;
- (bool)readFrom:(id)arg1;
- (void)setBillingAgreement:(id)arg1;
- (void)setDeferredBilling:(id)arg1;
- (void)setFreeCancellationDate:(double)arg1;
- (void)setFreeCancellationDateTimeZone:(id)arg1;
- (void)setHasFreeCancellationDate:(bool)arg1;
- (void)setManagementURL:(id)arg1;
- (void)setPaymentDescription:(id)arg1;
- (void)setTokenNotificationURL:(id)arg1;
- (id)tokenNotificationURL;
- (void)writeTo:(id)arg1;

@end
