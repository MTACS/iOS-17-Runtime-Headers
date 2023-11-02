
@interface HKMedicalDate : NSObject <NSCopying, NSSecureCoding> {
    long long  _form;
    NSString * _originalTimeZoneString;
    NSDate * _underlyingDate;
}

@property (nonatomic, readonly, copy) NSDate *dateForUTC;
@property (nonatomic, readonly) long long form;
@property (nonatomic, readonly, copy) NSString *originalTimeZoneString;
@property (nonatomic, readonly, copy) NSDate *underlyingDate;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_adjustDate:(id)arg1 calendar:(id)arg2 form:(long long)arg3;
+ (unsigned long long)_calendarUnitForForm:(long long)arg1;
+ (id)_descriptionForForm:(long long)arg1;
+ (id)_medicalDateWithForm:(long long)arg1 underlyingDate:(id)arg2 originalTimeZoneString:(id)arg3;
+ (bool)_validForm:(long long)arg1;
+ (id)medicalDateFromComponents:(id)arg1 originalTimeZoneString:(id)arg2 form:(long long)arg3 error:(id*)arg4;
+ (id)medicalDateFromDate:(id)arg1 originalTimeZone:(id)arg2;
+ (id)medicalDateWithYear:(long long)arg1 error:(id*)arg2;
+ (id)medicalDateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 error:(id*)arg4;
+ (id)medicalDateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 nanosecond:(long long)arg7 originalTimeZoneString:(id)arg8 error:(id*)arg9;
+ (id)medicalDateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 originalTimeZoneString:(id)arg7 error:(id*)arg8;
+ (id)medicalDateWithYear:(long long)arg1 month:(long long)arg2 error:(id*)arg3;
+ (id)referenceCalendar;
+ (id)referenceCalendarWithLocalTimezone;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithForm:(long long)arg1 underlyingDate:(id)arg2 originalTimeZoneString:(id)arg3;
- (id)adjustedDateForCalendar:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateForUTC;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)form;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isCompatibleWithMedicalDateForm:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)originalTimeZoneString;
- (id)underlyingDate;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

- (id)hr_dateWithoutTime;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)displayStringForDate:(id)arg1 form:(long long)arg2 originalTimeZoneString:(id)arg3;

- (id)displayString;
- (id)displayStringWithPreferredForm:(long long)arg1 includeTimeZone:(bool)arg2;
- (id)displayStringWithTimeZone;

@end
