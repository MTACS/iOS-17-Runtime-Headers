
@interface PKSearchTransactionResult : NSObject <NSSecureCoding> {
    NSString * _passUniqueIdentifier;
    PKPaymentTransaction * _transaction;
}

@property (nonatomic, retain) NSString *passUniqueIdentifier;
@property (nonatomic, retain) PKPaymentTransaction *transaction;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)passUniqueIdentifier;
- (void)setPassUniqueIdentifier:(id)arg1;
- (void)setTransaction:(id)arg1;
- (id)transaction;

@end
