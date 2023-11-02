
@interface UILocalNotification : NSObject <NSCoding, NSCopying>

@property (nonatomic, copy) NSString *alertAction;
@property (nonatomic, copy) NSString *alertBody;
@property (nonatomic, copy) NSString *alertLaunchImage;
@property (nonatomic, copy) NSString *alertTitle;
@property (nonatomic) long long applicationIconBadgeNumber;
@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSDate *fireDate;
@property (nonatomic) bool hasAction;
@property (nonatomic, copy) CLRegion *region;
@property (nonatomic) bool regionTriggersOnce;
@property (nonatomic, copy) NSCalendar *repeatCalendar;
@property (nonatomic) unsigned long long repeatInterval;
@property (nonatomic, copy) NSString *soundName;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (nonatomic, copy) NSDictionary *userInfo;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (long long)compareFireDates:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isTriggeredByDate;
- (bool)isTriggeredByRegion;
- (bool)isValid;
- (id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2;
- (id)nextFireDateForLastFireDate:(id)arg1;
- (void)validate;

// Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer

- (void)uns_safeSetUserInfo:(id)arg1;

@end
