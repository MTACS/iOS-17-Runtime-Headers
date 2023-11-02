
@interface PKPaymentApplicationUsageSummary : NSObject <NSSecureCoding> {
    NSDate * _lastUsed;
    NSDate * _lastUsedTransaction;
    NSString * _passUniqueIdentifier;
    NSString * _paymentApplicationIdentifier;
}

@property (nonatomic, retain) NSDate *lastUsed;
@property (nonatomic, retain) NSDate *lastUsedTransaction;
@property (nonatomic, retain) NSString *passUniqueIdentifier;
@property (nonatomic, retain) NSString *paymentApplicationIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_databaseInit;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPassUniqueIdentifier:(id)arg1 paymentApplicationIdentifier:(id)arg2 lastUsed:(id)arg3;
- (id)initWithPassUniqueIdentifier:(id)arg1 paymentApplicationIdentifier:(id)arg2 lastUsed:(id)arg3 lastUsedTransaction:(id)arg4;
- (id)initWithPassUniqueIdentifier:(id)arg1 paymentApplicationIdentifier:(id)arg2 lastUsedTransaction:(id)arg3;
- (id)lastUsed;
- (id)lastUsedTransaction;
- (id)passUniqueIdentifier;
- (id)paymentApplicationIdentifier;
- (void)setLastUsed:(id)arg1;
- (void)setLastUsedTransaction:(id)arg1;
- (void)setPassUniqueIdentifier:(id)arg1;
- (void)setPaymentApplicationIdentifier:(id)arg1;
- (void)updateWithSummary:(id)arg1;

@end
