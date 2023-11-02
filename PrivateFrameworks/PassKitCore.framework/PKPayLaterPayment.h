
@interface PKPayLaterPayment : NSObject <NSCopying, NSSecureCoding> {
    PKCurrencyAmount * _amount;
    NSString * _associatedTransactionPaymentHash;
    PKPayLaterPaymentFundingSource * _fundingSource;
    PKCurrencyAmount * _fundingSourceRefundAmount;
    PKCurrencyAmount * _interestPaid;
    NSString * _paymentIdentifier;
    NSDate * _postedDate;
    PKCurrencyAmount * _principalPaid;
    unsigned long long  _type;
}

@property (nonatomic, retain) PKCurrencyAmount *amount;
@property (nonatomic, copy) NSString *associatedTransactionPaymentHash;
@property (nonatomic, retain) PKPayLaterPaymentFundingSource *fundingSource;
@property (nonatomic, retain) PKCurrencyAmount *fundingSourceRefundAmount;
@property (nonatomic, retain) PKCurrencyAmount *interestPaid;
@property (nonatomic, copy) NSString *paymentIdentifier;
@property (nonatomic, copy) NSDate *postedDate;
@property (nonatomic, retain) PKCurrencyAmount *principalPaid;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)amount;
- (id)associatedTransactionPaymentHash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)fundingSource;
- (id)fundingSourceRefundAmount;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)interestPaid;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPayLaterPayment:(id)arg1;
- (id)paymentIdentifier;
- (id)postedDate;
- (id)principalPaid;
- (void)setAmount:(id)arg1;
- (void)setAssociatedTransactionPaymentHash:(id)arg1;
- (void)setFundingSource:(id)arg1;
- (void)setFundingSourceRefundAmount:(id)arg1;
- (void)setInterestPaid:(id)arg1;
- (void)setPaymentIdentifier:(id)arg1;
- (void)setPostedDate:(id)arg1;
- (void)setPrincipalPaid:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
