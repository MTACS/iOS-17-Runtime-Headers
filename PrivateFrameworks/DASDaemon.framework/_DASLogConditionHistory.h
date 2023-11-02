
@interface _DASLogConditionHistory : NSObject {
    NSMutableArray * _conditions;
    NSMutableArray * _intervals;
}

@property (nonatomic, retain) NSMutableArray *conditions;
@property (nonatomic, retain) NSMutableArray *intervals;

+ (id)condition:(id)arg1 fromDate:(id)arg2;

- (void).cxx_destruct;
- (void)addCondition:(id)arg1 atDate:(id)arg2;
- (id)conditions;
- (id)description;
- (id)idealIntervals;
- (id)initWithCondition:(id)arg1 fromDate:(id)arg2;
- (id)intervals;
- (void)setConditions:(id)arg1;
- (void)setIntervals:(id)arg1;

@end
