
@interface PCTimerActivity : NSUserActivity <PCActivity>

- (id)activityString;
- (id)bundleIdentifier;
- (id)description;
- (id)displayTitle;
- (id)fireDate;
- (id)image;
- (id)initFromTimer:(id)arg1;
- (id)initWithActivity:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (unsigned long long)pcactivityType;
- (double)timeLeft;

@end
