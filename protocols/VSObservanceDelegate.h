
@protocol VSObservanceDelegate <NSObject>

@required

- (void)observeChange:(NSDictionary *)arg1 forObservance:(VSObservance *)arg2;

@end
