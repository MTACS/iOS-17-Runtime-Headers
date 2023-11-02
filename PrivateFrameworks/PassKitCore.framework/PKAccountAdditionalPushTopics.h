
@interface PKAccountAdditionalPushTopics : NSObject <NSCopying, NSSecureCoding> {
    NSString * _account;
    NSString * _applications;
    NSString * _extendedAccount;
    NSString * _financingPlans;
    NSString * _fundingSources;
    NSString * _payments;
    NSString * _physicalCards;
    NSString * _servicingToken;
    NSString * _sharedAccountCloudStore;
    NSString * _users;
    NSString * _virtualCards;
}

@property (nonatomic, copy) NSString *account;
@property (nonatomic, copy) NSString *applications;
@property (nonatomic, copy) NSString *extendedAccount;
@property (nonatomic, copy) NSString *financingPlans;
@property (nonatomic, copy) NSString *fundingSources;
@property (nonatomic, copy) NSString *payments;
@property (nonatomic, copy) NSString *physicalCards;
@property (nonatomic, copy) NSString *servicingToken;
@property (nonatomic, copy) NSString *sharedAccountCloudStore;
@property (nonatomic, copy) NSString *users;
@property (nonatomic, copy) NSString *virtualCards;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)account;
- (id)applications;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extendedAccount;
- (id)financingPlans;
- (id)fundingSources;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)payments;
- (id)physicalCards;
- (id)servicingToken;
- (void)setAccount:(id)arg1;
- (void)setApplications:(id)arg1;
- (void)setExtendedAccount:(id)arg1;
- (void)setFinancingPlans:(id)arg1;
- (void)setFundingSources:(id)arg1;
- (void)setPayments:(id)arg1;
- (void)setPhysicalCards:(id)arg1;
- (void)setServicingToken:(id)arg1;
- (void)setSharedAccountCloudStore:(id)arg1;
- (void)setUsers:(id)arg1;
- (void)setVirtualCards:(id)arg1;
- (id)sharedAccountCloudStore;
- (id)users;
- (id)virtualCards;

@end
