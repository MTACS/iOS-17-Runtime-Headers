
@interface ETOptimizerDefinition : NSObject {
    NSDictionary * _optimizationParameters;
    long long  _type;
}

@property (nonatomic, readonly) NSDictionary *optimizationParameters;
@property (readonly) long long type;

- (void).cxx_destruct;
- (id)initWithOptimizationAlgorithm:(long long)arg1 parameters:(id)arg2 error:(id*)arg3;
- (id)optimizationParameters;
- (long long)type;

@end
