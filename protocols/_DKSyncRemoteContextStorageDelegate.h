
@protocol _DKSyncRemoteContextStorageDelegate <_DKSyncRemoteStorageDelegate>

@required

- (NSDictionary *)remoteContextStorage:(id <_DKSyncRemoteContextStorage>)arg1 archivedObjectsForKeyPaths:(NSArray *)arg2;
- (bool)remoteContextStorage:(id <_DKSyncRemoteContextStorage>)arg1 hasKnowledgeOfKeyPath:(NSString *)arg2;
- (void)remoteContextStorage:(id <_DKSyncRemoteContextStorage>)arg1 registrationIdentifier:(NSString *)arg2 setArchivedObjects:(NSDictionary *)arg3 peer:(_DKSyncPeer *)arg4;
- (void)remoteContextStorage:(id <_DKSyncRemoteContextStorage>)arg1 subscribeToChangesWithPeer:(_DKSyncPeer *)arg2 registrationIdentifier:(NSString *)arg3 predicate:(NSDictionary *)arg4;
- (void)remoteContextStorage:(id <_DKSyncRemoteContextStorage>)arg1 unsubscribeFromChangesWithPeer:(_DKSyncPeer *)arg2 registrationIdentifier:(NSString *)arg3 predicate:(NSDictionary *)arg4;

@end
