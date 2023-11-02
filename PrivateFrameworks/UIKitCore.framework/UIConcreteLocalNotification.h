
@interface UIConcreteLocalNotification : UILocalNotification <NSSecureCoding> {
    NSString * alertAction;
    NSString * alertBody;
    NSString * alertLaunchImage;
    NSString * alertTitle;
    long long  applicationIconBadgeNumber;
    NSString * category;
    NSDate * fireDate;
    bool  hasAction;
    CLRegion * region;
    bool  regionTriggersOnce;
    NSCalendar * repeatCalendar;
    unsigned long long  repeatInterval;
    NSString * soundName;
    NSTimeZone * timeZone;
    NSData * userInfoData;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setUserInfoData:(id)arg1;
- (id)alertAction;
- (id)alertBody;
- (id)alertLaunchImage;
- (id)alertTitle;
- (long long)applicationIconBadgeNumber;
- (id)category;
- (long long)compareFireDates:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fireDate;
- (bool)hasAction;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTriggeredByDate;
- (bool)isTriggeredByRegion;
- (bool)isValid;
- (id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2;
- (id)nextFireDateForLastFireDate:(id)arg1;
- (id)region;
- (bool)regionTriggersOnce;
- (id)repeatCalendar;
- (unsigned long long)repeatInterval;
- (void)setAlertAction:(id)arg1;
- (void)setAlertBody:(id)arg1;
- (void)setAlertLaunchImage:(id)arg1;
- (void)setAlertTitle:(id)arg1;
- (void)setApplicationIconBadgeNumber:(long long)arg1;
- (void)setCategory:(id)arg1;
- (void)setFireDate:(id)arg1;
- (void)setHasAction:(bool)arg1;
- (void)setRegion:(id)arg1;
- (void)setRegionTriggersOnce:(bool)arg1;
- (void)setRepeatCalendar:(id)arg1;
- (void)setRepeatInterval:(unsigned long long)arg1;
- (void)setSoundName:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)soundName;
- (id)timeZone;
- (id)userInfo;
- (void)validate;

@end
