
@interface USUsageReport : NSObject <NSSecureCoding> {
    NSArray * _categoryUsage;
    NSDate * _firstPickup;
    NSDateInterval * _interval;
    NSDate * _lastEventDate;
    NSDateInterval * _longestSession;
    unsigned long long  _pickupsWithoutApplicationUsage;
    double  _screenTime;
    NSTimeZone * _timeZone;
}

@property (readonly, copy) NSArray *categoryUsage;
@property (readonly, copy) NSDate *firstPickup;
@property (readonly, copy) NSDateInterval *interval;
@property (readonly, copy) NSDate *lastEventDate;
@property (readonly, copy) NSDateInterval *longestSession;
@property (readonly, copy) NSDictionary *pickupsByBundleIdentifier;
@property (readonly) unsigned long long pickupsWithoutApplicationUsage;
@property (readonly) double screenTime;
@property (readonly, copy) NSTimeZone *timeZone;
@property (readonly, copy) NSDictionary *userNotificationsByBundleIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_addNotifications:(id)arg1 andPickups:(id)arg2 toApplicationUsageInCategoryUsage:(id)arg3;
- (void)_usUsageReportCommonInitWithScreenTime:(double)arg1 longestSession:(id)arg2 categoryUsage:(id)arg3 pickupsWithoutApplicationUsage:(unsigned long long)arg4 firstPickup:(id)arg5 interval:(id)arg6 timeZone:(id)arg7 lastEventDate:(id)arg8;
- (id)categoryUsage;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstPickup;
- (id)initWithCoder:(id)arg1;
- (id)initWithScreenTime:(double)arg1 longestSession:(id)arg2 categoryUsage:(id)arg3 notifications:(id)arg4 pickupsByBundleIdentifier:(id)arg5 pickupsWithoutApplicationUsage:(unsigned long long)arg6 firstPickup:(id)arg7 interval:(id)arg8 timeZone:(id)arg9 lastEventDate:(id)arg10;
- (id)initWithScreenTime:(double)arg1 longestSession:(id)arg2 categoryUsage:(id)arg3 pickupsWithoutApplicationUsage:(unsigned long long)arg4 firstPickup:(id)arg5 interval:(id)arg6 timeZone:(id)arg7 lastEventDate:(id)arg8;
- (id)interval;
- (id)lastEventDate;
- (id)longestSession;
- (id)pickupsByBundleIdentifier;
- (unsigned long long)pickupsWithoutApplicationUsage;
- (double)screenTime;
- (id)timeZone;
- (id)userNotificationsByBundleIdentifier;

@end
