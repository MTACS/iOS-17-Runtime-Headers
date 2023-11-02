
@interface SCLScheduleSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    bool  _enabled;
    SCLSchedule * _schedule;
    unsigned long long  _version;
}

@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly, copy) SCLSchedule *schedule;
@property (nonatomic, readonly) unsigned long long version;

// Image: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime

+ (bool)supportsSecureCoding;
+ (unsigned long long)version;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateIntervalForActiveScheduleOnOrAfterDate:(id)arg1 calendar:(id)arg2;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endTimeForDay:(long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSchoolModeScheduleSettings:(id)arg1;
- (bool)isActiveAtDate:(id)arg1 calendar:(id)arg2;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)recurrenceForActiveScheduleOnOrAfterDate:(id)arg1 calendar:(id)arg2;
- (id)schedule;
- (id)startTimeForDay:(long long)arg1;
- (unsigned long long)version;

// Image: /System/Library/PrivateFrameworks/SchoolTimeSettingsUI.framework/SchoolTimeSettingsUI

+ (id)scheduleSettingsWithViewModel:(id)arg1;

@end
