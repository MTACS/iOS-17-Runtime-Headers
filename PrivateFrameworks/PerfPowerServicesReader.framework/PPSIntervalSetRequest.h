
@interface PPSIntervalSetRequest : PPSDataRequest <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetrics:(id)arg1 predicate:(id)arg2 timeFilter:(id)arg3;

@end
