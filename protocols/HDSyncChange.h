
@protocol HDSyncChange <NSObject>

@required

- (NSArray *)decodedObjectsForProfile:(HDProfile *)arg1 error:(id*)arg2;
- (bool)done;
- (long long)encodedByteCount;
- (bool)isSpeculative;
- (<HDSyncAnchorMap> *)requiredAnchorMapWithProfile:(HDProfile *)arg1 error:(id*)arg2;
- (NSNumber *)sequenceNumber;
- (void)setObjects:(NSArray *)arg1 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg2 requiredAnchorMap:(id <HDSyncAnchorMap>)arg3;
- (void)setSequenceNumber:(long long)arg1 done:(bool)arg2;
- (void)setVersionRange:(struct { int x1; int x2; })arg1;
- (struct HDSyncAnchorRange { long long x1; long long x2; })syncAnchorRange;
- (Class)syncEntityClassForProfile:(HDProfile *)arg1;
- (HDSyncEntityIdentifier *)syncEntityIdentifier;
- (struct { int x1; int x2; })versionRange;

@end
