
@interface LNDateRelevantContext : LNRelevantContext {
    NSDate * _endDate;
    NSDate * _startDate;
}

@property (nonatomic, readonly, copy) NSDate *endDate;
@property (nonatomic, readonly, copy) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)analyticsDescription;
- (id)asCondition;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)startDate;

@end
