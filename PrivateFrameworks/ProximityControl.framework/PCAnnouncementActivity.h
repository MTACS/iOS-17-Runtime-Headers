
@interface PCAnnouncementActivity : NSUserActivity <PCActivity>

- (id)activityString;
- (id)bundleIdentifier;
- (id)description;
- (id)image;
- (id)init;
- (id)initWithActivity:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (unsigned long long)pcactivityType;

@end
