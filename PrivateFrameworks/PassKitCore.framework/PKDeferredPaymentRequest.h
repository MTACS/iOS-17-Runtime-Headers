
@interface PKDeferredPaymentRequest : NSObject <NSCopying, NSSecureCoding> {
    NSString * _billingAgreement;
    PKDeferredPaymentSummaryItem * _deferredBilling;
    NSDate * _freeCancellationDate;
    NSTimeZone * _freeCancellationDateTimeZone;
    NSURL * _managementURL;
    NSString * _paymentDescription;
    NSURL * _tokenNotificationURL;
}

@property (nonatomic, copy) NSString *billingAgreement;
@property (nonatomic, retain) PKDeferredPaymentSummaryItem *deferredBilling;
@property (nonatomic, retain) NSDate *freeCancellationDate;
@property (nonatomic, retain) NSTimeZone *freeCancellationDateTimeZone;
@property (nonatomic, retain) NSURL *managementURL;
@property (nonatomic, copy) NSString *paymentDescription;
@property (nonatomic, retain) NSURL *tokenNotificationURL;

+ (id)deferredPaymentRequestWithProtobuf:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)billingAgreement;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deferredBilling;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)freeCancellationDate;
- (id)freeCancellationDateTimeZone;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentDescription:(id)arg1 deferredBilling:(id)arg2 managementURL:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDeferredPaymentRequest:(id)arg1;
- (id)managementURL;
- (id)paymentDescription;
- (id)protobuf;
- (void)sanitize;
- (void)setBillingAgreement:(id)arg1;
- (void)setDeferredBilling:(id)arg1;
- (void)setFreeCancellationDate:(id)arg1;
- (void)setFreeCancellationDateTimeZone:(id)arg1;
- (void)setManagementURL:(id)arg1;
- (void)setPaymentDescription:(id)arg1;
- (void)setTokenNotificationURL:(id)arg1;
- (id)tokenNotificationURL;

@end
