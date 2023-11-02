
@interface HDCachedQueryMetadataEntity : HDHealthEntity <HDHealthEntitySchema>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)cachedQueryMetadataForQueryIdentifier:(id)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)creationDateForQueryIdentifier:(id)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)databaseTable;
+ (id)generationNumberForQueryIdentifier:(id)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)insertCachedQueryMetadata:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)lastUpdatedDateForQueryIdentifier:(id)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (long long)protectionClass;
+ (id)pruneWithProfile:(id)arg1 nowDate:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4;
+ (id)uniquedColumns;
+ (bool)updateCachedQueryMetadata:(id)arg1 profile:(id)arg2 error:(id*)arg3;

@end
