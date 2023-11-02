
@interface PKCreditAccountMergeSummary : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _accountDetails;
    NSDate * _mergeDate;
    NSDecimalNumber * _totalBalance;
}

@property (nonatomic, copy) NSSet *accountDetails;
@property (nonatomic, retain) NSDate *mergeDate;
@property (nonatomic, retain) NSDecimalNumber *totalBalance;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountDetails;
- (id)accountDetailsForAccountIdentifier:(id)arg1;
- (id)accountDetailsForAltDSID:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCreditAccountMergeSummary:(id)arg1;
- (id)mergeDate;
- (void)setAccountDetails:(id)arg1;
- (void)setMergeDate:(id)arg1;
- (void)setTotalBalance:(id)arg1;
- (id)totalBalance;

@end
