
@interface HDSeriesBuilderEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)createPersistentEntityForBuilderIdentifier:(id)arg1 seriesType:(id)arg2 state:(long long)arg3 profile:(id)arg4 error:(id*)arg5;
+ (id)databaseTable;
+ (bool)discardBuilderWithIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)freezeSeriesWithIdentifier:(id)arg1 metadata:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)persistentEntityForBuilderIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;
+ (Class)seriesEntityClass;

- (bool)insertMetadata:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)metadataWithTransaction:(id)arg1 error:(id*)arg2;
- (bool)setBuilderState:(long long)arg1 transaction:(id)arg2 error:(id*)arg3;
- (long long)stateWithTransaction:(id)arg1 error:(id*)arg2;

@end
