
@protocol PCActivity

@required

- (NSString *)activityString;
- (NSString *)bundleIdentifier;
- (NSString *)description;
- (UIImage *)image;
- (id)initWithActivity:(NSUserActivity *)arg1;
- (bool)isEqual:(id <PCActivity>)arg1;
- (bool)isValid;
- (unsigned long long)pcactivityType;

@end
