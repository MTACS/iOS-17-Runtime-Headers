
@interface NSDate : NSObject <AADataType, AFSecurityDigestibleChunksProviding, APPCSupplementalContextAllowedTypes, ASDNotificationType, CKRecordValue, CMSCoding, EFSQLBindable, EFSQLValueExpressable, FCKeyValueStoreCoding, GCSJSONSerializable, HFPropertyListConvertible, HMBQueryableModelFieldCoder, HMDOPACKValue, HMFObject, IMJSONSerializableValueProviding, INJSONSerializable, NFCBOREncodable, NSCopying, NSSecureCoding, PQLValuable, REDonatedActionIdentifierProviding, TSCHChartGridValue, WDDataListDataObjectSource, WFNaming, WFPropertyListObject, WFSerializableContent, _DKDeduping>

@property (nonatomic, readonly) NSString *_faceTimeDateString;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (nonatomic, readonly) unsigned long long bls_machContinuousTime;
@property (readonly) double bmAbsoluteTime;
@property (nonatomic, readonly) struct { unsigned short x1; unsigned short x2; } bu_DOSTime;
@property (nonatomic, readonly) int chartGridValueType;
@property (nonatomic, readonly, copy) NSString *crk_JSONStringValue;
@property (getter=crk_isInPast, readonly) bool crk_inPast;
@property (readonly, copy) NSDateComponents *dateComponents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) EFSQLBinding *ef_SQLBinding;
@property (nonatomic, readonly, copy) NSString *ef_SQLExpression;
@property (nonatomic, readonly) bool fc_isWeekend;
@property (readonly) double fc_timeIntervalUntilNow;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *hf_analyticsTimestamp;
@property (readonly, copy) NSString *hmd_snapshotFileName;
@property (readonly, copy) NSDateComponents *hmf_dateComponents;
@property (readonly, copy) NSString *hmf_localTimeDescription;
@property (nonatomic, readonly) NSString *ic_briefFormattedDate;
@property (nonatomic, readonly) NSString *ic_briefFormattedDateForAccessibility;
@property (nonatomic, readonly) NSDate *ic_endOfDay;
@property (nonatomic, readonly) bool ic_isToday;
@property (nonatomic, readonly) bool ic_isYesterday;
@property (nonatomic, readonly) NSString *ic_iso8601Date;
@property (nonatomic, readonly) NSString *ic_localDateWithSeconds;
@property (nonatomic, readonly) NSString *ic_shortFormattedDate;
@property (nonatomic, readonly) NSDate *ic_startOfDay;
@property (nonatomic, readonly) NSDate *ic_truncated;
@property (nonatomic, readonly) <GCSJSONObject> *jsonObject;
@property (readonly, copy) NSString *localTimeDescription;
@property (nonatomic, readonly) bool msv_isFuture;
@property (nonatomic, readonly) bool msv_isPast;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (nonatomic, readonly) bool rc_isWeekend;
@property (readonly) double rc_timeIntervalUntilNow;
@property (nonatomic, readonly) bool safari_isInToday;
@property (nonatomic, readonly) bool safari_isNowOrInRecentPast;
@property (nonatomic, readonly) NSDate *safari_startOfDay;
@property (nonatomic, readonly) double safari_timeIntervalUntilNow;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) double srAbsoluteTime;
@property (readonly) Class superclass;
@property (readonly) double timeIntervalSinceReferenceDate;
@property (nonatomic, readonly) struct { unsigned short x1; unsigned short x2; } tsu_DOSTime;
@property (nonatomic, readonly) NSString *vk_briefFormattedDate;
@property (nonatomic, readonly) NSString *vk_briefFormattedDateForAccessibility;
@property (nonatomic, readonly) bool vk_isToday;
@property (nonatomic, readonly) bool vk_isYesterday;
@property (nonatomic, readonly) NSString *vk_localDateWithSeconds;
@property (nonatomic, readonly) NSString *vk_shortFormattedDate;
@property (nonatomic, readonly) bool vui_isInTheFuture;
@property (nonatomic, readonly) bool vui_isInThePast;
@property (readonly) double wa_timeIntervalUntilNow;
@property (nonatomic, readonly, copy) NSString *wfName;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)date;
+ (id)dateWithDate:(id)arg1;
+ (id)dateWithString:(id)arg1;
+ (id)dateWithTimeInterval:(double)arg1 sinceDate:(id)arg2;
+ (id)dateWithTimeIntervalSince1970:(double)arg1;
+ (id)dateWithTimeIntervalSinceNow:(double)arg1;
+ (id)dateWithTimeIntervalSinceReferenceDate:(double)arg1;
+ (id)distantFuture;
+ (id)distantPast;
+ (id)now;
+ (bool)supportsSecureCoding;
+ (double)timeIntervalSinceReferenceDate;

- (unsigned long long)_cfTypeID;
- (id)addTimeInterval:(double)arg1;
- (long long)compare:(id)arg1;
- (long long)compare:(id)arg1 toUnitGranularity:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateByAddingTimeInterval:(double)arg1;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (id)earlierDate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithTimeInterval:(double)arg1 sinceDate:(id)arg2;
- (id)initWithTimeIntervalSince1970:(double)arg1;
- (id)initWithTimeIntervalSinceNow:(double)arg1;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqual:(id)arg1 toUnitGranularity:(unsigned long long)arg2;
- (bool)isEqualToDate:(id)arg1;
- (bool)isInSameDayAsDate:(id)arg1;
- (bool)isInToday;
- (bool)isInTomorrow;
- (bool)isInYesterday;
- (bool)isNSDate__;
- (id)laterDate:(id)arg1;
- (double)timeIntervalSince1970;
- (double)timeIntervalSinceDate:(id)arg1;
- (double)timeIntervalSinceNow;
- (double)timeIntervalSinceReferenceDate;

// Image: /System/Library/Frameworks/ClockKit.framework/ClockKit

- (id)JSONObjectRepresentation;
- (id)initWithJSONObjectRepresentation:(id)arg1;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;
- (double)cksqlcs_doubleBindingValue:(id*)arg1;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

- (id)localizedShortTimeInTimeZone:(id)arg1;
- (id)nextDateMatchingTimeComponents;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (id)dateWithNaturalLanguageString:(id)arg1;
+ (id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3;
+ (id)dateWithNaturalLanguageString:(id)arg1 locale:(id)arg2;

- (id)_web_RFC1123DateString;
- (long long)_web_compareDay:(id)arg1;
- (bool)_web_isToday;
- (Class)classForCoder;
- (id)dateWithCalendarFormat:(id)arg1 timeZone:(id)arg2;
- (id)descriptionWithCalendarFormat:(id)arg1 timeZone:(id)arg2 locale:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)hk_dateOnDayIndex:(long long)arg1 atHour:(long long)arg2 calendar:(id)arg3;
+ (id)hk_dateWithNanosecondsSince1970:(long long)arg1;
+ (id)hk_earliestPossibleDateWithDayIndex:(long long)arg1;
+ (id)hk_latestPossibleDateWithDayIndex:(long long)arg1;
+ (id)hk_mostRecentDate:(id)arg1;
+ (id)hk_noonWithDayIndex:(long long)arg1 calendar:(id)arg2;
+ (id)hk_sleepDayStartForMorningIndex:(long long)arg1 calendar:(id)arg2;
+ (id)hk_sleepMonthStartForMorningIndex:(long long)arg1 calendar:(id)arg2;
+ (id)hk_sleepWeekStartForMorningIndex:(long long)arg1 calendar:(id)arg2;

- (long long)hk_dayIndexWithCalendar:(id)arg1;
- (long long)hk_earliestPossibleDayIndex;
- (bool)hk_isAfterDate:(id)arg1;
- (bool)hk_isAfterOrEqualToDate:(id)arg1;
- (bool)hk_isBeforeDate:(id)arg1;
- (bool)hk_isBeforeOrEqualToDate:(id)arg1;
- (long long)hk_latestPossibleDayIndex;
- (long long)hk_morningIndexWithCalendar:(id)arg1;
- (long long)hk_nanosecondsSince1970;
- (id)hk_nearestDate:(id)arg1;
- (id)hk_rfc3339String;
- (id)hk_sleepDayStartWithCalendar:(id)arg1;
- (id)hk_truncateToDay;
- (id)hk_utcDateAdjustedToCalendar:(id)arg1;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (unsigned char)hm_dayOfTheWeek;
+ (id)hm_iso8601dateFromString:(id)arg1;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2 timeZone:(id)arg3;

// Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit

+ (id)_srGetStringFromDate:(id)arg1;

// Image: /System/Library/Frameworks/Security.framework/Security

- (double)bucketToRoundingFactor:(unsigned int)arg1;
- (double)timeIntervalSince1970WithBucket:(unsigned int)arg1;

// Image: /System/Library/Frameworks/SensorKit.framework/SensorKit

+ (id)dateWithSRAbsoluteTime:(double)arg1;
+ (id)sr_dateWithTimeIntervalSinceReferenceDate:(double)arg1 roundedDownToNearest:(double)arg2;

- (id)initWithSRAbsoluteTime:(double)arg1;
- (double)srAbsoluteTime;

// Image: /System/Library/Frameworks/SwiftUI.framework/SwiftUI

- (bool)isEarlierThanOrEqualTo:(id)arg1;

// Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount

+ (id)vs_currentDate;
+ (id)vs_dateAccessQueue;
+ (id)vs_recordedDates;
+ (void)vs_startRecordingDates;
+ (id)vs_stopRecordingDates;

- (id)vs_dateIncrementedByDays:(long long)arg1;
- (id)vs_dateIncrementedByMinutes:(unsigned long long)arg1;
- (id)vs_dateRoundedToDay;
- (bool)vs_isAfter:(id)arg1;
- (bool)vs_isBefore:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AAAFoundation.framework/AAAFoundation

- (bool)aaf_isRelative;
- (bool)aaf_isToday;
- (bool)aaf_isTodayWithCalendar:(id)arg1;
- (id)dayComponentsWithCalendar:(id)arg1;

// Image: /System/Library/PrivateFrameworks/APFoundation.framework/APFoundation

- (id)jsonRepresentationWithOptions:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime

- (id)_axRecursivelyPropertyListCoercedRepresentationWithError:(id*)arg1;
- (id)_axRecursivelyReconstitutedRepresentationFromPropertyListWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/AccessibilityAudit.framework/AccessibilityAudit

- (id)axAuditLogStringForDifferenceFromDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit

+ (id)dateFromInternetDateTimeString:(id)arg1 formatHint:(int)arg2;
+ (id)dateFromRFC3339String:(id)arg1;
+ (id)dateFromRFC822String:(id)arg1;
+ (id)dateWithEDAMTimestamp:(long long)arg1;
+ (id)internetDateTimeFormatter;

- (long long)edamTimestamp;

// Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore

+ (id)AD_dateFromServerTime:(int)arg1;
+ (int)AD_maxServerTime;
+ (int)AD_minServerTime;

- (id)AD_doubleDateTimeAsString;
- (id)AD_localDateTimeAsString;
- (int)AD_toServerTime;
- (int)AD_toSinceReferenceTime;
- (id)AD_universalDateTimeAsString;

// Image: /System/Library/PrivateFrameworks/AggregateDictionary.framework/AggregateDictionary

+ (id)dateForDaysSince1970:(int)arg1;
+ (int)daysSince1970;

- (int)daysSince1970;

// Image: /System/Library/PrivateFrameworks/AggregateDictionaryHistory.framework/AggregateDictionaryHistory

+ (id)dateForDaysSince1970:(int)arg1;
+ (int)daysSince1970;

// Image: /System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics

- (id)toJsonValueAndReturnError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient

+ (id)_atx_date;
+ (id)_atx_dateWithTimeIntervalSinceNow:(double)arg1;
+ (id)_atx_now;
+ (double)_atx_timeIntervalSinceReferenceDate;
+ (void)test_adjustCurrentDateWithTimeInterval:(double)arg1;
+ (void)test_beginManipulationOfTime;
+ (void)test_endManipulationOfTime;
+ (void)test_performBlockWithAbilityToManipulateTime:(id /* block */)arg1;
+ (void)test_setCurrentDate:(id)arg1;

- (double)_atx_timeIntervalSinceNow;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (bool)atx_isAfterDate:(id)arg1;
- (bool)atx_isBeforeDate:(id)arg1;
- (bool)atx_isInclusiveBetweenDate:(id)arg1 andDate:(id)arg2;
- (bool)atx_isOnOrAfterDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

+ (id)ams_momentInUTCGregorianAtYear:(unsigned long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 second:(unsigned long long)arg6;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (bool)_af_isSameDayAsDate:(id)arg1;
- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (bool)af_isToday;
- (bool)af_isTomorrow;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

- (id)_afui_dateStringUsingCurrentLocaleFromTemplate:(id)arg1;
- (bool)_afui_isSameDayAsDate:(id)arg1;
- (bool)afui_isToday;
- (bool)afui_isTomorrow;
- (id)afui_longYearString;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

- (id)ak_serverFriendlyString;

// Image: /System/Library/PrivateFrameworks/BacklightServices.framework/BacklightServices

- (long long)bls_compare:(id)arg1 withEpsilon:(double)arg2;
- (id)bls_fileNameString;
- (id)bls_initWithBSContinuousMachTime:(double)arg1;
- (id)bls_initWithMachContinuousTime:(unsigned long long)arg1;
- (bool)bls_isOnOrAfter:(id)arg1 andOnOrBefore:(id)arg2;
- (bool)bls_isOnOrAfter:(id)arg1 andOnOrBefore:(id)arg2 withEpsilon:(double)arg3;
- (id)bls_loggingString;
- (unsigned long long)bls_machContinuousTime;
- (id)bls_shortLoggingString;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (id)bs_dateByAddingDays:(long long)arg1;
- (bool)isAfterDate:(id)arg1;
- (bool)isBeforeDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BiomeFoundation.framework/BiomeFoundation

+ (id)dateWithBMAbsoluteTime:(double)arg1;

- (double)bmAbsoluteTime;
- (id)initWithBMAbsoluteTime:(double)arg1;

// Image: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility

- (struct { unsigned short x1; unsigned short x2; })bu_DOSTime;
- (id)bu_initWithDOSTime:(struct { unsigned short x1; unsigned short x2; })arg1;

// Image: /System/Library/PrivateFrameworks/CDMFoundation.framework/CDMFoundation

- (id)_cdm_safeJSONString;

// Image: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics

+ (id)cpa_daysAgo:(double)arg1;
+ (id)cpa_hoursAgo:(double)arg1;
+ (id)cpa_minutesAgo:(double)arg1;
+ (id)cpa_secondsAgo:(double)arg1;
+ (id)cpa_yearsAgo:(double)arg1;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

+ (id)CalDateForBeginningOfToday;
+ (id)CalDateForBeginningOfTomorrow;
+ (id)CalDateForEndOfToday;
+ (id)CalDateForEndOfTomorrow;
+ (id)CalDateForNow;
+ (id)CalSimulatedDateForNow;
+ (id)CalTimeRangeStringWithStart:(id)arg1 end:(id)arg2;
+ (id)_nowComponents;
+ (id)_todayComponents;
+ (id)_tomorrowComponents;
+ (id)calGMT;
+ (id)dateFromISO8601String:(id)arg1;
+ (id)dateFromISO8601String:(id)arg1 inTimeZone:(id)arg2;
+ (id)dateWithDatePartFromDate:(id)arg1 timePartFromDate:(id)arg2 inCalendar:(id)arg3;
+ (long long)daysSpannedFromStartDate:(id)arg1 toEndDate:(id)arg2 allDay:(bool)arg3 inCalendar:(id)arg4;
+ (id)nextRoundedChunkForDuration:(double)arg1;
+ (id)nextRoundedHour;

- (id)CalDateByComponentwiseAddingComponents:(id)arg1 inCalendar:(id)arg2;
- (id)CalDateByComponentwiseAddingHours:(long long)arg1 inCalendar:(id)arg2;
- (id)CalDateByComponentwiseAddingMinutes:(long long)arg1 inCalendar:(id)arg2;
- (id)CalDateByComponentwiseAddingSeconds:(long long)arg1 inCalendar:(id)arg2;
- (id)CalDateRoundedDownToNearestMinuteIncrement:(long long)arg1 inCalendar:(id)arg2;
- (bool)CalIsAfterDate:(id)arg1;
- (bool)CalIsAfterOrSameAsDate:(id)arg1;
- (bool)CalIsBeforeDate:(id)arg1;
- (bool)CalIsBeforeOrSameAsDate:(id)arg1;
- (bool)CalIsBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (void)_performBlockBehindDispatchSync:(id /* block */)arg1 inTimeZone:(id)arg2;
- (id)_stringWithUseAbbreviatedFormats:(bool)arg1 lowerCase:(bool)arg2;
- (id)allComponentsInCalendar:(id)arg1;
- (long long)compareDateIgnoringTimeComponents:(id)arg1 inCalendar:(id)arg2;
- (id)components:(unsigned long long)arg1 forDayInTimeZone:(id)arg2;
- (id)dateAtHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 second:(unsigned long long)arg3 inTimeZone:(id)arg4;
- (id)dateByAddingCalSimulatedOffset;
- (id)dateByAddingDays:(long long)arg1 inCalendar:(id)arg2;
- (id)dateByAddingHours:(long long)arg1 inCalendar:(id)arg2;
- (id)dateByAddingMinutes:(long long)arg1 inCalendar:(id)arg2;
- (id)dateByAddingMonths:(long long)arg1 inCalendar:(id)arg2;
- (id)dateByAddingWeeks:(long long)arg1 inCalendar:(id)arg2;
- (id)dateByAddingYears:(long long)arg1 inCalendar:(id)arg2;
- (id)dateBySubtractingCalSimulatedOffset;
- (id)dateForDayInTimeZone:(id)arg1;
- (id)dateForEndOfDayInTimeZone:(id)arg1;
- (id)dateForStartOfDayInTimeZone:(id)arg1;
- (id)dateInTimeZone:(id)arg1 fromTimeZone:(id)arg2;
- (id)dateOnlyByTranslatingFrom:(id)arg1 toCalendar:(id)arg2;
- (id)dateOnlyComponentsInCalendar:(id)arg1;
- (id)dateRemovingComponents:(unsigned long long)arg1 inCalendar:(id)arg2;
- (id)dateRemovingTimeComponentsInCalendar:(id)arg1;
- (id)dateRoundedDownToNearestFiveMinutesInCalendar:(id)arg1;
- (id)dateRoundedToHourOnSameDayInCalendar:(id)arg1;
- (id)dateRoundedToNearestFifteenMinutesInCalendar:(id)arg1;
- (id)dateRoundedToStartOfNextDayInCalendar:(id)arg1;
- (id)dateWithoutTimeComponentsInTimeZone:(id)arg1;
- (long long)dayInCalendar:(id)arg1;
- (id)ek_ios_dateForEndOfDayInTimeZone:(id)arg1;
- (long long)hourInCalendar:(id)arg1;
- (bool)isAfterDate:(id)arg1;
- (bool)isAfterDayForDate:(id)arg1 inCalendar:(id)arg2;
- (bool)isAfterOrSameDayAsDate:(id)arg1 inCalendar:(id)arg2;
- (bool)isBeforeDate:(id)arg1;
- (bool)isBeforeDayForDate:(id)arg1 inCalendar:(id)arg2;
- (bool)isBeforeOrSameDayAsDate:(id)arg1 inCalendar:(id)arg2;
- (bool)isEqualToDateIgnoringTimeComponents:(id)arg1 inCalendar:(id)arg2;
- (bool)isSameDayAsDate:(id)arg1 inCalendar:(id)arg2;
- (bool)isSameMonthAsDate:(id)arg1 inCalendar:(id)arg2;
- (bool)isSameWeekAsDate:(id)arg1 inCalendar:(id)arg2;
- (bool)isSameYearAsDate:(id)arg1 inCalendar:(id)arg2;
- (bool)isTodayInCalendar:(id)arg1;
- (id)localizedAbbrevDate;
- (id)localizedAbbrevDateInTimeZone:(id)arg1;
- (id)localizedAbbrevMonthWeekdayDay;
- (id)localizedAbbrevMonthWithDay;
- (id)localizedAbbrevMonthWithDayInTimeZone:(id)arg1;
- (id)localizedAbbrevMonthWithDayRangeToDate:(id)arg1;
- (id)localizedAbbrevStandaloneMonth;
- (id)localizedAbbrevWeekdayWithDayOfMonth;
- (id)localizedAbbrevWeekdayWithDayOfMonthPreferWeekdayFirstForEnglish;
- (id)localizedDateStringWithTemplate:(id)arg1;
- (id)localizedDayOfMonth;
- (id)localizedDayOfWeekWithAbbrevDateInTimeZone:(id)arg1;
- (id)localizedFullDate;
- (id)localizedFullDateAndTime;
- (id)localizedFullMonth;
- (id)localizedFullMonthWeekdayDay;
- (id)localizedFullMonthWithDay;
- (id)localizedFullStandaloneWeekday;
- (id)localizedFullWeekdayWithDayOfMonth;
- (id)localizedFullYearMonth;
- (id)localizedHour;
- (id)localizedHourInTimeZone:(id)arg1;
- (id)localizedHourMinutesWithoutAMPM;
- (id)localizedHourMinutesWithoutAMPMInTimeZone:(id)arg1;
- (id)localizedHourWithoutAMPM;
- (id)localizedLongDate;
- (id)localizedMonthAndDayStringShortened:(bool)arg1;
- (id)localizedMonthAndYearStringShortened:(bool)arg1;
- (id)localizedMonthShortened:(bool)arg1;
- (id)localizedMonthWithDayWithPreferredShortening;
- (id)localizedRelativeDateStringShortened:(bool)arg1;
- (id)localizedRelativeDateStringShortened:(bool)arg1 lowercase:(bool)arg2;
- (id)localizedShortDate;
- (id)localizedShortDateAndTime;
- (id)localizedShortMonthWithDay;
- (id)localizedShortStandaloneWeekday;
- (id)localizedShortTime;
- (id)localizedShortTimeInTimeZone:(id)arg1;
- (id)localizedStringForEventTime;
- (id)localizedStringForEventTimeInTimeZone:(id)arg1;
- (id)localizedStringWithFormat:(id)arg1;
- (id)localizedStringWithFormat:(id)arg1 timeZone:(id)arg2;
- (id)localizedTime;
- (id)localizedWeekNumber;
- (id)localizedWeekdayMonthDayStringShortened:(bool)arg1;
- (id)localizedWeekdayMonthDayYearStringShortened:(bool)arg1;
- (id)localizedWeekdayMonthYearStringShortened:(bool)arg1;
- (id)localizedYear;
- (id)localizedYearMonthAndDayStringShortened:(bool)arg1;
- (long long)midnightOffsetMinutes:(id)arg1;
- (long long)minuteInCalendar:(id)arg1;
- (long long)monthInCalendar:(id)arg1;
- (void)printComparisonToDate:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfDayInLocalizedDateString:(id)arg1;
- (id)roundSecondsAndMinutesDownInCalendar:(id)arg1;
- (id)roundSecondsAndMinutesUpInCalendar:(id)arg1;
- (id)roundSecondsDownInCalendar:(id)arg1;
- (id)roundToCurrentDayInCalendar:(id)arg1;
- (id)roundToCurrentMondayInCalendar:(id)arg1;
- (id)roundToCurrentMonthInCalendar:(id)arg1;
- (id)roundToCurrentWeekInCalendar:(id)arg1 withFirstWeekdayIndex:(long long)arg2;
- (id)roundToCurrentYearInCalendar:(id)arg1;
- (id)roundUpOneSecondIfAt59InCalendar:(id)arg1;
- (long long)secondInCalendar:(id)arg1;
- (id)subtractOneSecondIfAt0InCalendar:(id)arg1;
- (id)timeOnlyComponentsInCalendar:(id)arg1;
- (id)timeStringAlwaysIncludeMinutes:(bool)arg1;
- (id)toISO8601String;
- (long long)weekInCalendar:(id)arg1;
- (long long)weekdayInCalendar:(id)arg1;
- (long long)yearInCalendar:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory

- (bool)isSameDayAsDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst

+ (id)cat_RFC3339Formatters;
+ (id)cat_dateWithInternetTimeString:(id)arg1;
+ (id)cat_dateWithObject:(id)arg1;

- (id)cat_internetTimeString;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

+ (id)crk_sharedDateFormatter;

- (id)crk_JSONStringValue;
- (bool)crk_isInPast;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

+ (id)CKSharedCalendar;
+ (id)ck_dateFormatterWithString:(id)arg1;
+ (id)ck_dateWithNaturalLanguageString:(id)arg1;

- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;

// Image: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit

+ (id)instanceFromCMSCoded:(id)arg1;

- (id)cmsCoded;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

+ (id)objectWithWFSerializedRepresentation:(id)arg1;

- (id)wfName;
- (id)wfSerializedRepresentation;
- (id)wf_formattedStringWithDateStyle:(id)arg1 timeStyle:(id)arg2 relativeDateStyle:(id)arg3 customDateFormat:(id)arg4 includeTimeForISO8601:(bool)arg5 timeZone:(id)arg6 locale:(id)arg7;

// Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit

- (id)_faceTimeDateString;
- (id)faceTimeDateString;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

- (id)cd_dateWithCeilingForAlignment:(double)arg1;
- (id)cd_dateWithCeilingForAlignment:(double)arg1 withOffset:(double)arg2 inTimeZone:(id)arg3;
- (id)cd_dateWithFloorForAlignment:(double)arg1;
- (id)cd_dateWithFloorForAlignment:(double)arg1 withOffset:(double)arg2 inTimeZone:(id)arg3;
- (id)dedup;
- (id)dk_dedup;
- (id)floorDateWithTotalSlotsInDay:(int)arg1;
- (int)slotFromMidnightWithTotalSlotsInDay:(int)arg1;
- (double)timeSinceMidnight:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge

- (id)ISO8601String;

// Image: /System/Library/PrivateFrameworks/CorePrescriptionLite.framework/CorePrescriptionLite

+ (id)crxu_dateWithYear:(unsigned long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3;
+ (double)crxu_now;

- (id)crxu_dateByAddingDays:(long long)arg1;
- (bool)crxu_isAfter:(id)arg1;
- (bool)crxu_isBefore:(id)arg1;
- (long long)crxu_numberOfDaysAfterDate:(id)arg1;
- (id)crxu_yearMonthDayComponents;

// Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine

+ (id)dateBisectingDate1:(id)arg1 date2:(id)arg2;
+ (id)dateFormatter;
+ (id)dateWithHour:(long long)arg1 minute:(long long)arg2 second:(long long)arg3;
+ (id)dateWithResolution:(unsigned long long)arg1;
+ (id)dateWithResolution:(unsigned long long)arg1 calendar:(id)arg2;
+ (id)endOfDay;
+ (id)roundingUpDate:(id)arg1 bucketDurationMinute:(int)arg2;
+ (id)startOfDay;
+ (id)stringFromTimestamp:(double)arg1;

- (bool)betweenDate:(id)arg1 andDate:(id)arg2;
- (id)dateByAddingUnit:(unsigned long long)arg1 value:(long long)arg2;
- (id)dateByRoundingWithTimeQuantization:(long long)arg1;
- (id)dateReducedToResolution:(unsigned long long)arg1;
- (id)dateReducedToResolution:(unsigned long long)arg1 calendar:(id)arg2;
- (id)endOfDay;
- (id)getFormattedDateString;
- (unsigned long long)hour;
- (bool)isAfterDate:(id)arg1;
- (bool)isBeforeDate:(id)arg1;
- (bool)isOnOrAfter:(id)arg1;
- (bool)isOnOrBefore:(id)arg1;
- (unsigned long long)minute;
- (id)startOfDay;
- (id)stringFromDate;
- (unsigned long long)weekday;
- (id)weekdayStringFromDate;

// Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions

- (id)sg_descriptionForMimeHeaders;

// Image: /System/Library/PrivateFrameworks/DMCEnrollmentProvider.framework/DMCEnrollmentProvider

- (bool)DMCProfileNearOrPastExpiration;
- (bool)DMCProfilePastExpiration;

// Image: /System/Library/PrivateFrameworks/DRMFoundation.framework/DRMFoundation

- (id)_os_dedup;

// Image: /System/Library/PrivateFrameworks/DashBoard.framework/DashBoard

- (double)DBSecondsToDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon

+ (id)_dateWithString:(id)arg1;

- (id)serialize;

// Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler

- (double)timeIntervalSince1970WithTimeZoneOffset:(double)arg1;

// Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore

- (id)ec_descriptionForMimeHeaders;
- (id)ec_integerDate;

// Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation

+ (id)_ef_gregorianCalendarForTimeZone:(id)arg1;
+ (id)_ef_morningDateComponents;
+ (id)_ef_nightDateComponents;
+ (id)ef_dateHoursAgo:(long long)arg1;
+ (id)ef_inOneHour;
+ (id)ef_lastWeekMidnight;
+ (id)ef_localCombinedDate:(id)arg1 time:(id)arg2 timeZone:(id)arg3;
+ (id)ef_midnightInNdays:(long long)arg1;
+ (id)ef_midnightNdaysAgo:(long long)arg1;
+ (id)ef_morning;
+ (id)ef_nextWeekMorning;
+ (id)ef_thisWeekday:(long long)arg1 hour:(long long)arg2 minute:(long long)arg3 second:(long long)arg4;
+ (id)ef_tomorrowMorning;
+ (id)ef_tomorrowNight;
+ (id)ef_tonight;

- (id)ef_SQLBinding;
- (id)ef_SQLExpression;
- (id)ef_SQLIsolatedExpression;
- (id)ef_dateWithTruncatedSeconds;
- (bool)ef_isDateNextDayOrLater:(id)arg1;
- (bool)ef_isEarlierThanDate:(id)arg1;
- (bool)ef_isEarlierThanNow;
- (bool)ef_isEarlierThanOrEqualDate:(id)arg1;
- (bool)ef_isLaterThanDate:(id)arg1;
- (bool)ef_isLaterThanOrEqualDate:(id)arg1;
- (bool)ef_isMoreThanTimeIntervalAgo:(double)arg1;
- (void)ef_renderSQLExpressionInto:(id)arg1;
- (double)ef_timeIntervalSinceDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS

+ (bool)acceptsTopLevelLeaves;
+ (id)dateWithActiveSyncString:(id)arg1;
+ (id)dateWithActiveSyncStringFromYearMonthDay:(id)arg1;
+ (id)dateWithActiveSyncStringWithoutSeparators:(id)arg1;
+ (bool)frontingBasicTypes;
+ (bool)notifyOfUnknownTokens;
+ (bool)parsingLeafNode;
+ (bool)parsingWithSubItems;

- (id)activeSyncString;
- (id)activeSyncStringForYearMonthDay;
- (id)activeSyncStringWithoutSeparators;
- (id)gmtDateToDateInTimeZone:(id)arg1;
- (id)gmtMidnight;
- (bool)isGMTMidnight;
- (id)nearestMidnight;
- (id)tzDateToDateInGMT:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite

+ (id)fm_dateFromEpoch:(long long)arg1;

- (long long)fm_epoch;
- (id)fm_epochObject;

// Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle

- (bool)isDateRelative;

// Image: /System/Library/PrivateFrameworks/FeedbackCore.framework/FeedbackCore

+ (id)dateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
+ (id)tomorrow;

- (id)fba_toString;
- (bool)isEarlierThan:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)_gkDateFromScalarServerTimestamp:(unsigned long long)arg1;
+ (id)_gkDateFromServerTimestamp:(id)arg1;
+ (id)_gkFormattedTimeIntervalStringWithStartDate:(id)arg1 endDate:(id)arg2 calendarUnits:(unsigned long long)arg3 style:(long long)arg4;
+ (id)_gkServerTimestamp;

- (id)_gkFormattedDateForStyle:(unsigned long long)arg1 relative:(bool)arg2;
- (id)_gkFormattedWhenStringWithOptions:(unsigned long long)arg1;
- (id)_gkServerTimestamp;

// Image: /System/Library/PrivateFrameworks/GameControllerSettings.framework/GameControllerSettings

+ (id)dateFormatter;

- (id)initWithJSONObject:(id)arg1;
- (id)jsonObject;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)_geo_calendar;
+ (id)geo_dateWithJulianDay:(double)arg1;

- (double)geo_hoursAndMinutes;
- (double)geo_julianDay;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

+ (id)shortDescription;
+ (id)timeIntervalDescription:(double)arg1;

- (id)dateComponents;
- (id)hmf_dateComponents;
- (id)hmf_dateComponentsUsingTimeZone:(id)arg1;
- (id)hmf_localTimeDescription;
- (id)localTimeDescription;
- (id)privateDescription;
- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles

- (id)hkmc_durationStringToEndDate:(id)arg1 calendar:(id)arg2;

// Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox

- (id)device;
- (id)source;
- (id)startDate;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)hk_minimumDateForBirthDateWithCalendar:(id)arg1;

- (double)doubleValue;
- (bool)hk_animatable;
- (id)hk_dateBeforeDateForCalendar:(id)arg1 rangeUnit:(unsigned long long)arg2;
- (id)hk_dateFromSourceTimeZone:(id)arg1;
- (id)hk_dateWithTruncatedSecond;
- (id)hk_midPointToValue:(id)arg1 percentage:(double)arg2;
- (id)hkui_dateNormalizedFromDateInterval:(id)arg1 toDateInterval:(id)arg2;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)hf_dateByAddingComponents:(id)arg1 toDate:(id)arg2 times:(long long)arg3;
+ (id)hf_dateByAddingDays:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingHours:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingMinutes:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingMonths:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingNanoseconds:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingSeconds:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingWeeks:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingYears:(long long)arg1 months:(long long)arg2 weeks:(long long)arg3 days:(long long)arg4 hours:(long long)arg5 minutes:(long long)arg6 seconds:(long long)arg7 nanoseconds:(long long)arg8 toDate:(id)arg9;
+ (id)hf_dateByAddingYears:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateBySubtractingComponents:(id)arg1 fromDate:(id)arg2 times:(long long)arg3;
+ (long long)hf_daysBetweenDates:(id)arg1 endDate:(id)arg2;
+ (long long)hf_minutesBetweenDates:(id)arg1 endDate:(id)arg2;
+ (id)hf_sharedCalendar;
+ (id)hf_sharedTimeZone;

- (bool)_uses24HourTimeForLocale;
- (id)hf_analyticsTimestamp;
- (id)hf_endOfWeek;
- (bool)hf_isBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (bool)hf_isFirstHourOfDay;
- (bool)hf_isMidnight;
- (bool)hf_isSingularHour;
- (bool)hf_isWithinInterval:(double)arg1 ofDate:(id)arg2;
- (bool)hf_isWithinOneHourOfDate:(id)arg1;
- (bool)hf_isWithinOneMinuteOfDate:(id)arg1;
- (bool)hf_isWithinOneSecondOfDate:(id)arg1;
- (id)hf_startOfDay;
- (id)hf_startOfHour;
- (id)hf_startOfMinute;
- (id)hf_startOfNextDay;
- (id)hf_startOfSecond;
- (id)hf_startOfWeek;

// Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore

+ (id)hmbDecodeQueryableParameter:(id)arg1;
+ (id)hmbDescriptionForEncodedQueryableVariable:(id)arg1;
+ (id)hmbEncodeQueryableParameter:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (id)hmd_dateFromSnapshotFileName:(id)arg1;
+ (id)hmd_snapshotFileNameDateFormatter;

- (id)hmd_snapshotFileName;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

+ (id)hmd_dateFromSnapshotFileName:(id)arg1;
+ (id)hmd_snapshotFileNameDateFormatter;

- (id)hmd_snapshotFileName;

// Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI

- (id)_im_createDateFormatterForTimestampFormat:(long long)arg1;
- (id)im_dateStringWithFormat:(long long)arg1;
- (bool)im_isDayDifferent:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (id)__im_clampDate:(id)arg1;
+ (id)__im_dateFromEncodedString:(id)arg1;
+ (id)__im_dateWithCurrentServerTime;
+ (id)__im_dateWithNanosecondTimeIntervalSinceReferenceDate:(long long)arg1;
+ (id)__im_iMessageDateFromTimeStamp:(id)arg1;
+ (id)__im_serialization_dateFormatter;
+ (bool)useCourierTime;

- (id)__im_dateByAddingDays:(long long)arg1;
- (id)__im_encodeAsString;
- (bool)__im_isApproximatelyEqualToDate:(id)arg1;
- (bool)__im_isEqualToSeconds:(id)arg1;
- (long long)__im_nanosecondTimeInterval;
- (long long)__im_nanosecondTimeIntervalSinceEpochTime;
- (long long)differenceFromDate:(id)arg1;
- (long long)hoursDifferenceFromDate:(id)arg1;
- (bool)isArchivable_im;
- (bool)isToday;
- (long long)minutesDifferenceFromDate:(id)arg1;
- (long long)secondsDifferenceFromDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/InfoQueryPersonalizationFeatures.framework/InfoQueryPersonalizationFeatures

- (bool)isDateInTodayOrFuture;

// Image: /System/Library/PrivateFrameworks/IntelligentRoutingDaemon.framework/IntelligentRoutingDaemon

+ (bool)isDate:(id)arg1 inSameDayAsDate:(id)arg2 forTimeZoneInSeconds:(long long)arg3;

- (bool)isEarlierThan:(id)arg1;
- (bool)isEarlierThanOrEqualTo:(id)arg1;
- (bool)isLaterThan:(id)arg1;
- (bool)isLaterThanOrEqualTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Koa.framework/Koa

- (id)ISO8601String;

// Image: /System/Library/PrivateFrameworks/LiveTranscription.framework/LiveTranscription

+ (id)dateToString:(id)arg1;
+ (id)stringToDate:(id)arg1;
+ (id)timeAgoSinceDate:(id)arg1 currentDate:(id)arg2;
+ (id)timeAgoSinceDateString:(id)arg1;
+ (double)timeDifferenceDateStringOld:(id)arg1 dateStringNew:(id)arg2;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

+ (id)mf_copyDateInCommonFormatsWithString:(id)arg1;
+ (id)mf_copyLenientDateInCommonFormatsWithString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis

- (id)mad_nextAttemptDateForStatus:(unsigned long long)arg1 attempts:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit

+ (id)dateComponentsFromString:(id)arg1;
+ (id)dateFromString:(id)arg1;

- (id)dateByAddingDays:(long long)arg1;
- (id)nextWeekend;
- (id)previousWeekend;

// Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices

- (bool)msv_isFuture;
- (bool)msv_isPast;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (id)mf_descriptionForMimeHeaders;
- (id)mf_replyPrefixForSender:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy

- (id)mf_descriptionForMimeHeaders;
- (id)mf_replyPrefixForSender:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit

+ (long long)mt_longMillisecondsSince1970;
+ (id)mt_millisecondsSince1970;

- (long long)mt_longMillisecondsSince1970;
- (id)mt_millisecondsSince1970;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

+ (id)mtEarliest:(id)arg1;
+ (id)mtLatest:(id)arg1;
+ (id)mtNow;

- (id)mtDateNearestMatchingComponents:(id)arg1;
- (id)mtDescription;
- (id)mtGreetingString:(bool)arg1;
- (bool)mtIsAfterDate:(id)arg1;
- (bool)mtIsAfterOrSameAsDate:(id)arg1;
- (bool)mtIsBeforeDate:(id)arg1;
- (bool)mtIsBeforeOrSameAsDate:(id)arg1;
- (id)mtMidnightForDate;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt { }*)arg1 atPosition:(int)arg2;
- (id)ml_stringValueForSQL;

// Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer

+ (id)nnmk_startOfCurrentDay;

- (bool)nnmk_isToday;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

- (bool)isWholeHour;

// Image: /System/Library/PrivateFrameworks/NearField.framework/NearField

- (id)encodeToCBOR;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)_fr_sharedYearAndMonthDateFormatter;
+ (id)dateWithPBDate:(id)arg1;
+ (id)fc_dateFromString:(id)arg1 possibleFormats:(id)arg2;
+ (id)fc_dateFromStringWithHTTPHeaderFormat:(id)arg1;
+ (id)fc_dateFromStringWithISO8601Format:(id)arg1;
+ (id)fc_dateRoundedToNearestDayForDate:(id)arg1;
+ (id)fc_dateRoundedToNearestMinuteForDate:(id)arg1;
+ (id)fc_dateWithMillisecondTimeIntervalSince1970:(unsigned long long)arg1;
+ (id)fc_dateWithTimeIntervalBeforeNow:(double)arg1;
+ (id)fc_earlierDateAllowingNilWithDate:(id)arg1 andDate:(id)arg2;
+ (id)fc_laterDateAllowingNilWithDate:(id)arg1 andDate:(id)arg2;
+ (double)fc_timeIntervalOneDay;
+ (double)fc_timeIntervalOneHour;
+ (double)fc_timeIntervalOneWeek;
+ (int)keyValuePairType;
+ (id)pbDate;
+ (id)readValueFromKeyValuePair:(id)arg1;

- (long long)fc_GregorianCalendarDaysSinceDate:(id)arg1;
- (id)fc_adjustToRecentDate;
- (id)fc_dateByRoundingDownToNearestQuarterHour;
- (id)fc_dateBySubtractingTimeInterval:(double)arg1;
- (id)fc_dateOfEarliestGregorianCalendarDay;
- (bool)fc_isEarlierThan:(id)arg1;
- (bool)fc_isEarlierThan:(id)arg1 withPrecision:(long long)arg2;
- (bool)fc_isEarlierThanOrEqualTo:(id)arg1;
- (bool)fc_isLaterThan:(id)arg1;
- (bool)fc_isLaterThan:(id)arg1 withPrecision:(long long)arg2;
- (bool)fc_isLaterThanOrEqualTo:(id)arg1;
- (bool)fc_isSameDayAs:(id)arg1;
- (bool)fc_isWeekend;
- (bool)fc_isWithinTimeInterval:(double)arg1 ofDate:(id)arg2;
- (unsigned long long)fc_millisecondTimeIntervalSince1970;
- (unsigned long long)fc_millisecondTimeIntervalSinceDate:(id)arg1;
- (unsigned long long)fc_millisecondTimeIntervalUntilNow;
- (id)fc_stringWithISO8601Format;
- (id)fc_stringWithYearAndMonthFormat;
- (double)fc_timeIntervalUntilNow;
- (bool)isInFuture;
- (bool)isToday;
- (id)pbDate;
- (void)writeToKeyValuePair:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal

+ (id)_todayStringDateFormatterForThread;

- (void)nss_gregorianDescriptionWithFlags:(long long)arg1 options:(long long)arg2 completion:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/Notes.framework/Notes

+ (id)ic_modificationDateForNoteBeingEdited;

// Image: /System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

- (id)ic_briefFormattedDate;
- (id)ic_briefFormattedDate:(bool)arg1;
- (id)ic_briefFormattedDateForAccessibility;
- (id)ic_endOfDay;
- (bool)ic_isEarlierThanDate:(id)arg1;
- (bool)ic_isLaterThanDate:(id)arg1;
- (bool)ic_isLaterThanUnitsAgo:(unsigned long long)arg1 value:(unsigned long long)arg2;
- (bool)ic_isSameDayAsDate:(id)arg1;
- (bool)ic_isToday;
- (bool)ic_isWithinInclusiveDayIntervalBeginning:(id)arg1 ending:(id)arg2;
- (bool)ic_isWithinSameMonth:(id)arg1;
- (bool)ic_isWithinSameYear:(id)arg1;
- (bool)ic_isYesterday;
- (id)ic_iso8601Date;
- (id)ic_localDateWithSeconds;
- (unsigned long long)ic_numberOfDaysFromDate:(id)arg1;
- (id)ic_shortFormattedDate;
- (id)ic_startOfDay;
- (id)ic_truncated;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)_notes_fallbackDateFormatter;
+ (id)_notes_relativeDateFormatter;
+ (id)_notes_todayDateFormatter;

- (id)day;
- (id)userFriendlyString;
- (id)userFriendlyStringWithTime;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)tc_dateWithWordDate:(const struct WrdDateTime { int (**x1)(); int x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; }*)arg1;

- (id)p_rule1To23HoursAgo:(long long)arg1;
- (id)p_rule1To59MinutesAgo:(long long)arg1;
- (id)p_ruleForOverAWeekAgoForDate:(id)arg1 withDateFormatter:(id)arg2;
- (id)p_ruleForOverAYearAgoForDate:(id)arg1 withDateFormatter:(id)arg2;
- (id)p_ruleForUpToSevenDaysAgoAndNotYesterdayForDate:(id)arg1 withDateFormatter:(id)arg2;
- (id)p_ruleForYesterday:(id)arg1 withDateFormatter:(id)arg2;
- (id)p_ruleForYesterdayShortAsPossible:(id)arg1;
- (void)tc_copyToWordDate:(struct WrdDateTime { int (**x1)(); int x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; }*)arg1;
- (struct { unsigned short x1; unsigned short x2; })tsu_DOSTime;
- (id)tsu_fullFormattedDateWithPeriod;
- (id)tsu_initWithDOSTime:(struct { unsigned short x1; unsigned short x2; })arg1;
- (bool)tsu_isEqualToDate:(id)arg1;
- (id)tsu_relativeAnnotationStringForEarlierDate:(id)arg1;
- (id)tsu_relativeAnnotationStringForEarlierDate:(id)arg1 withDateFormatter:(id)arg2;
- (id)tsu_relativeAnnotationStringForEarlierDate:(id)arg1 withDateFormatter:(id)arg2 shortAsPossible:(bool)arg3;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)dateForTomorrow;
+ (id)dateForYesterday;
+ (id)dateWithDaysBeforeNow:(unsigned long long)arg1;
+ (id)dateWithDaysFromNow:(unsigned long long)arg1;

- (id)dateWithoutTime;
- (bool)isDateEqualToDateIgnoringTime:(id)arg1;
- (bool)isToday;
- (bool)isTomorrow;
- (bool)isYesterday;
- (long long)numberOfMonthsFromNow;
- (long long)numberOfWeeksFromNow;
- (long long)numberOfYearsFromNow;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (void)px_unionStartDate:(id*)arg1 endDate:(id*)arg2 withDate:(id)arg3;
+ (void)px_unionStartDate:(id*)arg1 endDate:(id*)arg2 withDateInterval:(id)arg3;

- (id)px_dateTruncatedToCalendarUnit:(unsigned long long)arg1 calendar:(id)arg2;
- (bool)px_isBetweenDate:(id)arg1 andDate:(id)arg2;
- (bool)px_isSameDayAsDate:(id)arg1;
- (bool)px_isWithinTimeInterval:(double)arg1 sinceDate:(id)arg2;
- (long long)px_yearsSinceDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation

+ (id)amPMStringFromDate:(id)arg1;
+ (id)dateFormatter;
+ (id)dateFormatterWithTemplate:(id)arg1;
+ (id)dateFromRFC1123:(id)arg1;
+ (id)dateStringFromDate:(id)arg1 withDateStyle:(unsigned long long)arg2 timeStyle:(unsigned long long)arg3 isRelative:(bool)arg4;
+ (id)dayOfWeekFromDate:(id)arg1;
+ (id)dayOfWeekFromDate:(id)arg1 abbreviated:(bool)arg2;
+ (id)longDateStringFromDate:(id)arg1;
+ (id)longDayStringFromDate:(id)arg1;
+ (id)mailLikeDescriptionFromDate:(id)arg1;
+ (id)mediumDateStringFromDate:(id)arg1;
+ (id)monthYearFromDate:(id)arg1;
+ (id)mt_dateFormatterJustYear;
+ (id)mt_dateFormatterNoDayWithYear;
+ (id)mt_dateFormatterNoYear;
+ (id)mt_dateFormatterNoYearAbbrevMonth;
+ (id)mt_dateFormatterRelativeDay;
+ (id)mt_dateFormatterShortStyleWithYear;
+ (id)mt_dateFormatterWithYear;
+ (id)mt_lessVerboseDateFormatter;
+ (id)mt_verboseDateFormatter;
+ (id)postTimeStringFromDate:(id)arg1;
+ (id)shortDateStringFromDate:(id)arg1;
+ (id)shortDateStringFromDateNoRel:(id)arg1;
+ (id)shortStandardTimeStringFromDate:(id)arg1;
+ (id)shortTimeStringFromDate:(id)arg1;

- (id)abbreviatedFriendlyDisplayString;
- (id)dateAtWeekStart;
- (id)dateForBeginningOfDay;
- (id)dateForBeginningOfHour;
- (id)dateForBeginningOfMonth;
- (id)dateForBeginningOfYear;
- (id)dateForEndOfDay;
- (id)dateWithDeltaDays:(long long)arg1;
- (id)dateWithDeltaWeeks:(long long)arg1;
- (id)friendlyDisplayString;
- (id)im_jsonSerializableValue;
- (bool)inSameWeekAs:(id)arg1;
- (bool)inSameYearAs:(id)arg1;
- (bool)isEqualToDay:(id)arg1;
- (bool)isEqualToWeek:(id)arg1;
- (bool)isEqualToYear:(id)arg1;
- (bool)isFuture;
- (bool)isLessThanDaysOld:(long long)arg1;
- (bool)isLessThanWeekOld;
- (bool)isNextWeek;
- (bool)isSameDayOfWeekAs:(id)arg1;
- (bool)isThisWeek;
- (bool)isThisYear;
- (bool)isToday;
- (bool)lastWeek;
- (id)lessVerboseDisplayString;
- (id)lessVerboseDisplayStringWithoutTimeAndCurrentYear;
- (id)microDateString;
- (id)microFriendlyDisplayString;
- (id)microFriendlyDisplayString:(bool)arg1;
- (id)microUnabbreviatedFriendlyDisplayString;
- (id)mt_dateWithDeltaDays:(long long)arg1;
- (id)nanoFriendlyDisplayString;
- (bool)nextWeek;
- (id)rfc1123String;
- (bool)thisWeek;
- (id)timeString;
- (id)verboseDisplayString;
- (id)verboseDisplayStringWithoutTime;
- (id)verboseDisplayStringWithoutTimeAndCurrentYear;
- (bool)wasLastWeek;
- (bool)wasLessThanAWeekAgo;
- (bool)wasYesterday;
- (id)yearString;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

- (unsigned long long)re_actionIdentifierHashValue;

// Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit

+ (id)debug_rem_nowOverride;
+ (id)rem_now;
+ (void)setDebug_rem_nowOverride:(id)arg1;

// Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration

+ (id)_fr_sharedYearAndMonthDateFormatter;
+ (id)rc_dateFromString:(id)arg1 possibleFormats:(id)arg2;
+ (id)rc_dateFromStringWithHTTPHeaderFormat:(id)arg1;
+ (id)rc_dateFromStringWithISO8601Format:(id)arg1;
+ (id)rc_dateWithMillisecondTimeIntervalSince1970:(unsigned long long)arg1;
+ (id)rc_earlierDateAllowingNilWithDate:(id)arg1 andDate:(id)arg2;
+ (id)rc_laterDateAllowingNilWithDate:(id)arg1 andDate:(id)arg2;

- (bool)isToday;
- (long long)rc_GregorianCalendarDaysSinceDate:(id)arg1;
- (id)rc_dateBySubtractingTimeInterval:(double)arg1;
- (id)rc_dateOfEarliestGregorianCalendarDay;
- (bool)rc_isEarlierThan:(id)arg1;
- (bool)rc_isEarlierThan:(id)arg1 withPrecision:(long long)arg2;
- (bool)rc_isEarlierThanOrEqualTo:(id)arg1;
- (bool)rc_isLaterThan:(id)arg1;
- (bool)rc_isLaterThan:(id)arg1 withPrecision:(long long)arg2;
- (bool)rc_isLaterThanOrEqualTo:(id)arg1;
- (bool)rc_isSameDayAs:(id)arg1;
- (bool)rc_isWeekend;
- (bool)rc_isWithinTimeInterval:(double)arg1 ofDate:(id)arg2;
- (unsigned long long)rc_millisecondTimeIntervalSince1970;
- (unsigned long long)rc_millisecondTimeIntervalSinceDate:(id)arg1;
- (id)rc_stringForLogging;
- (id)rc_stringWithISO8601Format;
- (id)rc_stringWithYearAndMonthFormat;
- (double)rc_timeIntervalUntilNow;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

+ (void)safari_dateFromNTPServerWithTimeout:(double)arg1 completionHandler:(id /* block */)arg2;
+ (id)safari_dateOfMidnightNumberOfDaysAgo:(long long)arg1;
+ (double)safari_timeIntervalSinceSystemStart;

- (id)_safari_stringWithDashSeparatorWithDateFormatter:(id)arg1;
- (bool)safari_isEarlierThanDate:(id)arg1;
- (bool)safari_isInSameDayAsDate:(id)arg1;
- (bool)safari_isInToday;
- (bool)safari_isInclusivelyBetweenDate:(id)arg1 andDate:(id)arg2;
- (bool)safari_isLaterThanDate:(id)arg1;
- (bool)safari_isNowOrInRecentPast;
- (long long)safari_numberOfDaysUntilDate:(id)arg1;
- (long long)safari_numberOfWeeksUntilDate:(id)arg1;
- (id)safari_startOfDay;
- (id)safari_stringsFromDateForLocaleIdentifiers:(id)arg1;
- (double)safari_timeIntervalUntilNow;

// Image: /System/Library/PrivateFrameworks/SafetyMonitor.framework/SafetyMonitor

- (id)absoluteTimeString:(long long)arg1 preposition:(long long)arg2 capitalized:(bool)arg3;
- (id)dateString;
- (id)preciseFormattedTime;
- (id)relativeTimeString;
- (id)roundedFormattedTimeWithUnitStyle:(long long)arg1 roundedMinutesUnit:(long long)arg2 allowedUnits:(unsigned long long)arg3;
- (id)roundedTime;
- (id)timeStringWithPreposition:(long long)arg1 capitalized:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/SeparationAlerts.framework/SeparationAlerts

- (id)getDateString;
- (long long)getMinutesSinceStartOfDay;
- (id)getNextDateAtHour:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/SiriUIFoundation.framework/SiriUIFoundation

- (bool)_sruif_isSameDayAsDate:(id)arg1;
- (bool)sruif_isToday;
- (bool)sruif_isTomorrow;

// Image: /System/Library/PrivateFrameworks/Sleep.framework/Sleep

+ (id)hksp_closestFromDates:(id)arg1 toDate:(id)arg2;
+ (id)hksp_earliestFromDates:(id)arg1;
+ (id)hksp_latestFromDates:(id)arg1;

- (id)hkspDescription;
- (id)hkspGreetingStringWithOptions:(unsigned long long)arg1;
- (id)hksp_dateNearestMatchingComponents:(id)arg1;
- (bool)hksp_isAfterDate:(id)arg1;
- (bool)hksp_isAfterOrSameAsDate:(id)arg1;
- (bool)hksp_isBeforeDate:(id)arg1;
- (bool)hksp_isBeforeOrSameAsDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

+ (id)dateFromISO8601String:(id)arg1;
+ (id)dateFromRFC1123String:(id)arg1;
+ (id)dateFromString:(id)arg1;
+ (id)dateFromTWTimeString:(id)arg1;

- (id)shortDescription;
- (id)shortDescriptionSinceNow;
- (id)shortDescriptionWithTime;
- (id)shortWeekDescription;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback

+ (id)tvp_dateWithMillisecondsSince1970:(id)arg1;
+ (bool)tvp_networkTimeIsApproximatelyCorrect;

- (bool)_isEqualToDateIgnoringTime:(id)arg1;
- (id)tvp_dateByAddingDays:(long long)arg1;
- (id)tvp_dateBySubtractingDays:(long long)arg1;
- (id)tvp_dateCeiledToNearestMinute:(int)arg1;
- (id)tvp_dateFlooredToNearestMinute:(int)arg1;
- (bool)tvp_isToday;
- (bool)tvp_isTomorrow;
- (bool)tvp_isYesterday;

// Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore

- (unsigned long long)tf_posixTimestampInMilliseconds;
- (id)tf_timeFromNow;

// Image: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore

+ (bool)isDateExpired:(id)arg1 maxTimeInterval:(double)arg2;

- (bool)isTimeToDate:(id)arg1 withinTimeInterval:(double)arg2;

// Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance

- (id)getDateString;
- (long long)getMinutesSinceStartOfDay;
- (id)getNextDateAtHour:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency

+ (double)kt_currentTimeMs;
+ (id)kt_dateFromString:(id)arg1;

- (id)kt_dateToString;
- (bool)kt_isEqualWithinOneMillisecond:(id)arg1;
- (id)kt_toISO_8601_UTCString;

// Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer

+ (bool)triIsDate:(id)arg1 equalToDate:(id)arg2;
+ (bool)triIsDate:(id)arg1 equalToDate:(id)arg2 withinInterval:(double)arg3;

// Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit

- (long long)_nc_hour;
- (bool)nc_isAfternoon;
- (bool)nc_isEvening;
- (bool)nc_isMorning;
- (bool)nc_isNight;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

+ (bool)shouldShowLabelForDownloadExpirationDate:(id)arg1;
+ (id)vui_startOfDateInGMT:(id)arg1;

- (bool)vui_isInTheFuture;
- (bool)vui_isInThePast;

// Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore

- (id)vk_briefFormattedDate;
- (id)vk_briefFormattedDate:(bool)arg1;
- (id)vk_briefFormattedDateForAccessibility;
- (bool)vk_isEarlierThanDate:(id)arg1;
- (bool)vk_isLaterThanDate:(id)arg1;
- (bool)vk_isToday;
- (bool)vk_isYesterday;
- (id)vk_localDateWithSeconds;
- (id)vk_shortFormattedDate;

// Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/IMAP.framework/IMAP

- (id)mf_descriptionForMimeHeaders;
- (id)mf_replyPrefixForSender:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit

+ (id)wlk_dateWithMillisecondsSince1970:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Weather.framework/Weather

- (double)wa_timeIntervalUntilNow;

// Image: /System/Library/PrivateFrameworks/WeatherCore.framework/WeatherCore

- (double)wc_timeIntervalUntilNow;

// Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation

+ (id)wf_allWeatherConditionsOnDate:(id)arg1 inCalendar:(id)arg2 inArray:(id)arg3;
+ (bool)wf_isDate:(id)arg1 inSameDayWithDate:(id)arg2 inCalendar:(id)arg3;
+ (long long)wf_minutesBetweenDate:(id)arg1 andDate:(id)arg2;
+ (id)wf_weatherConditionsClosestToDate:(id)arg1 inArray:(id)arg2;
+ (id)wf_weatherConditionsOnDate:(id)arg1 inCalendar:(id)arg2 inArray:(id)arg3;

- (id)wf_allWeatherConditionsOnDate:(id)arg1 inCalendar:(id)arg2;
- (bool)wf_isInSameDayWithDate:(id)arg1 inCalendar:(id)arg2;
- (long long)wf_minutesDifferenceFromDate:(id)arg1;
- (id)wf_weatherConditionsClosestToDate:(id)arg1;
- (id)wf_weatherConditionsOnDate:(id)arg1 inCalendar:(id)arg2;

// Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics

- (id)wifianalytics_dateWithDayTimeBegin;
- (id)wifianalytics_dateWithDayTimeEnd;
- (id)wifianalytics_dateWithDayTimeUsageBoundary;
- (id)wifianalytics_dateWithNextDayTimeBegin;
- (bool)wifianalytics_isDayTime;
- (double)wifianalytics_timeInSecSinceMidnight;

// Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI

- (bool)isTodayWithCalendar:(id)arg1;
- (id)stringFromDHCPLeaseExpirationDateWithFormatString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy

- (id)dateByAddingDays:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota

- (id)icq_serverFriendlyString;

// Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI

- (bool)isTodayWithCalendar:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts

- (int)chartGridValueType;
- (double)doubleValue;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSPersistence.framework/TSPersistence

- (id)tsp_initWithMessage:(const void*)arg1;
- (void)tsp_saveToMessage:(void*)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables

+ (id)tsce_dateWithSerialNumber:(double)arg1 dateMode:(int)arg2;
+ (id)tsce_dateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6;

- (long long)tsce_day;
- (long long)tsce_hour;
- (long long)tsce_isoWeekNumber;
- (double)tsce_mapToDouble;
- (long long)tsce_minute;
- (long long)tsce_month;
- (long long)tsce_second;
- (long long)tsce_weekNumberForType:(int)arg1;
- (long long)tsce_weekday;
- (long long)tsce_year;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

- (id)dateFormatterFromTemplate12Hour:(id)arg1 template24Hour:(id)arg2 withDateFormatter:(id)arg3;
- (bool)p_localeUses24HourTimeCycle;
- (id)p_rule1To23HoursAgo:(long long)arg1 withDateFormatter:(id)arg2 lowercase:(bool)arg3;
- (id)p_rule1To59MinutesAgo:(long long)arg1 withDateFormatter:(id)arg2 lowercase:(bool)arg3;
- (id)p_ruleForOverAWeekAgoForDate:(id)arg1 withDateFormatter:(id)arg2;
- (id)p_ruleForOverAYearAgoForDate:(id)arg1 withDateFormatter:(id)arg2;
- (id)p_ruleForUpToSevenDaysAgoAndNotYesterdayForDate:(id)arg1 withDateFormatter:(id)arg2;
- (id)p_ruleForYesterday:(id)arg1 withDateFormatter:(id)arg2 lowercase:(bool)arg3;
- (id)p_stringWithString:(id)arg1 lowercase:(bool)arg2 dateFormatter:(id)arg3;
- (struct { unsigned short x1; unsigned short x2; })tsu_DOSTime;
- (id)tsu_fullFormattedDate;
- (id)tsu_initWithDOSTime:(struct { unsigned short x1; unsigned short x2; })arg1;
- (bool)tsu_isEqualToDate:(id)arg1;
- (bool)tsu_isEqualToFileModificationDateAccountingForTruncation:(id)arg1;
- (id)tsu_relativeAnnotationStringForEarlierDate:(id)arg1;
- (id)tsu_relativeAnnotationStringForEarlierDate:(id)arg1 withDateFormatter:(id)arg2;
- (id)tsu_relativeAnnotationStringForEarlierDate:(id)arg1 withDateFormatter:(id)arg2 shortAsPossible:(bool)arg3;
- (id)tsu_relativeAnnotationStringForEarlierDate:(id)arg1 withDateFormatter:(id)arg2 shortAsPossible:(bool)arg3 lowercaseIfNeeded:(bool)arg4;
- (id)tsu_shortFormattedDate;

// Image: /usr/lib/libprequelite.dylib

+ (id)newFromSqliteStatement:(struct sqlite3_stmt { }*)arg1 atIndex:(int)arg2;
+ (id)newFromSqliteValue:(struct sqlite3_value { }*)arg1;

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
