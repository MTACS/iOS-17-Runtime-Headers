
@interface PLLibraryScopeConditionDateRange : PLLibraryScopeCondition {
    NSDate * _endDate;
    NSDate * _startDate;
}

@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) NSDate *startDate;

+ (id)conditionWithSingleQueries:(id)arg1 criteria:(unsigned char)arg2;
+ (bool)supportsQueryKey:(int)arg1;

- (void).cxx_destruct;
- (id)conditionQuery;
- (id)description;
- (id)endDate;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;
- (unsigned char)type;

@end
