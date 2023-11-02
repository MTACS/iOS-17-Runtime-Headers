
@interface FHMerchantAggregateFeature : FHAggregateFeature {
    NSString * _merchantDisplayName;
    NSString * _merchantID;
}

@property (nonatomic, copy) NSString *merchantDisplayName;
@property (nonatomic, copy) NSString *merchantID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMerchantID:(id)arg1 merchantDisplayName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)merchantDisplayName;
- (id)merchantID;
- (void)setMerchantDisplayName:(id)arg1;
- (void)setMerchantID:(id)arg1;

@end
