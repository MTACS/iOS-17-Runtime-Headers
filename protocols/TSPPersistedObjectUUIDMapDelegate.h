
@protocol TSPPersistedObjectUUIDMapDelegate

@required

- (void)persistedObjectUUIDMap:(TSPPersistedObjectUUIDMap *)arg1 foundDuplicateUUID:(NSUUID *)arg2 firstObjectLocation:(struct TSPObjectLocation { long long x1; long long x2; })arg3 secondObjectLocation:(struct TSPObjectLocation { long long x1; long long x2; })arg4;
- (NSString *)persistedObjectUUIDMap:(TSPPersistedObjectUUIDMap *)arg1 needsDescriptionForComponentIdentifier:(long long)arg2 objectIdentifier:(long long)arg3;

@end
