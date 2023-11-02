
@interface PKAccountPayment : NSObject <NSSecureCoding, PKRecordObject> {
    bool  _cancellable;
    NSDate * _cancellationExpiryDate;
    NSString * _clientReferenceIdentifier;
    PKCurrencyAmount * _currencyAmount;
    NSDate * _expectedCreditReleaseDate;
    PKAccountPaymentFundingSource * _fundingSource;
    NSString * _identifier;
    NSDate * _paymentDate;
    NSDate * _paymentStatusDate;
    NSString * _referenceIdentifier;
    PKAccountPaymentScheduleDetails * _scheduleDetails;
    long long  _state;
    long long  _statusCode;
}

@property (nonatomic) bool cancellable;
@property (nonatomic, copy) NSDate *cancellationExpiryDate;
@property (nonatomic, copy) NSString *clientReferenceIdentifier;
@property (nonatomic, retain) PKCurrencyAmount *currencyAmount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *expectedCreditReleaseDate;
@property (nonatomic, retain) PKAccountPaymentFundingSource *fundingSource;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDate *paymentDate;
@property (nonatomic, copy) NSDate *paymentStatusDate;
@property (nonatomic, copy) NSString *referenceIdentifier;
@property (nonatomic, retain) PKAccountPaymentScheduleDetails *scheduleDetails;
@property (nonatomic) long long state;
@property (nonatomic) long long statusCode;
@property (readonly) Class superclass;

+ (id)recordNamePrefix;
+ (id)recordType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)cancellable;
- (id)cancellationExpiryDate;
- (id)clientReferenceIdentifier;
- (id)currencyAmount;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithRecord:(id)arg1;
- (id)expectedCreditReleaseDate;
- (id)fundingSource;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 productTimeZone:(id)arg2;
- (id)initWithRecord:(id)arg1;
- (bool)isCurrentlyCancellable;
- (bool)isEqual:(id)arg1;
- (bool)isOnHoldForAccount:(id)arg1;
- (bool)isRecurring;
- (id)paymentDate;
- (id)paymentStatusDate;
- (id)referenceIdentifier;
- (id)scheduleDetails;
- (void)setCancellable:(bool)arg1;
- (void)setCancellationExpiryDate:(id)arg1;
- (void)setClientReferenceIdentifier:(id)arg1;
- (void)setCurrencyAmount:(id)arg1;
- (void)setExpectedCreditReleaseDate:(id)arg1;
- (void)setFundingSource:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPaymentDate:(id)arg1;
- (void)setPaymentStatusDate:(id)arg1;
- (void)setReferenceIdentifier:(id)arg1;
- (void)setScheduleDetails:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setStatusCode:(long long)arg1;
- (long long)state;
- (long long)statusCode;
- (bool)willSkipFirstPaymentForAccount:(id)arg1;

@end
