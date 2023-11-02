
@interface VUIDevice : NSObject

+ (void)enablePortraitLock:(bool)arg1;
+ (id)guid;
+ (bool)isMac;
+ (bool)isPad;
+ (bool)isPhone;
+ (bool)isTV;
+ (bool)isVision;
+ (id)model;
+ (id)name;
+ (bool)supportsDeepColor;
+ (id)systemName;
+ (id)systemVersion;
+ (long long)userInterfaceIdiom;

@end
