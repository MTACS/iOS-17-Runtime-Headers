
@protocol Evaluator <NSObject>

@required

- (NSDictionary *)evaluateWithModelURL:(NSURL *)arg1 dataSource:(id <EvaluatorDataSource>)arg2 error:(id*)arg3;

@end
