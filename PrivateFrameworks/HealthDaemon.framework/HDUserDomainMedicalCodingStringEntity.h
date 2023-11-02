
@interface HDUserDomainMedicalCodingStringEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)enumerateMedicalCodingStringsWithPredicate:(id)arg1 transaction:(id)arg2 error:(id*)arg3 enumerationHandler:(id /* block */)arg4;
+ (id)persistentIDForString:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;
+ (id)stringForPersistentID:(id)arg1 transaction:(id)arg2 error:(id*)arg3;

@end
