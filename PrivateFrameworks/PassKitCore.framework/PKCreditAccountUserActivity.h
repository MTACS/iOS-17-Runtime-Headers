
@interface PKCreditAccountUserActivity : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accountUserAltDSID;
    NSDecimalNumber * _adjustedPurchases;
    NSDecimalNumber * _pendingPurchases;
    NSDecimalNumber * _purchases;
    NSDecimalNumber * _rewardsBalance;
    NSDecimalNumber * _rewardsEarned;
    NSDecimalNumber * _rewardsRedeemed;
}

@property (nonatomic, copy) NSString *accountUserAltDSID;
@property (nonatomic, retain) NSDecimalNumber *adjustedPurchases;
@property (nonatomic, retain) NSDecimalNumber *pendingPurchases;
@property (nonatomic, retain) NSDecimalNumber *purchases;
@property (nonatomic, retain) NSDecimalNumber *rewardsBalance;
@property (nonatomic, retain) NSDecimalNumber *rewardsEarned;
@property (nonatomic, retain) NSDecimalNumber *rewardsRedeemed;
@property (nonatomic, readonly) NSDecimalNumber *totalSpending;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountUserAltDSID;
- (id)adjustedPurchases;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCreditAccountUserActivity:(id)arg1;
- (id)pendingPurchases;
- (id)purchases;
- (id)remainingMonthlySpendWithLimit:(id)arg1;
- (id)rewardsBalance;
- (id)rewardsEarned;
- (id)rewardsRedeemed;
- (void)setAccountUserAltDSID:(id)arg1;
- (void)setAdjustedPurchases:(id)arg1;
- (void)setPendingPurchases:(id)arg1;
- (void)setPurchases:(id)arg1;
- (void)setRewardsBalance:(id)arg1;
- (void)setRewardsEarned:(id)arg1;
- (void)setRewardsRedeemed:(id)arg1;
- (id)totalSpending;

@end
