
@interface ASGizmoBulletinPostingManager : NSObject <ASActivitySharingManagerReadyObserver, ASBulletinPostingManager, ASOnWristMonitorDelegate, HDDatabaseProtectedDataObserver, HDNanoAlertSuppressionObserver, UNUserNotificationCenterDelegate> {
    ASDatabaseClient * _databaseClient;
    double  _deferredBulletinTimestamp;
    <ASBulletinPostingManagerDelegate> * _delegate;
    NSMutableDictionary * _friendUUIDToCompetitionRequestNotificationRequestRecordMap;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSSet * _notificationRequests;
    ASBulletinStore * _notificationStore;
    ASOnWristMonitor * _onWristMonitor;
    UNUserNotificationCenter * _userNotificationCenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ASBulletinPostingManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_batchedNotificationRequestsFromCodableBulletins:(id)arg1;
- (id)_batchedNotificationRequestsFromCodableBulletins:(id)arg1 withAdditions:(id)arg2;
- (bool)_isPostingAllowed;
- (id)_notificationRequestFromCodableBulletin:(id)arg1;
- (id)_notificationRequestFromCodableBulletin:(id)arg1 withAdditions:(id)arg2;
- (void)_postNotificationRequest:(id)arg1;
- (void)_postQueuedNotificationRequestsIfPossible;
- (void)_queue_postNotificationRequests:(id)arg1;
- (void)_withdrawNotificationRequestsWithIdentifiers:(id)arg1;
- (void)activitySharingManagerReady:(id)arg1;
- (void)alertSuppressionInvalidatedForSuppressionId:(id)arg1 reason:(long long)arg2;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (id)delegate;
- (void)enqueueBulletins:(id)arg1 withPostingSyle:(long long)arg2;
- (void)handleNotificationResponse:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithDatabaseClient:(id)arg1;
- (void)onWristMonitorUpdatedOnWristState;
- (void)postFakeBulletins:(id)arg1;
- (void)postNotificationRequest:(id)arg1;
- (id)recordIDForFriendUUID:(id)arg1;
- (void)registerNotificationCategories:(id)arg1;
- (void)removeCompetitionNotificationsForFriendUUID:(id)arg1;
- (void)removeNotificationWithIdentifier:(id)arg1;
- (void)removeRecordIDForFriendUUID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)topicIdentifiers;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
