
@interface ASFriendListQueryServer : HDQueryServer <ASFriendListObserver> {
    ASActivitySharingManager * _activitySharingManager;
    long long  _managerStartAction;
}

@property (nonatomic) ASActivitySharingManager *activitySharingManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long managerStartAction;
@property (readonly) Class superclass;

+ (Class)queryClass;

- (void).cxx_destruct;
- (void)_activitySharingManagerProcessingStarted;
- (void)_queue_activitySharingManagerProcessingStarted;
- (void)_queue_start;
- (void)_queue_stop;
- (bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (bool)_shouldListenForUpdates;
- (id)activitySharingManager;
- (void)friendListDidLoadCompetitions;
- (void)friendListDidUpdate:(id)arg1;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (long long)managerStartAction;
- (void)setActivitySharingManager:(id)arg1;
- (void)setManagerStartAction:(long long)arg1;

@end
