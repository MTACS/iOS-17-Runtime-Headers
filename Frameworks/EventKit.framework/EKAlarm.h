
@interface EKAlarm : EKObject <NSCopying> {
    NSString * _soundName;
}

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, copy) NSDate *absoluteDate;
@property (nonatomic, readonly) EKCalendarItem *calendarItemOwner;
@property (nonatomic, readonly) EKCalendar *calendarOwner;
@property (getter=isDefaultAlarm, nonatomic) bool defaultAlarm;
@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic, retain) NSString *externalID;
@property (nonatomic, readonly) bool isAbsolute;
@property (nonatomic) bool isSnoozed;
@property (nonatomic, retain) EKAlarm *originalAlarm;
@property (nonatomic, readonly) EKObject *owner;
@property (nonatomic) long long proximity;
@property (nonatomic) double relativeOffset;
@property (nonatomic, copy) NSArray *snoozedAlarms;
@property (nonatomic, copy) NSString *soundName;
@property (nonatomic, copy) EKStructuredLocation *structuredLocation;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSURL *url;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

+ (int)_currentAuthorizationStatus;
+ (id)alarmWithAbsoluteDate:(id)arg1;
+ (id)alarmWithRelativeOffset:(double)arg1;
+ (bool)areLocationsAllowed;
+ (bool)areLocationsAllowedWithAuthorizationStatus:(int)arg1;
+ (bool)areLocationsAvailable;
+ (bool)areLocationsCurrentlyEnabled;
+ (double)defaultGeofencedReminderRadius;
+ (Class)frozenClass;
+ (id)knownIdentityKeysForComparison;
+ (id)knownRelationshipMultiValueKeys;
+ (id)knownRelationshipSingleValueKeys;
+ (id)knownRelationshipWeakKeys;
+ (id)knownSingleValueKeysForComparison;
+ (long long)maxPublicProximity;

- (void).cxx_destruct;
- (id)UUID;
- (bool)_reset;
- (void)_setEmailAddress:(id)arg1;
- (void)_setType:(long long)arg1;
- (void)_setUrlWrapper:(id)arg1;
- (id)absoluteDate;
- (id)acknowledgedDate;
- (void)addSnoozedAlarm:(id)arg1;
- (id)bookmarkURL;
- (id)calendarItemOwner;
- (id)calendarOwner;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)defaultAlarm;
- (id)description;
- (id)emailAddress;
- (id)externalID;
- (id)init;
- (id)initWithAbsoluteDate:(id)arg1;
- (id)initWithRelativeOffset:(double)arg1;
- (bool)isAbsolute;
- (bool)isDefaultAlarm;
- (bool)isSnoozed;
- (bool)isTopographicallyEqualToAlarm:(id)arg1;
- (id)originalAlarm;
- (id)owner;
- (id)ownerUUID;
- (long long)proximity;
- (void)rebaseForDetachment;
- (double)relativeOffset;
- (id)relativeOffsetRaw;
- (void)removeSnoozedAlarm:(id)arg1;
- (void)setAbsoluteDate:(id)arg1;
- (void)setAcknowledgedDate:(id)arg1;
- (void)setBookmarkURL:(id)arg1;
- (void)setDefaultAlarm:(bool)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setIsSnoozed:(bool)arg1;
- (void)setOriginalAlarm:(id)arg1;
- (void)setProximity:(long long)arg1;
- (void)setRelativeOffset:(double)arg1;
- (void)setRelativeOffsetRaw:(id)arg1;
- (void)setSnoozedAlarms:(id)arg1;
- (void)setSnoozedAlarmsSet:(id)arg1;
- (void)setSoundName:(id)arg1;
- (void)setStructuredLocation:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUUID:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setUrlWrapper:(id)arg1;
- (id)snoozedAlarms;
- (id)snoozedAlarmsSet;
- (id)soundName;
- (id)structuredLocation;
- (long long)type;
- (id)url;
- (id)urlWrapper;
- (bool)validateWithOwner:(id)arg1 error:(id*)arg2;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

+ (id)defaultDesignator;

- (id)_localizedDescription:(bool)arg1 isAllDay:(bool)arg2;
- (id)localizedAllDayDescription;
- (id)localizedDescription;
- (id)longLocalizedAllDayDescription;
- (id)longLocalizedDescription;

@end
