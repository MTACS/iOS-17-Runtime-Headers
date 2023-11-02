
@interface NSTimeZone : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (nonatomic, readonly, copy) NSString *ISO8601TimeZoneOffsetFromUTC;
@property (readonly, copy) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *name;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)abbreviationDictionary;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)defaultTimeZone;
+ (id)knownTimeZoneNames;
+ (id)localTimeZone;
+ (void)resetSystemTimeZone;
+ (void)setAbbreviationDictionary:(id)arg1;
+ (void)setDefaultTimeZone:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)systemTimeZone;
+ (id)timeZoneDataVersion;
+ (id)timeZoneForSecondsFromGMT:(long long)arg1;
+ (id)timeZoneWithAbbreviation:(id)arg1;
+ (id)timeZoneWithName:(id)arg1;
+ (id)timeZoneWithName:(id)arg1 data:(id)arg2;

- (unsigned long long)_cfTypeID;
- (id)abbreviation;
- (id)abbreviationForDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (double)daylightSavingTimeOffset;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 data:(id)arg2;
- (bool)isDaylightSavingTime;
- (bool)isDaylightSavingTimeForDate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTimeZone:(id)arg1;
- (bool)isNSTimeZone__;
- (id)localizedName:(long long)arg1 locale:(id)arg2;
- (id)name;
- (id)nextDaylightSavingTimeTransition;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (long long)secondsFromGMT;
- (long long)secondsFromGMTForDate:(id)arg1;

// Image: /System/Library/Frameworks/ClockKit.framework/ClockKit

- (id)JSONObjectRepresentation;
- (id)initWithJSONObjectRepresentation:(id)arg1;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

+ (id)calendarTimeZone;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

- (void)_cleanupDisallowedTimezonesIfNeeded;
- (id)cityName;
- (void)setCityName:(id)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_abbreviationDictionary;
+ (id)_autoupdating;
+ (id)_current;
+ (id)_default;
+ (id)_knownTimeZoneIdentifiers;
+ (id)_resetSystemTimeZone;
+ (void)_setAbbreviationDictionary:(id)arg1;
+ (void)_setDefaultTimeZone:(id)arg1;
+ (id)_timeZoneDataVersion;
+ (id)_timeZoneWithAbbreviation:(id)arg1;
+ (id)_timeZoneWithName:(id)arg1;
+ (id)_timeZoneWithName:(id)arg1 data:(id)arg2;
+ (id)_timeZoneWithName:(id)arg1 tryAbbrev:(bool)arg2;
+ (id)_timeZoneWithSecondsFromGMT:(long long)arg1;
+ (bool)supportsSecureCoding;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (id)ISO8601TimeZoneOffsetFromUTC;

// Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount

+ (bool)vs_isTimeZoneSet;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

- (id)descriptionForDate:(id)arg1;
- (bool)isEquivalentTo:(id)arg1;
- (bool)isUTC;

// Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions

+ (id)timeZoneForAddress:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

+ (id)gmtOffsetTimeZoneFromString:(id)arg1 forDate:(id)arg2;
+ (id)gmtOffsetTimeZoneWithHour:(long long)arg1 withMinute:(long long)arg2 forDate:(id)arg3;
+ (id)systemTimeZoneFromString:(id)arg1;
+ (id)systemTimeZoneWithWindowsName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS

+ (id)gmt;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

+ (id)hmf_unarchiveFromData:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

- (bool)_navigation_hasSameOffsetFromGMTAsTimeZone:(id)arg1;
- (bool)_navigation_isEquivalentToTimeZone:(id)arg1 forDate:(id)arg2;
- (bool)_navigation_isEquivalentToTimeZone:(id)arg1 forDates:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit

+ (id)remDebugTimeZone_GMT;
+ (id)remDebugTimeZone_LosAngeles;
+ (id)remDebugTimeZone_NewYork;

- (bool)rem_isEquivalentTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_ui_canonicalTimeZoneNameForTimeZoneName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar

- (id)ICSComputeTimeZoneChangeListFromDate:(id)arg1 toDate:(id)arg2;

@end
