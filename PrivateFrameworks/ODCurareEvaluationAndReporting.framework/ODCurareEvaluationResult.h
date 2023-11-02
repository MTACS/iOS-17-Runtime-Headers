
@interface ODCurareEvaluationResult : NSObject {
    NSString * _evaluationName;
    NSDictionary * _metadata;
    long long  _numberOfSamplesPositive;
    long long  _numberOfSamplesTotal;
}

@property (nonatomic, retain) NSString *evaluationName;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic) long long numberOfSamplesPositive;
@property (nonatomic) long long numberOfSamplesTotal;

- (void).cxx_destruct;
- (id)description;
- (id)evaluationName;
- (id)initWithEvaluationName:(id)arg1 numberOfSamplesPositive:(long long)arg2 numberOfSamplesTotal:(long long)arg3;
- (id)metadata;
- (long long)numberOfSamplesPositive;
- (long long)numberOfSamplesTotal;
- (void)setEvaluationName:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setNumberOfSamplesPositive:(long long)arg1;
- (void)setNumberOfSamplesTotal:(long long)arg1;

@end
