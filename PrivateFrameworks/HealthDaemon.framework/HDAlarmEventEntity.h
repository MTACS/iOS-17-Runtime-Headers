
@interface HDAlarmEventEntity : HDHealthEntity

+ (id)checkConstraints;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)deleteAlarmEvent:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (bool)deleteAlarmEvents:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (bool)deleteAllAlarmEventsWithClientIdentifier:(id)arg1 transaction:(id)arg2 enumerationHandler:(id /* block */)arg3 error:(id*)arg4;
+ (bool)deleteAllAlarmEventsWithClientIdentifier:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (bool)enumerateAllAlarmEventsWithClientIdentifier:(id)arg1 transaction:(id)arg2 error:(id*)arg3 enumerationHandler:(id /* block */)arg4;
+ (bool)enumerateAllAlarmEventsWithTransaction:(id)arg1 error:(id*)arg2 enumerationHandler:(id /* block */)arg3;
+ (id)insertOrReplaceAlarmEvent:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (bool)insertOrReplaceAlarmEvents:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;
+ (id)uniquedColumns;

- (id)alarmEventWithTransaction:(id)arg1 error:(id*)arg2;

@end
