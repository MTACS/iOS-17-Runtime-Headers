
@interface HKSummarySharingEntryStore : NSObject <HKSummarySharingEntryStoreClientInterface, _HKXPCExportable> {
    <HKSummarySharingEntryStoreDelegate> * _delegate;
    NSMutableDictionary * _fetchedEntriesByUUID;
    HKHealthStore * _healthStore;
    HKObserverSet * _observers;
    HKTaskServerProxyProvider * _proxyProvider;
    NSObject<OS_dispatch_queue> * _resourceQueue;
    id /* block */  _updateHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKSummarySharingEntryStoreDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) HKTaskServerProxyProvider *proxyProvider;
@property (nonatomic, readonly) NSArray *sharingEntries;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)serverInterface;

- (void).cxx_destruct;
- (void)_notifyObservers;
- (void)acceptInvitationWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)addObserver:(id)arg1;
- (void)beginObservingReachabilityStatusForIdentifiers:(id)arg1 isInitialQuery:(bool)arg2 completion:(id /* block */)arg3;
- (void)clientRemote_reachabilityStatusDidUpdate:(id)arg1 error:(id)arg2;
- (void)clientRemote_sharingEntriesDidUpdate:(id)arg1;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (void)declineInvitationWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (id)exportedInterface;
- (void)fetchSharingEntriesWithCompletion:(id /* block */)arg1;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1;
- (void)inviteSharingDataWithIdentifier:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 sharingAuthorizations:(id)arg4 userWheelchairMode:(long long)arg5 completion:(id /* block */)arg6;
- (void)leaveInvitationWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (id)proxyProvider;
- (id)remoteInterface;
- (void)removeObserver:(id)arg1;
- (void)revokeInvitationWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (id)sharingEntries;
- (void)unpauseInvitationWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)updateNotificationStatusWithUUID:(id)arg1 notificationStatus:(long long)arg2 completion:(id /* block */)arg3;
- (void)updateSharingAuthorizationsForInvitationUUID:(id)arg1 sharingAuthorizationsToAdd:(id)arg2 sharingAuthorizationsToDelete:(id)arg3 completion:(id /* block */)arg4;
- (void)updateSharingAuthorizationsForInvitationUUID:(id)arg1 sharingAuthorizationsToAdd:(id)arg2 sharingAuthorizationsToDelete:(id)arg3 deleteOnCommit:(bool)arg4 completion:(id /* block */)arg5;

@end
