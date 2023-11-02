
@interface FHAmountAggregateFeature : FHAggregateFeature {
    long long  _amount;
    NSString * _comparator;
}

@property (nonatomic) long long amount;
@property (nonatomic, copy) NSString *comparator;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)amount;
- (id)comparator;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAmount:(unsigned long long)arg1 comparator:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAmount:(long long)arg1;
- (void)setComparator:(id)arg1;

@end
