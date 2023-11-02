
@protocol UISApplicationStateServiceDataSource <NSObject>

@optional

- (id)badgeValue;
- (NSDate *)nextWakeDate;
- (void)setBadgeValue:(id)arg1;
- (void)setNextWakeDate:(NSDate *)arg1;
- (void)setUsesBackgroundNetwork:(bool)arg1;
- (bool)usesBackgroundNetwork;

@end
