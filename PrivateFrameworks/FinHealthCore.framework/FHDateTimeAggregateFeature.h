
@interface FHDateTimeAggregateFeature : FHAggregateFeature {
    NSDate * _endDate;
    NSDate * _startDate;
}

@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
