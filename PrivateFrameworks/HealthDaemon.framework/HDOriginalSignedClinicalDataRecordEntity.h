
@interface HDOriginalSignedClinicalDataRecordEntity : HDHealthEntity

+ (id)allColumns;
+ (id)allProperties;
+ (id)checkConstraints;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)entityWithSyncIdentifier:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)existingEntityWithSyncIdentifier:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)foreignKeys;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (id)uniquedColumns;

@end
