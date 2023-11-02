
@protocol SKUIMediaQueryDelegate <NSObject>

@required

- (id)mediaQueryEvaluator:(SKUIMediaQueryEvaluator *)arg1 valueForKey:(NSString *)arg2;

@optional

- (void)mediaQueryEvaluatorDidChange:(SKUIMediaQueryEvaluator *)arg1;

@end
