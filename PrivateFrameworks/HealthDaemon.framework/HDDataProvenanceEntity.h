
@interface HDDataProvenanceEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)insertOrLookupDataProvenanceForSyncProvenance:(long long)arg1 syncIdentity:(long long)arg2 originProductType:(id)arg3 originSystemBuild:(id)arg4 originOSVersion:(struct { long long x1; long long x2; long long x3; })arg5 localProductType:(id)arg6 localSystemBuild:(id)arg7 sourceVersion:(id)arg8 timeZoneName:(id)arg9 sourceID:(id)arg10 deviceID:(id)arg11 contributorID:(id)arg12 transaction:(id)arg13 error:(id*)arg14;
+ (id)originProvenanceForPersistentID:(long long)arg1 database:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;
+ (id)sourceIDsWithProvenanceFromSourceIDs:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)uniquedColumns;
+ (bool)validateEntityWithProfile:(id)arg1 error:(id*)arg2 validationErrorHandler:(id /* block */)arg3;

@end
