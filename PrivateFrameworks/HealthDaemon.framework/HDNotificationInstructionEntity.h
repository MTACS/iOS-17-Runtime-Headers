
@interface HDNotificationInstructionEntity : HDHealthEntity <HDHealthEntitySchema>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)attemptProtectedReadTransactionWithUnprotectedFallbackWithHealthDatabase:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)enumerateAllNotificationInstructionsWithTransaction:(id)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 ascending:(bool)arg4 error:(id*)arg5 enumerationHandler:(id /* block */)arg6;
+ (bool)enumerateNotificationInstructionsWithClientIdentifier:(id)arg1 action:(long long)arg2 notExpiredBeforeDate:(id)arg3 transaction:(id)arg4 error:(id*)arg5 enumerationHandler:(id /* block */)arg6;
+ (bool)enumerateNotificationInstructionsWithSetCriteriaNotExpiredBeforeDate:(id)arg1 transaction:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4 enumerationHandler:(id /* block */)arg5;
+ (id)insertOrReplaceNotificationInstruction:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (bool)invalidateNotificationInstructionWithMessageIdentifier:(id)arg1 modificationDate:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (bool)obliterateNotificationInstructionsWithTransaction:(id)arg1 error:(id*)arg2;
+ (long long)protectionClass;
+ (id)pruneWithProfile:(id)arg1 nowDate:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4;

@end
