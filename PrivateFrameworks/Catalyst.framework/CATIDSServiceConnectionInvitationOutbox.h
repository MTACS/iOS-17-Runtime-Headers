
@interface CATIDSServiceConnectionInvitationOutbox : NSObject {
    <CATIDSServiceConnectionInvitationOutboxDelegate> * _delegate;
    <CATAssertionProviding> * mAssertionProvider;
    NSMutableDictionary * mInFlightInvitationRequestsByInvitationID;
    NSMutableArray * mInvitationRequestQueue;
    bool  mIsActive;
    NSObject<OS_dispatch_queue> * mWorkQueue;
}

@property (nonatomic) <CATIDSServiceConnectionInvitationOutboxDelegate> *delegate;

- (void).cxx_destruct;
- (void)beginInvitationWithIdentifier:(id)arg1 appleID:(id)arg2 userInfo:(id)arg3;
- (void)cancelAllInvitations;
- (void)cancelAllPowerAssertions;
- (void)cancelInvitationWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithAssertionProvider:(id)arg1 workQueue:(id)arg2;
- (void)receiveAcceptForInvitation:(id)arg1 connectionIdentifier:(id)arg2 senderAddress:(id)arg3 messagingVersion:(unsigned long long)arg4;
- (void)receiveRejectForInvitation:(id)arg1 connectionIdentifier:(id)arg2 senderAddress:(id)arg3 error:(id)arg4;
- (void)resume;
- (void)serviceInvitationQueue;
- (void)setDelegate:(id)arg1;
- (void)suspend;

@end
