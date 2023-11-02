
@interface PLCloudPersistentHistoryChangeTracker : NSObject {
    NSPersistentStoreCoordinator * _coordinator;
    <PLCloudPersistentHistoryChangeTrackerDelegate> * _delegate;
    NSPersistentHistoryToken * _lastKnownToken;
    PLChangeHandlingNotificationObserver * _notificationObserver;
}

@property (nonatomic) <PLCloudPersistentHistoryChangeTrackerDelegate> *delegate;
@property (readonly) bool hasChangeTrackerToken;
@property (readonly, copy) NSString *lastKnownTokenDescription;
@property (readonly, copy) NSString *name;

- (void).cxx_destruct;
- (id)_eventsResultFromPersistentHistoryToken:(id)arg1 inContext:(id)arg2;
- (void)_registerForChangeHandlingNotifications;
- (void)_unregisterForChangeHandlingNotifications;
- (void)_updateLastKnownTokensToToken:(id)arg1;
- (void)changeTrackerDidReceiveChangesWithTransaction:(id)arg1;
- (void)clearToken;
- (bool)connect;
- (id)currentToken;
- (id)delegate;
- (void)disconnect;
- (id)fetchAllEventsInContext:(id)arg1;
- (void)forceTokenToCurrent;
- (bool)hasChangeTrackerToken;
- (id)initWithPersistentStoreCoordinator:(id)arg1 libraryBundle:(id)arg2;
- (bool)isConnected;
- (id)lastKnownTokenDescription;
- (id)lastKnownTokenFromDisk;
- (id)name;
- (void)saveLastKnownChangeTrackerTokenToDisk;
- (void)setDelegate:(id)arg1;
- (void)updateLastKnownTokenToResult:(id)arg1;

@end
