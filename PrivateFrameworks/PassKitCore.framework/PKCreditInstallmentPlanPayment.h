
@interface PKCreditInstallmentPlanPayment : NSObject <NSCopying, NSSecureCoding> {
    NSDecimalNumber * _amountDue;
    NSDecimalNumber * _amountPaid;
    NSString * _currencyCode;
    NSDate * _dueDate;
    NSString * _identifier;
    NSArray * _lineItems;
    NSDecimalNumber * _originalAmountDue;
    unsigned long long  _paymentCount;
    unsigned long long  _paymentNumber;
    PKCreditAccountStatement * _statement;
    NSDate * _statementDate;
    NSString * _statementIdentifier;
}

@property (nonatomic, retain) NSDecimalNumber *amountDue;
@property (nonatomic, retain) NSDecimalNumber *amountPaid;
@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic, retain) NSDate *dueDate;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSArray *lineItems;
@property (nonatomic, readonly) NSString *localizedDisplay;
@property (nonatomic, retain) NSDecimalNumber *originalAmountDue;
@property (getter=isPaid, nonatomic, readonly) bool paid;
@property (nonatomic) unsigned long long paymentCount;
@property (nonatomic) unsigned long long paymentNumber;
@property (nonatomic, retain) PKCreditAccountStatement *statement;
@property (nonatomic, retain) NSDate *statementDate;
@property (nonatomic, copy) NSString *statementIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)amountDue;
- (id)amountPaid;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)dueDate;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToInstallmentPlanPayment:(id)arg1;
- (bool)isPaid;
- (id)lineItems;
- (id)localizedDisplay;
- (id)originalAmountDue;
- (unsigned long long)paymentCount;
- (unsigned long long)paymentNumber;
- (void)setAmountDue:(id)arg1;
- (void)setAmountPaid:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setDueDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLineItems:(id)arg1;
- (void)setOriginalAmountDue:(id)arg1;
- (void)setPaymentCount:(unsigned long long)arg1;
- (void)setPaymentNumber:(unsigned long long)arg1;
- (void)setStatement:(id)arg1;
- (void)setStatementDate:(id)arg1;
- (void)setStatementIdentifier:(id)arg1;
- (id)statement;
- (id)statementDate;
- (id)statementIdentifier;

@end
