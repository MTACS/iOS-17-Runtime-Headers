
@protocol SBHApplication <SBLeafIconDataSource, NSObject>

@required

- (NSString *)bundleIdentifier;
- (NSURL *)bundleURL;
- (NSString *)displayName;

@optional

- (id)badgeValue;
- (bool)hasHiddenTag;
- (NSString *)iconIdentifier;
- (bool)isAppClip;
- (bool)isAppleApplication;
- (bool)isInternalApplication;
- (bool)isSystemApplication;
- (void)possibleUserTapBeganWithAbsoluteTime:(unsigned long long)arg1 andContinuousTime:(unsigned long long)arg2;
- (void)possibleUserTapDidCancel;
- (void)setBadgeValue:(id)arg1;
- (NSArray *)tags;
- (NSString *)vendorName;

@end
