
@interface _HDStaticSyncSession : HDSyncSession

- (long long)maxEncodedBytesPerChangeSetForSyncEntityClass:(Class)arg1;
- (long long)maxEncodedBytesPerCodableChangeForSyncEntityClass:(Class)arg1;
- (id)newChangeWithSyncEntityClass:(Class)arg1 version:(struct { int x1; int x2; })arg2;

@end
