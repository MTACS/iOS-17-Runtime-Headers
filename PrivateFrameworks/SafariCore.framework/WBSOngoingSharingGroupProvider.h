
@interface WBSOngoingSharingGroupProvider : NSObject <KCSharingGroupManagerSubscriberProtocol> {
    NSString * _cachedCurrentUserParticipantID;
    NSArray * _cachedGroups;
    NSArray * _cachedInvitations;
    NSMutableDictionary * _groupIDToPermissionLevelForCurrentUser;
    id  _keybagLockStatusObserverToken;
    NSObject<OS_dispatch_queue> * _queue;
    NSHashTable * _subscribers;
}

@property (nonatomic, readonly) NSArray *cachedGroups;
@property (nonatomic, readonly) NSArray *cachedInvitations;
@property (nonatomic, readonly) NSString *currentUserParticipantID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedProvider;

- (void).cxx_destruct;
- (void)_addNewGroupToCachedGroups:(id)arg1;
- (void)_contactsUpdatedNotification:(id)arg1;
- (void)_fetchCurrentUserParticipantIDWithCompletion:(id /* block */)arg1;
- (void)_fetchGroups;
- (void)_fetchGroupsWithCompletion:(id /* block */)arg1;
- (void)_notifySubscribers;
- (void)_performTaskEnsuringGroupsAreLoadedOnQueue:(id)arg1 shouldForceUpdate:(bool)arg2 task:(id /* block */)arg3;
- (void)_updateCachedPermissionLevelsForCurrentUser;
- (void)accountChanged;
- (void)addSubscriber:(id)arg1;
- (id)cachedGroupWithID:(id)arg1;
- (id)cachedGroups;
- (id)cachedInvitations;
- (bool)canCurrentUserEditSavedAccountsInGroupWithID:(id)arg1;
- (id)currentUserParticipantID;
- (void)dealloc;
- (void)groupsUpdated;
- (id)init;
- (void)performTaskEnsuringGroupsAreLoadedOnQueue:(id)arg1 task:(id /* block */)arg2;
- (void)performTaskOnQueueAfterFetchingGroups:(id)arg1 task:(id /* block */)arg2;

@end
