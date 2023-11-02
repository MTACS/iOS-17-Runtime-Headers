
@interface PCAlarmActivity : NSUserActivity <PCActivity>

- (id)activityString;
- (id)bundleIdentifier;
- (id)description;
- (id)fireDate;
- (id)image;
- (id)initFromAlarm:(id)arg1;
- (id)initWithActivity:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (unsigned long long)pcactivityType;
- (id)title;

@end
