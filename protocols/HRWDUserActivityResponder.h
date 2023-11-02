
@protocol HRWDUserActivityResponder <NSObject>

@required

- (void)applyChangeActivity:(NSDictionary *)arg1;
- (<HRWDUserActivityResponder> *)applyTransitionActivity:(NSDictionary *)arg1;

@optional

- (NSString *)uniqueUserActivityType;

@end
