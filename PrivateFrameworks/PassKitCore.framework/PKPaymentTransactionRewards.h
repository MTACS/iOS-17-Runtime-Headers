
@interface PKPaymentTransactionRewards : NSObject <NSCopying, NSSecureCoding, PKCloudStoreCoding> {
    NSArray * _rewardsItems;
}

@property (nonatomic, retain) NSArray *rewardsItems;

+ (id)_cloudRecordKeyForRewardsProperty:(unsigned long long)arg1;
+ (id)_rewardsItemsSetFromJsonString:(id)arg1;
+ (id)recordNamePrefix;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_encodeServerDataWithCloudStoreCoder:(id)arg1 property:(unsigned long long)arg2;
- (id)_rewardItemsFromRecord:(id)arg1 property:(unsigned long long)arg2;
- (void)applyPropertiesFromCloudStoreRecord:(id)arg1;
- (void)applyPropertiesFromCloudStoreRecord:(id)arg1 property:(unsigned long long)arg2;
- (bool)containsItemOfType:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCloudStoreCoder:(id)arg1 codingType:(unsigned long long)arg2;
- (void)encodeWithCloudStoreCoder:(id)arg1 codingType:(unsigned long long)arg2 property:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)enhancedMerchantRewardsItems;
- (unsigned long long)hash;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)initWithCloudStoreCoder:(id)arg1 property:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithJsonString:(id)arg1;
- (id)initWithRewardsItems:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRewards:(id)arg1;
- (unsigned long long)itemType;
- (id)jsonArrayRepresentation;
- (id)jsonString;
- (id)primaryIdentifier;
- (id)promotionalRewardsItems;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)arg1;
- (id)rewardsItems;
- (void)setRewardsItems:(id)arg1;
- (id)totalAmountForUnit:(unsigned long long)arg1;
- (id)totalEligibleValueForUnit:(unsigned long long)arg1;

@end
