
@interface NSDateInterval : NSObject <CMSCoding, HKDateInterval, NSCopying, NSSecureCoding, WDDataListDataObjectSource, _HKDateBounded>

@property (nonatomic, readonly) unsigned long long bls_machContinuousEndTime;
@property (nonatomic, readonly) unsigned long long bls_machContinuousStartTime;
@property (nonatomic, readonly) unsigned long long bls_machDuration;
@property (nonatomic, readonly) bool crk_containsCurrentDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double duration;
@property (readonly, copy) NSDate *endDate;
@property (nonatomic, readonly, copy) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDate *startDate;
@property (readonly, copy) NSDate *startDate;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)supportsSecureCoding;

- (long long)compare:(id)arg1;
- (bool)containsDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 duration:(double)arg2;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)intersectionWithDateInterval:(id)arg1;
- (bool)intersectsDateInterval:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDateInterval:(id)arg1;
- (id)startDate;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)hk_allTime;
+ (id)hk_dateIntervalForDayFromDate:(id)arg1 calendar:(id)arg2;
+ (id)hk_dateIntervalWithAnchor:(id)arg1 startOffset:(double)arg2 endOffset:(double)arg3;
+ (id)hk_dateIntervalWithStart:(double)arg1 end:(double)arg2;
+ (id)hk_instantaneousDateIntervalWithDate:(id)arg1;
+ (id)hk_sleepDayIntervalForMorningIndex:(long long)arg1 calendar:(id)arg2;
+ (id)hk_sleepDayIntervalForMorningIndexRange:(struct { long long x1; long long x2; })arg1 calendar:(id)arg2;
+ (id)hk_sleepWeekIntervalForMorningIndex:(long long)arg1 calendar:(id)arg2;

- (id)_hk_dateForYearMonthDayComponents:(id)arg1 hourMinuteSecondComponents:(id)arg2 calendar:(id)arg3;
- (bool)hk_containsTime:(double)arg1;
- (id)hk_dateIntervalByMappingToSleepDayWithMorningIndex:(long long)arg1 calendar:(id)arg2;
- (bool)hk_intersectsDateIntervalWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)hk_prettyString;

// Image: /System/Library/PrivateFrameworks/BacklightServices.framework/BacklightServices

- (bool)bls_containsDate:(id)arg1 withEpsilon:(double)arg2;
- (bool)bls_containsDate:(id)arg1 withEpsilon:(double)arg2 outDelta:(double*)arg3;
- (id)bls_initWithStartMachContinuousTime:(unsigned long long)arg1 endMachContinuousTime:(unsigned long long)arg2;
- (id)bls_loggingString;
- (unsigned long long)bls_machContinuousEndTime;
- (unsigned long long)bls_machContinuousStartTime;
- (unsigned long long)bls_machDuration;
- (id)bls_shortLoggingString;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

- (bool)crk_containsCurrentDate;
- (id)crk_dateIntervalByAddingTimeInterval:(double)arg1;

// Image: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit

+ (id)instanceFromCMSCoded:(id)arg1;

- (id)cmsCoded;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

- (id)wf_initWithDaysAfterCurrentDate:(unsigned long long)arg1;
- (id)wf_initWithDaysBeforeAndAfterCurrentDate:(unsigned long long)arg1;
- (id)wf_initWithDaysBeforeCurrentDate:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

+ (id)dnds_dateIntervalForScheduleSettings:(id)arg1 date:(id)arg2 calendar:(id)arg3;
+ (id)dnds_dateIntervalUntilEndOfScheduleForScheduleSettings:(id)arg1 startDate:(id)arg2 calendar:(id)arg3;

- (unsigned long long)dnds_lifetimePhaseForDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthHearing.framework/HealthHearing

- (id)hk_hearingSevenDayDoseDateIntervalClampedToMaxDuration;

// Image: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon

+ (id)hd_hearingSevenDayDoseLimitIntervalForNowDate:(id)arg1;
+ (id)hd_hearingSevenDayLimitIntervalWithEndDate:(id)arg1;
+ (id)hd_hearingSevenDayLimitIntervalWithStartDate:(id)arg1 earliestStartDate:(id)arg2 boundedInterval:(bool)arg3;

// Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox

- (id)device;
- (id)source;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)hk_dateIntervalWithCodableDateInterval:(id)arg1 sourceTimeZone:(id)arg2;
+ (id)hk_dateIntervalWithValueRange:(id)arg1;
+ (id)hk_julianDayDateIntervalFromOpenUpperBoundDateInterval:(id)arg1 sourceCalendar:(id)arg2 localCalendar:(id)arg3;

- (id)hk_codableDateInterval;
- (id)hk_dateIntervalShiftedToQueryAlignment:(long long)arg1 calendar:(id)arg2;
- (id)hk_dateIntervalUnshiftedFromQueryAlignment:(long long)arg1 calendar:(id)arg2;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (unsigned long long)hf_searchResultForDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

+ (id)mtDateIntervalWithEndDate:(id)arg1 duration:(double)arg2;

- (bool)mtContainsDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (double)fc_durationOfDateIntervalsIgnoringOverlap:(id)arg1;
+ (id)fc_safeDateIntervalWithStartDate:(id)arg1 endDate:(id)arg2;

- (id)fc_unionWithDateInterval:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ReminderKitInternal.framework/ReminderKitInternal

+ (double)rem1Day;
+ (double)rem1Hour;
+ (double)rem1Minute;
+ (double)rem1Month30Days;
+ (double)rem1Second;
+ (double)rem1Week;
+ (double)rem1Year;
+ (double)remNotificationFireDateGracePeriod;

// Image: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime

+ (id)SCL_dateIntervalForActiveScheduleOnOrAfterDate:(id)arg1 calendar:(id)arg2 startComponents:(id)arg3 endComponents:(id)arg4;

// Image: /System/Library/PrivateFrameworks/Sleep.framework/Sleep

- (id)hkspDescription;
- (bool)hksp_containsDate:(id)arg1;
- (bool)hksp_containsDate:(id)arg1 searchOptions:(unsigned long long)arg2;
- (bool)hksp_overlapsInterval:(id)arg1;
- (bool)hksp_overlapsInterval:(id)arg1 searchOptions:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance

+ (id)createIntervalSafelyWithStartDate:(id)arg1 endDate:(id)arg2;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (bool)_ui_containsDay:(id)arg1;
- (bool)_ui_containsMonth:(id)arg1;
- (id)_ui_dateInRangeForDate:(id)arg1;

@end
