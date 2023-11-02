
@interface _CDInMemoryUserContext : NSObject <_CDContextInternal, _CDUserContext> {
    NSMutableDictionary * _contexts;
    NSString * _localDeviceID;
    NSMutableArray * _pendingAllDeviceRegistrations;
    NSObject<OS_dispatch_queue> * _syncQueue;
    _CDInMemoryContext * _userContext;
}

@property (nonatomic, retain) NSMutableDictionary *contexts;
@property (nonatomic, retain) NSString *localDeviceID;
@property (nonatomic, retain) NSMutableArray *pendingAllDeviceRegistrations;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic, retain) _CDInMemoryContext *userContext;

+ (id)userContext;

- (void).cxx_destruct;
- (void)activateDevices:(id)arg1 remoteUserContextProxySourceDeviceUUID:(id)arg2;
- (bool)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3;
- (id)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3 valueDidChange:(bool*)arg4;
- (bool)addObjects:(id)arg1 toArrayAtKeyPath:(id)arg2;
- (id)allDeviceIDs;
- (id)allDevices;
- (id)contextForDeviceWithDeviceID:(id)arg1;
- (id)contextForKeyPath:(id)arg1;
- (id)contexts;
- (void)deactivateDevices:(id)arg1 remoteUserContextProxySourceDeviceUUID:(id)arg2;
- (void)deregisterCallback:(id)arg1;
- (id)description;
- (id)deviceWithDeviceID:(id)arg1 fromDevices:(id)arg2;
- (bool)evaluatePredicate:(id)arg1;
- (bool)hasKnowledgeOfContextualKeyPath:(id)arg1;
- (bool)hasMultiDeviceRegistrations;
- (id)init;
- (id)lastModifiedDateForContextualKeyPath:(id)arg1;
- (id)localContext;
- (id)localDeviceID;
- (id)namedDeviceIDsFromPredicate:(id)arg1;
- (id)objectForContextualKeyPath:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)pendingAllDeviceRegistrations;
- (id)propertiesForContextualKeyPath:(id)arg1;
- (void)registerCallback:(id)arg1;
- (id)remoteDeviceIDs;
- (bool)removeObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2;
- (id)removeObjectsMatchingPredicate:(id)arg1 fromArrayAtKeyPath:(id)arg2;
- (id)removeObjectsMatchingPredicate:(id)arg1 fromArrayAtKeyPath:(id)arg2 removedObjects:(id*)arg3;
- (void)setContextValue:(id)arg1 forContextualKeyPath:(id)arg2;
- (void)setContexts:(id)arg1;
- (void)setLocalDeviceID:(id)arg1;
- (bool)setObject:(id)arg1 forContextualKeyPath:(id)arg2;
- (bool)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)setObject:(id)arg1 returningMetadataForContextualKeyPath:(id)arg2;
- (void)setPendingAllDeviceRegistrations:(id)arg1;
- (void)setSyncQueue:(id)arg1;
- (void)setUserContext:(id)arg1;
- (id)syncQueue;
- (id)unsafe_contextForDeviceWithDeviceID:(id)arg1;
- (bool)unsafe_hasMultiDeviceRegistrations;
- (id)unsafe_multiDeviceRegistrations;
- (id)unsafe_multiDeviceRegistrationsByDeviceID;
- (id)unsafe_remoteDeviceIDs;
- (id)unsafe_remoteDeviceIDsForRemoteUserContextProxySourceDeviceUUID:(id)arg1;
- (id)unsafe_remoteDevices;
- (id)unsafe_remoteDevicesByDeviceIDForRemoteUserContextProxySourceDeviceUUID:(id)arg1;
- (id)unsafe_remoteDevicesForRemoteUserContextProxySourceDeviceUUID:(id)arg1;
- (id)unsafe_remoteUserContextProxySourceDeviceUUIDs;
- (id)userContext;
- (id)valuesForKeyPaths:(id)arg1;
- (id)valuesForKeyPaths:(id)arg1 inContextsMatchingPredicate:(id)arg2;

@end
