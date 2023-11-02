
@interface NSDateComponents : NSObject <CMSCoding, INJSONSerializable, NSCopying, NSSecureCoding, REDonatedActionIdentifierProviding, WFNaming>

@property (copy) NSCalendar *calendar;
@property (readonly, copy) NSDate *date;
@property long long day;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property long long era;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *hmf_localTimeDescription;
@property long long hour;
@property (getter=isLeapMonth) bool leapMonth;
@property long long minute;
@property long long month;
@property long long nanosecond;
@property long long quarter;
@property long long second;
@property (readonly) Class superclass;
@property (copy) NSTimeZone *timeZone;
@property (getter=isValidDate, readonly) bool validDate;
@property long long weekOfMonth;
@property long long weekOfYear;
@property long long weekday;
@property long long weekdayOrdinal;
@property (nonatomic, readonly, copy) NSString *wfName;
@property long long year;
@property long long yearForWeekOfYear;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)supportsSecureCoding;

- (struct __CFDateComponents { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __CFCalendar {} *x2; struct __CFTimeZone {} *x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; long long x12; long long x13; long long x14; long long x15; long long x16; long long x17; long long x18; long long x19; }*)_dateComponents;
- (id)_initWithCFDateComponents:(struct __CFDateComponents { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __CFCalendar {} *x2; struct __CFTimeZone {} *x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; long long x12; long long x13; long long x14; long long x15; long long x16; long long x17; long long x18; long long x19; }*)arg1;
- (id)calendar;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (long long)day;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)era;
- (unsigned long long)hash;
- (long long)hour;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLeapMonth;
- (bool)isLeapMonthSet;
- (bool)isValidDate;
- (bool)isValidDateInCalendar:(id)arg1;
- (long long)minute;
- (long long)month;
- (long long)nanosecond;
- (long long)quarter;
- (long long)second;
- (void)setCalendar:(id)arg1;
- (void)setDay:(long long)arg1;
- (void)setEra:(long long)arg1;
- (void)setHour:(long long)arg1;
- (void)setLeapMonth:(bool)arg1;
- (void)setMinute:(long long)arg1;
- (void)setMonth:(long long)arg1;
- (void)setNanosecond:(long long)arg1;
- (void)setQuarter:(long long)arg1;
- (void)setSecond:(long long)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setValue:(long long)arg1 forComponent:(unsigned long long)arg2;
- (void)setWeek:(long long)arg1;
- (void)setWeekOfMonth:(long long)arg1;
- (void)setWeekOfYear:(long long)arg1;
- (void)setWeekday:(long long)arg1;
- (void)setWeekdayOrdinal:(long long)arg1;
- (void)setYear:(long long)arg1;
- (void)setYearForWeekOfYear:(long long)arg1;
- (id)timeZone;
- (long long)valueForComponent:(unsigned long long)arg1;
- (long long)week;
- (long long)weekOfMonth;
- (long long)weekOfYear;
- (long long)weekday;
- (long long)weekdayOrdinal;
- (long long)year;
- (long long)yearForWeekOfYear;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (Class)contactViewControllerCellClassForPropertyType:(id)arg1;
- (id)displayString;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

- (void)clearTimeComponents;
- (id)dateComponents:(unsigned long long)arg1 byAddingComponents:(id)arg2 calendar:(id)arg3;
- (id)dateComponents:(unsigned long long)arg1 byAddingDays:(int)arg2 calendar:(id)arg3;
- (id)dateComponentsForDateOnly;
- (id)dateComponentsForEndOfDay;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })gregorianDate;
- (bool)hasTimeComponents;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)hk_componentsWithDayIndex:(long long)arg1 calendar:(id)arg2;
+ (id)hk_componentsWithDays:(long long)arg1;
+ (id)hk_componentsWithHour:(long long)arg1 minute:(long long)arg2;
+ (id)hk_dateComponentsForCalendarUnit:(unsigned long long)arg1;
+ (id)hk_oneDay;
+ (id)hk_oneWeek;

- (id)_hk_dateByAddingFilteredInterval:(long long)arg1 toDate:(id)arg2;
- (id)_hk_dateComponentsMultipliedByCount:(long long)arg1;
- (long long)hk_ageWithCurrentDate:(id)arg1;
- (double)hk_approximateDuration;
- (id)hk_dateByAddingInterval:(long long)arg1 toDate:(id)arg2;
- (id)hk_dateIntervalForDate:(id)arg1 anchorDate:(id)arg2 outIndex:(long long*)arg3;
- (id)hk_dateOptionalDescription;
- (long long)hk_dayIndex;
- (id)hk_dayIndexDateDescription;
- (id)hk_hourNumber;
- (long long)hk_indexForDate:(id)arg1 anchorDate:(id)arg2;
- (long long)hk_maxComponentValue;
- (id)hk_minuteNumber;
- (id)hk_negativeComponents;
- (id)hk_populatedCalendarGregorianCalendarDefault;
- (id)hk_translateDateComponentsToCalendar:(id)arg1 calendarUnits:(unsigned long long)arg2;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing

+ (id)as_dateComponentsWithCodable:(id)arg1;

- (id)as_codableDateComponents;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

+ (id)atx_componentsFromDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (bool)isSameDayAsComponents:(id)arg1;
- (bool)isSameMonthAsComponents:(id)arg1;
- (bool)isSameYearAsComponents:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

+ (id)CalComponentForDays:(long long)arg1;
+ (id)CalComponentForHours:(long long)arg1;
+ (id)CalComponentForMinutes:(long long)arg1;
+ (id)CalComponentForMonths:(long long)arg1;
+ (id)CalComponentForWeeks:(long long)arg1;
+ (id)CalComponentForYears:(long long)arg1;
+ (id)CalComponentsWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6;

- (void)CalClearTimeComponents;
- (id)CalDateComponents:(unsigned long long)arg1 byAddingComponents:(id)arg2 calendar:(id)arg3;
- (id)CalDateComponents:(unsigned long long)arg1 byAddingDays:(int)arg2 calendar:(id)arg3;
- (id)CalDateComponentsForDateOnly;
- (id)CalDateComponentsForEndOfDay;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })CalGregorianDate;
- (bool)CalHasTimeComponents;
- (bool)CalIsSameDayAsComponents:(id)arg1;
- (bool)CalIsSameMonthAsComponents:(id)arg1;
- (bool)CalIsSameYearAsComponents:(id)arg1;
- (id)CalRepresentedDate;

// Image: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit

+ (id)instanceFromCMSCoded:(id)arg1;

- (id)cmsCoded;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

+ (id)_cn_dateComponentsFromDictionary:(id)arg1;

- (id)_cn_dictionaryRepresentation;
- (bool)_cn_isEmpty;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

- (id)wfName;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

+ (id)sg_dateComponentsFromISO8601String:(id)arg1;

- (id)schema;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

+ (id)hmf_unarchiveFromData:(id)arg1 error:(id*)arg2;

- (id)hmf_localTimeDescription;
- (id)localTimeDescription;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)hk_dateComponentsWithCodableDateComponents:(id)arg1;
+ (id)hk_dateComponentsWithCodableDateComponents:(id)arg1 calendarUnits:(unsigned long long)arg2;

- (id)hk_codableDateComponents;
- (id)hk_codableDateComponentsForCalendarUnits:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)_hkui_dateComponentsWithCodableDateComponents:(id)arg1 calendarUnits:(unsigned long long)arg2;
+ (id)hk_chartStatisticsIntervalComponentsForValue:(long long)arg1 forComponent:(unsigned long long)arg2;
+ (id)hkui_dateComponentsWithCodableDateComponents:(id)arg1;

- (id)_hkui_codableDateComponentsForCalendarUnits:(unsigned long long)arg1;
- (id)hkui_codableDateComponents;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (unsigned long long)_hf_allPossibleComponents;
+ (id)hf_biweeklyIntervalComponents;
+ (id)hf_componentsWithHour:(long long)arg1 minute:(long long)arg2;
+ (id)hf_dailyIntervalComponents;
+ (id)hf_dailyWeekdayIntervalComponents;
+ (id)hf_dailyWeekdayIntervalComponentsWithCalendar:(id)arg1;
+ (id)hf_monthlyIntervalComponents;
+ (id)hf_weeklyIntervalComponents;
+ (id)hf_yearlyIntervalComponents;
+ (id)hf_zeroDateComponentsWithComponents:(unsigned long long)arg1 calendar:(id)arg2;

- (id)hf_absoluteValue;
- (long long)hf_compareNextMatchingDate:(id)arg1;
- (long long)hf_compareNextMatchingDate:(id)arg1 withCalendar:(id)arg2;
- (bool)hf_isEqualToHomeKitRecurrence:(id)arg1;
- (id)hf_negativeValue;
- (double)hf_timeInterval;
- (unsigned long long)hf_validComponents;

// Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit

- (id)description;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

- (double)mtTimeIntervalSinceComponents:(id)arg1;
- (double)mtTimeIntervalSinceComponents:(id)arg1 now:(id)arg2;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

- (unsigned long long)re_actionIdentifierHashValue;

// Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit

+ (id)rem_dateComponentsWithDate:(id)arg1 timeZone:(id)arg2 isAllDay:(bool)arg3;
+ (id)rem_dateComponentsWithDateUsingArchivingTimeZone:(id)arg1 isAllDay:(bool)arg2;
+ (id)rem_dateComponentsWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 allDay:(bool)arg7 timeZone:(id)arg8;
+ (id)rem_dateWithDateComponents:(id)arg1 timeZone:(id)arg2;
+ (id)rem_dateWithDateComponentsUsingArchivingTimeZone:(id)arg1;

- (id)rem_allDayDateComponents;
- (long long)rem_compare:(id)arg1;
- (id)rem_dateComponentsByAddingTimeInterval:(double)arg1;
- (id)rem_gregorianEquivalent;
- (bool)rem_isAllDayDateComponents;
- (bool)rem_isValidDateComponents;
- (bool)rem_isWeekendDateComponents;
- (id)rem_stringRepresentation;
- (id)rem_strippingTimeZone;

// Image: /System/Library/PrivateFrameworks/Sleep.framework/Sleep

- (long long)hksp_compareHourAndMinuteComponents:(id)arg1;
- (id)hksp_description;
- (id)hksp_timeComponents;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (unsigned long long)_ui_largerComponentsRelativeToComponent:(unsigned long long)arg1;
+ (id)_ui_namesForComponents:(unsigned long long)arg1;
+ (unsigned long long)_ui_smallerComponentsRelativeToComponent:(unsigned long long)arg1;
+ (unsigned long long)smaller:(bool)arg1 componentsRelativeToComponent:(unsigned long long)arg2;

- (id)_ui_conciseDescription;
- (void)_ui_setComponents:(id)arg1;
- (void)_ui_setValue:(long long)arg1 forComponent:(unsigned long long)arg2;
- (long long)_ui_valueForComponent:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation

+ (id)wf_nowDateComponents;

@end
