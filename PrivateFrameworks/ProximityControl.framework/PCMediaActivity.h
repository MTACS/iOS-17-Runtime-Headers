
@interface PCMediaActivity : NSUserActivity <PCActivity>

+ (id)titleForContentItem:(id)arg1;
+ (id)userActivityInfoFor:(id)arg1 inContext:(id)arg2;

- (id)activityString;
- (id)artWork;
- (long long)behavior;
- (id)bundleIdentifier;
- (id)description;
- (long long)direction;
- (id)image;
- (id)initWithActivity:(id)arg1;
- (id)initWithDisplayContext:(id)arg1 response:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (long long)mediaType;
- (unsigned long long)pcactivityType;
- (unsigned int)playbackState;
- (id)shortDescription;

@end
