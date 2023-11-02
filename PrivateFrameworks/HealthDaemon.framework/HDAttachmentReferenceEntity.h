
@interface HDAttachmentReferenceEntity : HDHealthEntity

+ (id)_insertIfDoesNotExistReference:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)_insertReference:(id)arg1 databaseTransaction:(id)arg2 error:(id*)arg3;
+ (id)anyReferenceWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)deleteReferences:(id)arg1 cloudStatus:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (bool)enumerateReferencesForAttachmentIdentifier:(id)arg1 type:(long long)arg2 transaction:(id)arg3 error:(id*)arg4 enumerationHandler:(id /* block */)arg5;
+ (bool)enumerateReferencesForObjectIdentifier:(id)arg1 schemaIdentifier:(id)arg2 transaction:(id)arg3 error:(id*)arg4 enumerationHandler:(id /* block */)arg5;
+ (bool)enumerateReferencesWithPredicate:(id)arg1 transaction:(id)arg2 error:(id*)arg3 enumerationHandler:(id /* block */)arg4;
+ (bool)filteredNonTombstoneReferences:(id)arg1 transaction:(id)arg2 error:(id*)arg3 enumerationHandler:(id /* block */)arg4;
+ (bool)insertReference:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (bool)insertTombstones:(id)arg1 cloudStatus:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (long long)protectionClass;
+ (id)referenceWithIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (bool)setCloudStatus:(long long)arg1 references:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (bool)setCloudStatus:(long long)arg1 transaction:(id)arg2 error:(id*)arg3;

@end
