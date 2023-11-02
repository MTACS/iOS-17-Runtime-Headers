
@interface HDSummarySharingEntryEntity : HDHealthEntity

+ (id)_propertiesForEntity;
+ (id)anyWithUUID:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)codableWithRow:(struct HDSQLiteRow { }*)arg1;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)enumerateCodableEntriesWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (bool)enumerateCodableEntriesWithPredicate:(id)arg1 transaction:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (id)indices;
+ (bool)insertOrReplaceCodableEntry:(id)arg1 CNContactIdentifier:(id)arg2 shouldPause:(bool)arg3 syncProvenance:(long long)arg4 transaction:(id)arg5 error:(id*)arg6;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (bool)updateNotificationStatusForInvitiationWithUUID:(id)arg1 newNotificationStatus:(long long)arg2 dateModified:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (bool)updateOwnerParticipant:(id)arg1 cloudKitIdentifier:(id)arg2 predicate:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (void)updatePauseStateForEntryWithUUID:(id)arg1 shouldPause:(bool)arg2;
+ (bool)updateStatus:(long long)arg1 dateModified:(id)arg2 dateAccepted:(id)arg3 predicate:(id)arg4 profile:(id)arg5 error:(id*)arg6;

@end
