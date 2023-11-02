
@interface ASGatewayManager : NSObject <ASActivitySharingManagerReadyObserver, ASCloudKitManagerChangesObserver> {
    ASCloudKitManager * _cloudKitManager;
    bool  _currentlyPairedWatchMeetsMinimumVersion;
    ASFriendListManager * _friendListManager;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    STConversation * _screenTimeConversation;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasReachedMaximumNumberOfFriends;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isReadyToProcessChanges;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_notifyObservers;
- (bool)_shouldFilterBlacklistContactDestinations:(id)arg1;
- (bool)_shouldFilterWhitelistContactDestinations:(id)arg1;
- (void)activitySharingManagerReady:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)cloudKitManager:(id)arg1 didUpdateAccountStatus:(long long)arg2;
- (void)gatewayStatusWithCompletion:(id /* block */)arg1;
- (bool)hasReachedMaximumNumberOfFriends;
- (id)init;
- (unsigned int)inviteCompatibilityVersion;
- (bool)isInviteVersionCompatible:(unsigned int)arg1;
- (bool)isReadyToProcessChanges;
- (void)removeObserver:(id)arg1;
- (bool)shouldFilterIncomingMessageFromContact:(id)arg1;
- (void)updateState;

@end
