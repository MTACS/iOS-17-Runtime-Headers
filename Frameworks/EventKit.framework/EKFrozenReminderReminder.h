
@interface EKFrozenReminderReminder : EKFrozenReminderObject

+ (Class)meltedClass;

- (id)URLString;
- (id)UUID;
- (bool)_applyChanges:(id)arg1 error:(id*)arg2;
- (bool)_applyChangesToSaveRequest:(id)arg1 error:(id*)arg2;
- (id)_copyToNewList:(id)arg1 error:(id*)arg2;
- (void)_fixAlarmUUIDsForClone:(id)arg1 from:(id)arg2;
- (id)_reminder;
- (id)actionString;
- (id)alarms;
- (id)allAlarmsSet;
- (id)appLinkData;
- (id)attachmentsSet;
- (id)attendeesRaw;
- (id)calendar;
- (id)calendarItemExternalIdentifier;
- (id)calendarItemIdentifier;
- (id)clientLocation;
- (id)completionDate;
- (id)creationDate;
- (bool)defaultAlarmRemoved;
- (bool)defaultAlarmWasDeleted;
- (id)detachedItems;
- (id)dueDateComponents;
- (id)ekExceptionDates;
- (bool)hasAttendees;
- (bool)hasNotes;
- (bool)hasRecurrenceRules;
- (id)initNewReminderInStore:(id)arg1;
- (id)lastModifiedDate;
- (id)notes;
- (id)organizer;
- (id)originalItem;
- (unsigned long long)priority;
- (id)recurrenceRulesSet;
- (id)remObjectID;
- (id)selfAttendee;
- (id)startDateComponents;
- (id)structuredLocation;
- (id)structuredLocationWithoutPrediction;
- (id)syncError;
- (id)timeZone;
- (id)travelStartLocation;
- (id)uniqueID;
- (id)uniqueIdentifier;
- (id)unlocalizedTitle;

@end
