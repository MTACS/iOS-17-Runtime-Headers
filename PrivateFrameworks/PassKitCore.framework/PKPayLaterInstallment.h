
@interface PKPayLaterInstallment : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _appliedPayments;
    PKCurrencyAmount * _currentBalance;
    NSDate * _dueDate;
    NSString * _installmentIdentifier;
    long long  _interval;
    NSArray * _payments;
    NSDate * _payoffDate;
    NSString * _planIdentifier;
    unsigned long long  _status;
    PKCurrencyAmount * _totalAmount;
}

@property (nonatomic, copy) NSArray *appliedPayments;
@property (nonatomic, copy) PKCurrencyAmount *currentBalance;
@property (nonatomic, copy) NSDate *dueDate;
@property (nonatomic, copy) NSString *installmentIdentifier;
@property (nonatomic) long long interval;
@property (nonatomic, copy) NSArray *payments;
@property (nonatomic, copy) NSDate *payoffDate;
@property (nonatomic, copy) NSString *planIdentifier;
@property (nonatomic) unsigned long long status;
@property (nonatomic, copy) PKCurrencyAmount *totalAmount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)amountPaid;
- (id)appliedPayments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentBalance;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dueDate;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)installmentIdentifier;
- (long long)interval;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPayLaterInstallment:(id)arg1;
- (bool)paymentIdentitiferContributedToInstallment:(id)arg1;
- (id)payments;
- (id)payoffDate;
- (id)planIdentifier;
- (void)setAppliedPayments:(id)arg1;
- (void)setCurrentBalance:(id)arg1;
- (void)setDueDate:(id)arg1;
- (void)setInstallmentIdentifier:(id)arg1;
- (void)setInterval:(long long)arg1;
- (void)setPayments:(id)arg1;
- (void)setPayoffDate:(id)arg1;
- (void)setPlanIdentifier:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setTotalAmount:(id)arg1;
- (unsigned long long)status;
- (id)totalAmount;

@end
