
@interface TSUMutableUUIDSet : TSUUUIDSet

- (bool)addUUID:(const void*)arg1;
- (void)addUUIDs:(const void*)arg1;
- (void)addUuidsFromSet:(id)arg1;
- (void)addUuidsFromVector:(const void*)arg1;
- (void)removeAllUuids;
- (bool)removeUUID:(const void*)arg1;
- (void)removeUUIDs:(const void*)arg1;
- (void)removeUuidsFromSet:(id)arg1;
- (void)removeUuidsFromVector:(const void*)arg1;

@end
