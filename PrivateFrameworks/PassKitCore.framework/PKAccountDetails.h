
@interface PKAccountDetails : NSObject <NSCopying, NSSecureCoding> {
    PKAppleBalanceAccountDetails * _appleBalanceDetails;
    PKCreditAccountDetails * _creditDetails;
    PKPayLaterAccountDetails * _payLaterDetails;
    PKSavingsAccountDetails * _savingsDetails;
    unsigned long long  _type;
}

@property (nonatomic, readonly) PKAppleBalanceAccountDetails *appleBalanceDetails;
@property (nonatomic, readonly) PKCreditAccountDetails *creditDetails;
@property (nonatomic, readonly) PKPayLaterAccountDetails *payLaterDetails;
@property (nonatomic, readonly) PKSavingsAccountDetails *savingsDetails;
@property (nonatomic, readonly) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appleBalanceDetails;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creditDetails;
- (id)description;
- (void)encodeWithCloudRecord:(id)arg1 codingType:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (void)ingestExtendedAccountDetails:(id)arg1;
- (id)initWithAppleBalanceDetails:(id)arg1;
- (id)initWithCloudRecord:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithCreditDetails:(id)arg1;
- (id)initWithDictionary:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithPayLaterDetails:(id)arg1;
- (id)initWithSavingsDetails:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)payLaterDetails;
- (id)savingsDetails;
- (unsigned long long)type;

@end
