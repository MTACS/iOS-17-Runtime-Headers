
@interface LNDateRelevantCondition : LNRelevantCondition {
    NSDate * _endDate;
    NSDate * _startDate;
}

@property (nonatomic, readonly, copy) NSDate *endDate;
@property (nonatomic, readonly, copy) NSDate *startDate;

- (void).cxx_destruct;
- (id)endDate;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)startDate;

@end
