
@protocol SUUIMediaQueryDelegate <NSObject>

@required

- (id)mediaQueryEvaluator:(SUUIMediaQueryEvaluator *)arg1 valueForKey:(NSString *)arg2;

@optional

- (void)mediaQueryEvaluatorDidChange:(SUUIMediaQueryEvaluator *)arg1;

@end
