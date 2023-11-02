
@protocol WDUserActivityResponder <NSObject>

@required

- (void)applyChangeActivity:(NSDictionary *)arg1;
- (<WDUserActivityResponder> *)applyTransitionActivity:(NSDictionary *)arg1;

@optional

- (NSString *)uniqueUserActivityType;

@end
