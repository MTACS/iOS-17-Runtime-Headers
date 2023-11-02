
@interface UAFAssetSetSubscription : NSObject <NSSecureCoding> {
    NSDictionary * _assetSets;
    NSDate * _expiration;
    NSString * _name;
    NSDictionary * _usageAliases;
}

@property (readonly, copy) NSDictionary *assetSets;
@property (readonly, copy) NSDate *expiration;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *usageAliases;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetSets;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expiration;
- (id)init:(id)arg1 assetSets:(id)arg2 usageAliases:(id)arg3;
- (id)init:(id)arg1 assetSets:(id)arg2 usageAliases:(id)arg3 expires:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid:(id)arg1 error:(id*)arg2;
- (id)name;
- (id)usageAliases;

@end
