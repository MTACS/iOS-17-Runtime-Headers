
@interface EKReminder : EKCalendarItem {
    NSDateComponents * _dueDateComponents;
    EKObjectID * _parentID;
    NSDateComponents * _startDateComponents;
}

@property (getter=isCompleted, nonatomic) bool completed;
@property (nonatomic, copy) NSDate *completionDate;
@property (nonatomic, copy) NSDateComponents *dueDateComponents;
@property (nonatomic, readonly) NSTimeZone *dueDateTimeZone;
@property (nonatomic, retain) EKObjectID *parentID;
@property (nonatomic) unsigned long long priority;
@property (nonatomic, copy) NSDateComponents *startDateComponents;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

+ (void)_removeSnoozedAlarmsFromReminder:(id)arg1 usingDueDate:(id)arg2;
+ (Class)frozenClass;
+ (id)generateUniqueIDWithReminder:(id)arg1 calendar:(id)arg2;
+ (id)knownSingleValueKeysForComparison;
+ (id)reminderWithEventStore:(id)arg1;

- (void).cxx_destruct;
- (void)_adjustAfterMovingOrCopyingFromOldCalendar:(id)arg1 toNewCalendar:(id)arg2 cachedConstraintsForOldCalendar:(id)arg3 savingItem:(id)arg4;
- (void)_adjustPersistedStartDateComponentsForNewTimeZone:(id)arg1;
- (id)_generateNewUniqueID;
- (bool)_reset;
- (id)bestDisplayAlarm;
- (void)clearParentID;
- (id)committedConstraints;
- (id)completionDate;
- (id)constraints;
- (id)description;
- (unsigned long long)displayOrder;
- (id)dueDate;
- (bool)dueDateAllDay;
- (id)dueDateComponents;
- (id)dueDateComponents;
- (id)dueDateTimeZone;
- (unsigned long long)entityType;
- (id)externalURI;
- (id)firstAlertDate;
- (void)forceUpdateFrozenCalendar:(id)arg1;
- (id)init;
- (id)initWithPersistentObject:(id)arg1;
- (bool)isAllDay;
- (bool)isCompleted;
- (id)parentID;
- (bool)refresh;
- (id)reminderIdentifier;
- (void)reset;
- (void)rollback;
- (bool)save:(id*)arg1;
- (void)setAllDay:(bool)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setCompletionDate:(id)arg1;
- (void)setDisplayOrder:(unsigned long long)arg1;
- (void)setDueDate:(id)arg1;
- (void)setDueDateComponents:(id)arg1;
- (void)setDueDateComponents:(id)arg1;
- (void)setFirstAlertDate:(id)arg1;
- (void)setParentID:(id)arg1;
- (void)setStartDateAllDay:(bool)arg1;
- (void)setStartDateComponents:(id)arg1;
- (void)setStartDateComponents:(id)arg1;
- (void)setStartDateTimeZone:(id)arg1;
- (void)setStartTimeZone:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2 pinsTriggerToStartDate:(bool)arg3;
- (bool)startDateAllDay;
- (id)startDateComponents;
- (id)startDateComponents;
- (id)startDateComponentsRaw;
- (id)startDateForRecurrence;
- (id)startDateTimeZone;
- (id)startTimeZone;
- (id)timeZone;
- (id)title;
- (bool)validate:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit

+ (id)actionStringsDisplayName;
+ (id)actionStringsPluralDisplayName;

- (bool)CUIKEditingContext_removeWithSpan:(long long)arg1 error:(id*)arg2;
- (bool)CUIKEditingContext_saveWithSpan:(long long)arg1 error:(id*)arg2;
- (id)actionStringsDisplayTitle;

@end
