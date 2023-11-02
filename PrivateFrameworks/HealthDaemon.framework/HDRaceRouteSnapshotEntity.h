
@interface HDRaceRouteSnapshotEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)insertSnapshotData:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;
+ (bool)pruneUnreachableDataWithTransaction:(id)arg1 error:(id*)arg2;

- (bool)deleteDataWithTransaction:(id)arg1 error:(id*)arg2;
- (id)snapshotDataWithTransaction:(id)arg1 error:(id*)arg2;
- (bool)updateSnapshotData:(id)arg1 transaction:(id)arg2 error:(id*)arg3;

@end
