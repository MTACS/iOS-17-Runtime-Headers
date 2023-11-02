
@interface FHCategorySpendInsight : FHFeatureInsight {
    long long  merchantCategory;
}

@property (nonatomic) long long merchantCategory;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)merchantCategory;
- (void)setMerchantCategory:(long long)arg1;

@end
