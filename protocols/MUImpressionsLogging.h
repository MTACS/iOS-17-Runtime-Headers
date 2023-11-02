
@protocol MUImpressionsLogging <NSObject>

@required

- (void)logImpressionElementDidEnter:(MUImpressionElement *)arg1 onDate:(NSDate *)arg2;
- (void)logImpressionElementDidExit:(MUImpressionElement *)arg1 usingEnterDate:(NSDate *)arg2 exitDate:(NSDate *)arg3;

@end
