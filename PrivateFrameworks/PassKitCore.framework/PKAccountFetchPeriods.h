
@interface PKAccountFetchPeriods : NSObject <NSCopying, NSSecureCoding> {
    double  _accountFetchPeriod;
    NSSet * _blockedEndpoints;
    double  _extendedAccountFetchPeriod;
    double  _financingPlansFetchPeriod;
    double  _fundingSourcesFetchPeriod;
    double  _promotionsFetchPeriod;
    double  _sharedCloudStoreModelFetchPeriod;
    double  _usersFetchPeriod;
}

@property (nonatomic) double accountFetchPeriod;
@property (nonatomic, copy) NSSet *blockedEndpoints;
@property (nonatomic) double extendedAccountFetchPeriod;
@property (nonatomic) double financingPlansFetchPeriod;
@property (nonatomic) double fundingSourcesFetchPeriod;
@property (nonatomic) double promotionsFetchPeriod;
@property (nonatomic) double sharedCloudStoreModelFetchPeriod;
@property (nonatomic) double usersFetchPeriod;

+ (bool)isLastUpdatedOutOfDate:(id)arg1 fetchPeriod:(double)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)accountFetchPeriod;
- (id)blockedEndpoints;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)endpointIsBlocked:(unsigned long long)arg1;
- (double)extendedAccountFetchPeriod;
- (double)fetchPeriodForEndpoint:(unsigned long long)arg1;
- (double)financingPlansFetchPeriod;
- (double)fundingSourcesFetchPeriod;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAccountFetchPeriods:(id)arg1;
- (double)promotionsFetchPeriod;
- (void)setAccountFetchPeriod:(double)arg1;
- (void)setBlockedEndpoints:(id)arg1;
- (void)setExtendedAccountFetchPeriod:(double)arg1;
- (void)setFinancingPlansFetchPeriod:(double)arg1;
- (void)setFundingSourcesFetchPeriod:(double)arg1;
- (void)setPromotionsFetchPeriod:(double)arg1;
- (void)setSharedCloudStoreModelFetchPeriod:(double)arg1;
- (void)setUsersFetchPeriod:(double)arg1;
- (double)sharedCloudStoreModelFetchPeriod;
- (double)usersFetchPeriod;

@end
