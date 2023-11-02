
@interface CATIDSServiceConnectionTerminal : NSObject <CATIDSMessageBroadcaster, CATIDSServiceConnectionInvitationInboxDelegate, CATIDSServiceConnectionInvitationOutboxDelegate> {
    <CATIDSServiceConnectionTerminalDelegate> * _delegate;
    NSHashTable * mBroadcastHandlers;
    CATIDSServiceConnectionConfiguration * mConnectionConfiguration;
    NSObject<OS_dispatch_queue> * mDelegateQueue;
    <CATIDSPrimitives> * mIDSPrimitives;
    CATIDSServiceConnectionInvitationInbox * mInvitationInbox;
    CATIDSServiceConnectionInvitationOutbox * mInvitationOutbox;
    bool  mIsActive;
    <CATIDSSubscription> * mMessageSubscription;
    NSString * mSourceAppleID;
    <CATTimerSource> * mTimerSource;
    NSObject<OS_dispatch_queue> * mWorkQueue;
}

@property (nonatomic) <CATIDSServiceConnectionTerminalDelegate> *delegate;

- (void).cxx_destruct;
- (void)addBroadcastHandler:(id)arg1;
- (void)cancelAllInvitations;
- (void)cancelInvitationWithIdentifier:(id)arg1;
- (void)connectionInvitatioInbox:(id)arg1 timeoutOutForInvitation:(id)arg2 connectionIdentifier:(id)arg3 senderAppleID:(id)arg4 userInfo:(id)arg5;
- (void)connectionInvitationInbox:(id)arg1 foundConection:(id)arg2 senderAppleID:(id)arg3 senderAddress:(id)arg4 assertion:(id)arg5 messagingVersion:(unsigned long long)arg6 userInfo:(id)arg7;
- (void)connectionInvitationInbox:(id)arg1 rejectedInvitation:(id)arg2 connectionIdentifier:(id)arg3 appleID:(id)arg4 address:(id)arg5 error:(id)arg6;
- (void)connectionInvitationInbox:(id)arg1 shouldConnectToAppleID:(id)arg2 connectionIdentifier:(id)arg3 userInfo:(id)arg4 responseHandler:(id /* block */)arg5;
- (void)connectionInvitationInbox:(id)arg1 wantsToAcceptInvitation:(id)arg2 connectionIdentifier:(id)arg3 destinationAddress:(id)arg4;
- (void)connectionInvitationOutbox:(id)arg1 foundConnection:(id)arg2 destinationAppleID:(id)arg3 destinationAddress:(id)arg4 assertion:(id)arg5 messagingVersion:(unsigned long long)arg6 userInfo:(id)arg7;
- (void)connectionInvitationOutbox:(id)arg1 receivedARejectionFrom:(id)arg2 connectionIdentifier:(id)arg3 userInfo:(id)arg4 error:(id)arg5;
- (void)connectionInvitationOutbox:(id)arg1 wantsToAcknowledgeInvitation:(id)arg2 connectionIdentifier:(id)arg3 destinationAddress:(id)arg4;
- (void)connectionInvitationOutbox:(id)arg1 wantsToSendInvitation:(id)arg2 destinationAppleID:(id)arg3 userInfo:(id)arg4;
- (id)delegate;
- (id)description;
- (id)initWithIDSPrimitives:(id)arg1 assertionProvider:(id)arg2 sourceAppleID:(id)arg3;
- (id)initWithIDSPrimitives:(id)arg1 assertionProvider:(id)arg2 sourceAppleID:(id)arg3 connectionConfiguration:(id)arg4;
- (id)initWithIDSPrimitives:(id)arg1 assertionProvider:(id)arg2 timerSource:(id)arg3 workQueue:(id)arg4 delegateQueue:(id)arg5 sourceAppleID:(id)arg6 connectionConfiguration:(id)arg7;
- (id)initWithIDSPrimitives:(id)arg1 networkPowerPrimitives:(id)arg2 sourceAppleID:(id)arg3;
- (id)inviteAppleIDToConnect:(id)arg1 userInfo:(id)arg2;
- (void)processMessage:(id)arg1 senderAppleID:(id)arg2 senderAddress:(id)arg3;
- (void)resume;
- (void)sendContent:(id)arg1 toAddress:(id)arg2 forInvitation:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)suspend;

@end
