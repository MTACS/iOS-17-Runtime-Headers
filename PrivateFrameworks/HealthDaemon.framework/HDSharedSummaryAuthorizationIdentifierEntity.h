
@interface HDSharedSummaryAuthorizationIdentifierEntity : HDHealthEntity

+ (id)authorizationIdentifiersForSummaryID:(long long)arg1 databaseTransaction:(id)arg2 error:(id*)arg3;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)insertWithSummaryID:(long long)arg1 authorizationIdentifiers:(id)arg2 databaseTransaction:(id)arg3 error:(id*)arg4;
+ (long long)protectionClass;
+ (id)uniquedColumns;

@end
