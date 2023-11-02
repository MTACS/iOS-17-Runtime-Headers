
@protocol CALNTimeToLeaveRefreshStorage <NSObject>

@required

- (void)addRefreshDate:(NSDate *)arg1 withIdentifier:(NSString *)arg2;
- (NSDate *)refreshDateWithIdentifier:(NSString *)arg1;
- (NSDictionary *)refreshDates;
- (void)removeRefreshDateWithIdentifier:(NSString *)arg1;
- (void)removeRefreshDates;

@end
