
@interface HDMedicationScheduleItemEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)deleteMedicationScheduleItemsWithPredicate:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (bool)enumerateItemsWithPredicate:(id)arg1 orderingTerms:(id)arg2 transaction:(id)arg3 error:(id*)arg4 enumerationHandler:(id /* block */)arg5;
+ (id)insertMedicationScheduleItem:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)medicationScheduleItemWithIdentifier:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;
+ (bool)updateNotification:(bool)arg1 itemIdentifier:(id)arg2 transaction:(id)arg3 error:(id*)arg4;

@end
