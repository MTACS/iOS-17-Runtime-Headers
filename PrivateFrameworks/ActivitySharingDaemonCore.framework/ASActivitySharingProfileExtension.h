
@interface ASActivitySharingProfileExtension : NSObject <ASActivitySharingManagerProvider, ASActivitySharingPluginInterface, HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver, HDProfileExtension> {
    ASActivitySharingManager * _activitySharingManager;
    ASDaemonWakeCoordinator * _daemonWakeCoordinator;
    ASDatabaseClient * _databaseClient;
    HDProfile * _profile;
}

@property (nonatomic, retain) ASActivitySharingManager *activitySharingManager;
@property (nonatomic, retain) ASDaemonWakeCoordinator *daemonWakeCoordinator;
@property (nonatomic, retain) ASDatabaseClient *databaseClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDProfile *profile;
@property (readonly) Class superclass;

+ (id)activitySharingManagerForProfile:(id)arg1;

- (void).cxx_destruct;
- (id)activitySharingManager;
- (id)allFriends;
- (void)daemonReady:(id)arg1;
- (id)daemonWakeCoordinator;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (id)databaseClient;
- (id)initWithProfile:(id)arg1;
- (id)profile;
- (void)setActivitySharingManager:(id)arg1;
- (void)setDaemonWakeCoordinator:(id)arg1;
- (void)setDatabaseClient:(id)arg1;

@end
