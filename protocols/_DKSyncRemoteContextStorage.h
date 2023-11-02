
@protocol _DKSyncRemoteContextStorage <_DKSyncRemoteStorage>

@required

- (void)fetchContextValuesFromPeer:(void *)arg1 forKeyPaths:(void *)arg2 highPriority:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: _DKSyncPeer *, NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)sendContextValuesToPeer:(void *)arg1 registrationIdentifier:(void *)arg2 archivedObjects:(void *)arg3 highPriority:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: _DKSyncPeer *, NSString *, NSDictionary *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setDelegate:(id <_DKSyncRemoteContextStorageDelegate>)arg1;
- (void)subscribeToContextValueChangeNotificationsFromPeer:(void *)arg1 registrationIdentifier:(void *)arg2 predicate:(void *)arg3 highPriority:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: _DKSyncPeer *, NSString *, NSDictionary *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)unsubscribeFromContextValueChangeNotificationsFromPeer:(void *)arg1 registrationIdentifier:(void *)arg2 predicate:(void *)arg3 highPriority:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: _DKSyncPeer *, NSString *, NSDictionary *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
