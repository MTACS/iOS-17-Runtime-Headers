
@interface PKPayLaterFinancingPlanPaymentIntentRequest : NSObject {
    NSMutableArray * _completions;
    unsigned long long  _intent;
    NSString * _planIdentifier;
}

@property (nonatomic, retain) NSMutableArray *completions;
@property (nonatomic, readonly) unsigned long long intent;
@property (nonatomic, readonly, copy) NSString *planIdentifier;

- (void).cxx_destruct;
- (void)callCompletionsWithResponse:(id)arg1 error:(id)arg2;
- (void)coalesceWithRequest:(id)arg1;
- (id)completions;
- (id)identifier;
- (id)initWithPlanIdentifier:(id)arg1 intent:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (unsigned long long)intent;
- (id)planIdentifier;
- (void)setCompletions:(id)arg1;

@end
