
@interface HDSummarySharingEntryIDSManager : NSObject <HDIDSInvitationManagerDelegate, HDProfileReadyObserver> {
    HDIDSInvitationManager * _invitationManager;
    HKObserverSet * _observers;
    NSOperationQueue * _operationQueue;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HDIDSReachabilityOperation * _reachabilityOperation;
    NSObject<OS_dispatch_queue> * _reachabilityQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDIDSInvitationManager *invitationManager;
@property (nonatomic, retain) HKObserverSet *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)acceptInvitationWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)addObserver:(id)arg1;
- (void)beginObservingReachabilityStatusForIdentifiers:(id)arg1 isInitialQuery:(bool)arg2;
- (void)declineInvitationWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithProfile:(id)arg1;
- (void)invalidateAndWait;
- (id)invitationManager;
- (void)invitationManager:(id)arg1 didAcceptInvitation:(id)arg2;
- (void)invitationManager:(id)arg1 didDeclineInvitation:(id)arg2;
- (void)invitationManager:(id)arg1 didReceiveInvitation:(id)arg2;
- (void)invitationManager:(id)arg1 didRescindInvitation:(id)arg2;
- (void)inviteSharingDataWithIdentifier:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 sharingAuthorizations:(id)arg4 userWheelchairMode:(long long)arg5 completion:(id /* block */)arg6;
- (void)leaveInvitationWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (id)observers;
- (void)profileDidBecomeReady:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)revokeInvitationWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)setInvitationManager:(id)arg1;
- (void)setObservers:(id)arg1;

@end
