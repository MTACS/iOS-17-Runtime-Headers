
@interface AFPeerMap : NSObject {
    NSMutableDictionary * _objectsByUUID;
    NSMutableDictionary * _uuidsByAssistantIdentifier;
    NSMutableDictionary * _uuidsByHomeKitIdentifier;
    NSMutableDictionary * _uuidsByIdsDeviceIdentifier;
    NSMutableDictionary * _uuidsByRapportIdentifier;
}

- (void).cxx_destruct;
- (void)_cleanUpUUIDMapsForPeerInfo:(id)arg1;
- (id)_getUUIDAndUpdateIDMapsForPeerInfo:(id)arg1;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)objectForPeerInfo:(id)arg1;
- (void)removeObjectForPeerInfo:(id)arg1;
- (void)setObject:(id)arg1 forPeerInfo:(id)arg2;

@end
