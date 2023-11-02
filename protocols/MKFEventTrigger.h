
@protocol MKFEventTrigger <MKFTrigger, MKFEventTriggerPublicExtensions>

@required

- (<MKFEvent> *)createEventsRelationOfType:(Protocol *)arg1 modelID:(NSUUID *)arg2;
- (<MKFCalendarEvent> *)createEventsRelationOfTypeCalendarEventWithModelID:(NSUUID *)arg1;
- (<MKFCharacteristicRangeEvent> *)createEventsRelationOfTypeCharacteristicRangeEventWithModelID:(NSUUID *)arg1;
- (<MKFCharacteristicValueEvent> *)createEventsRelationOfTypeCharacteristicValueEventWithModelID:(NSUUID *)arg1;
- (<MKFDurationEvent> *)createEventsRelationOfTypeDurationEventWithModelID:(NSUUID *)arg1;
- (<MKFLocationEvent> *)createEventsRelationOfTypeLocationEventWithModelID:(NSUUID *)arg1;
- (<MKFPresenceEvent> *)createEventsRelationOfTypePresenceEventWithModelID:(NSUUID *)arg1;
- (<MKFSignificantTimeEvent> *)createEventsRelationOfTypeSignificantTimeEventWithModelID:(NSUUID *)arg1;
- (MKFEventTriggerDatabaseID *)databaseID;
- (NSPredicate *)evaluationCondition;
- (NSArray *)events;
- (NSNumber *)executeOnce;
- (<MKFCalendarEvent> *)findEventsRelationOfTypeCalendarEventWithModelID:(NSUUID *)arg1;
- (<MKFCharacteristicRangeEvent> *)findEventsRelationOfTypeCharacteristicRangeEventWithModelID:(NSUUID *)arg1;
- (<MKFCharacteristicValueEvent> *)findEventsRelationOfTypeCharacteristicValueEventWithModelID:(NSUUID *)arg1;
- (<MKFDurationEvent> *)findEventsRelationOfTypeDurationEventWithModelID:(NSUUID *)arg1;
- (<MKFLocationEvent> *)findEventsRelationOfTypeLocationEventWithModelID:(NSUUID *)arg1;
- (<MKFPresenceEvent> *)findEventsRelationOfTypePresenceEventWithModelID:(NSUUID *)arg1;
- (<MKFSignificantTimeEvent> *)findEventsRelationOfTypeSignificantTimeEventWithModelID:(NSUUID *)arg1;
- (<MKFEvent> *)materializeOrCreateEventsRelationOfType:(Protocol *)arg1 modelID:(NSUUID *)arg2 createdNew:(bool*)arg3;
- (<MKFCalendarEvent> *)materializeOrCreateEventsRelationOfTypeCalendarEventWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFCharacteristicRangeEvent> *)materializeOrCreateEventsRelationOfTypeCharacteristicRangeEventWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFCharacteristicValueEvent> *)materializeOrCreateEventsRelationOfTypeCharacteristicValueEventWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFDurationEvent> *)materializeOrCreateEventsRelationOfTypeDurationEventWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFLocationEvent> *)materializeOrCreateEventsRelationOfTypeLocationEventWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFPresenceEvent> *)materializeOrCreateEventsRelationOfTypePresenceEventWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFSignificantTimeEvent> *)materializeOrCreateEventsRelationOfTypeSignificantTimeEventWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (NSNumber *)recurrenceDays;
- (void)setEvaluationCondition:(NSPredicate *)arg1;
- (void)setExecuteOnce:(NSNumber *)arg1;
- (void)setRecurrenceDays:(NSNumber *)arg1;

@end
