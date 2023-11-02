
@interface PKPayLaterFinancingPlansFetcherRequest : NSObject {
    NSMutableArray * _completions;
    NSDate * _startDate;
}

@property (nonatomic, retain) NSMutableArray *completions;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (void)callCompletionsWithResult:(id)arg1;
- (bool)coalesceRequest:(id)arg1;
- (id)completions;
- (id)initWithStartDate:(id)arg1 completion:(id /* block */)arg2;
- (void)setCompletions:(id)arg1;
- (id)startDate;

@end
