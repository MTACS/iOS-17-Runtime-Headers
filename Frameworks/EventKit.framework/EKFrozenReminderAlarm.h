
@interface EKFrozenReminderAlarm : EKFrozenReminderObject {
    REMAlarm * _locationAlarm;
    REMAlarm * _timeAlarm;
}

@property (readonly) NSArray *alarms;
@property (readonly) NSString *externalID;
@property (readonly) EKFrozenReminderStructuredLocation *structuredLocation;
@property (readonly) NSArray *triggers;

+ (long long)ekAlarmProximityToEKAlarmProximity:(long long)arg1;
+ (Class)meltedClass;
+ (long long)remAlarmProximityToEKAlarmProximity:(long long)arg1;
+ (id)semanticIdentifierFromDateComponents:(id)arg1;
+ (id)semanticIdentifierFromREMAlarm:(id)arg1;
+ (id)triggersFromAbsoluteDate:(id)arg1 relativeOffset:(double)arg2 timeValuesRelevant:(bool)arg3 structuredLocation:(id)arg4 proximity:(long long)arg5;
+ (id)uniqueIdentifierForREMObject:(id)arg1;

- (void).cxx_destruct;
- (id)UUID;
- (bool)_applyChanges:(id)arg1 error:(id*)arg2;
- (bool)_applyChangesToSaveRequest:(id)arg1 error:(id*)arg2;
- (id)_effectiveAlarm;
- (id)_locationAlarm;
- (id)_remStructuredLocation;
- (void)_setTimeAndLocationAlarms:(id)arg1;
- (id)_setTimeOrLocationAlarm:(id)arg1;
- (id)_timeAlarm;
- (id)absoluteDate;
- (id)acknowledgedDate;
- (id)alarms;
- (id)calendarItemOwner;
- (id)calendarOwner;
- (id)emailAddress;
- (id)externalID;
- (id)initWithAlarms:(id)arg1 inStore:(id)arg2;
- (id)initWithAlarms:(id)arg1 inStore:(id)arg2 withChanges:(id)arg3;
- (id)initWithAlternateUniverseObject:(id)arg1 inEventStore:(id)arg2 withUpdatedChildObjects:(id)arg3;
- (id)initWithREMObject:(id)arg1 inStore:(id)arg2 withChanges:(id)arg3;
- (bool)isDefaultAlarm;
- (id)modifiedStructuredLocation;
- (id)originalAlarm;
- (long long)proximity;
- (double)relativeOffset;
- (id)remObjectID;
- (void)setCalendarItemOwner:(id)arg1;
- (void)setCalendarOwner:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUrlWrapper:(id)arg1;
- (id)snoozedAlarmsSet;
- (id)structuredLocation;
- (id)triggers;
- (long long)type;
- (id)uniqueIdentifier;
- (id)updatedAlarmWithLocation:(id)arg1;
- (id)updatedFrozenObjectWithChanges:(id)arg1 updatedChildren:(id)arg2;
- (id)urlWrapper;

@end
