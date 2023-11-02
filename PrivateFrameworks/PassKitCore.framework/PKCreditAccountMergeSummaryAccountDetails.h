
@interface PKCreditAccountMergeSummaryAccountDetails : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accountIdentifier;
    NSDecimalNumber * _currentBalance;
    NSString * _ownerAltDSID;
    NSDecimalNumber * _statementBalance;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, retain) NSDecimalNumber *currentBalance;
@property (nonatomic, copy) NSString *ownerAltDSID;
@property (nonatomic, retain) NSDecimalNumber *statementBalance;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentBalance;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCreditAccountMergeSummaryAccountDetails:(id)arg1;
- (id)ownerAltDSID;
- (void)setAccountIdentifier:(id)arg1;
- (void)setCurrentBalance:(id)arg1;
- (void)setOwnerAltDSID:(id)arg1;
- (void)setStatementBalance:(id)arg1;
- (id)statementBalance;

@end
